#include"Gr2D_DX9.h"
#include"Gr2D_DX9_org_data.h"

DWORD Gr2D_DX9_ExportList[0x2];

void _declspec(naked) Gr2D_DX9_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [Gr2D_DX9_ExportList+eax*0x04]
	}
}

void _declspec(naked) Gr2D_DX9_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [Gr2D_DX9_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("Gr2D_DX9.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, Gr2D_DX9_org_data, sizeof(Gr2D_DX9_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("Gr2D_DX9.old");

	Gr2D_DX9_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "DllCanUnloadNow");
	Gr2D_DX9_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "DllGetClassObject");


}

