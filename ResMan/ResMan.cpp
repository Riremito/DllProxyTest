#include"ResMan.h"
#include"ResMan_org_data.h"

DWORD ResMan_ExportList[0x2];

void _declspec(naked) ResMan_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [ResMan_ExportList+eax*0x04]
	}
}

void _declspec(naked) ResMan_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [ResMan_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("ResMan.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, ResMan_org_data, sizeof(ResMan_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("ResMan.old");

	ResMan_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "DllCanUnloadNow");
	ResMan_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "DllGetClassObject");


}

