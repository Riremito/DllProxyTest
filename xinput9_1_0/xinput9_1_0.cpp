#include"xinput9_1_0.h"
#include"xinput9_1_0_org_data.h"

DWORD xinput9_1_0_ExportList[0x5];

void _declspec(naked) xinput9_1_0_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [xinput9_1_0_ExportList+eax*0x04]
	}
}

void _declspec(naked) xinput9_1_0_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [xinput9_1_0_ExportList+eax*0x04]
	}
}

void _declspec(naked) xinput9_1_0_Export_3(){
	_asm{
		mov eax,0x2
		jmp dword ptr [xinput9_1_0_ExportList+eax*0x04]
	}
}

void _declspec(naked) xinput9_1_0_Export_4(){
	_asm{
		mov eax,0x3
		jmp dword ptr [xinput9_1_0_ExportList+eax*0x04]
	}
}

void _declspec(naked) xinput9_1_0_Export_5(){
	_asm{
		mov eax,0x4
		jmp dword ptr [xinput9_1_0_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("xinput9_1_0.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, xinput9_1_0_org_data, sizeof(xinput9_1_0_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("xinput9_1_0.old");

	xinput9_1_0_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "DllMain");
	xinput9_1_0_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "XInputGetCapabilities");
	xinput9_1_0_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "XInputGetDSoundAudioDeviceGuids");
	xinput9_1_0_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "XInputGetState");
	xinput9_1_0_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "XInputSetState");


}

