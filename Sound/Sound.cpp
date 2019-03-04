#include"Sound.h"
#include"Sound_org_data.h"

DWORD Sound_ExportList[0x2];

void _declspec(naked) Sound_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [Sound_ExportList+eax*0x04]
	}
}

void _declspec(naked) Sound_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [Sound_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("Sound.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, Sound_org_data, sizeof(Sound_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("Sound.old");

	Sound_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "DllCanUnloadNow");
	Sound_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "DllGetClassObject");


}

