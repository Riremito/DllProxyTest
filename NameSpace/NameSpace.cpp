#include"NameSpace.h"
#include"NameSpace_org_data.h"

DWORD NameSpace_ExportList[0x2];

void _declspec(naked) NameSpace_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [NameSpace_ExportList+eax*0x04]
	}
}

void _declspec(naked) NameSpace_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [NameSpace_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("NameSpace.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, NameSpace_org_data, sizeof(NameSpace_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("NameSpace.old");

	NameSpace_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "DllCanUnloadNow");
	NameSpace_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "DllGetClassObject");


}

