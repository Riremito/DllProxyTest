#include"Shape2D.h"
#include"Shape2D_org_data.h"

DWORD Shape2D_ExportList[0x2];

void _declspec(naked) Shape2D_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [Shape2D_ExportList+eax*0x04]
	}
}

void _declspec(naked) Shape2D_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [Shape2D_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("Shape2D.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, Shape2D_org_data, sizeof(Shape2D_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("Shape2D.old");

	Shape2D_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "DllCanUnloadNow");
	Shape2D_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "DllGetClassObject");


}

