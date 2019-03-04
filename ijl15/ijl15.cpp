#include"ijl15.h"
#include"ijl15_org_data.h"

DWORD ijl15_ExportList[0x6];

void _declspec(naked) ijl15_Export_6(){
	_asm{
		mov eax,0x0
		jmp dword ptr [ijl15_ExportList+eax*0x04]
	}
}

void _declspec(naked) ijl15_Export_3(){
	_asm{
		mov eax,0x1
		jmp dword ptr [ijl15_ExportList+eax*0x04]
	}
}

void _declspec(naked) ijl15_Export_1(){
	_asm{
		mov eax,0x2
		jmp dword ptr [ijl15_ExportList+eax*0x04]
	}
}

void _declspec(naked) ijl15_Export_2(){
	_asm{
		mov eax,0x3
		jmp dword ptr [ijl15_ExportList+eax*0x04]
	}
}

void _declspec(naked) ijl15_Export_4(){
	_asm{
		mov eax,0x4
		jmp dword ptr [ijl15_ExportList+eax*0x04]
	}
}

void _declspec(naked) ijl15_Export_5(){
	_asm{
		mov eax,0x5
		jmp dword ptr [ijl15_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("ijl15.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, ijl15_org_data, sizeof(ijl15_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("ijl15.old");

	ijl15_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "ijlErrorStr");
	ijl15_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "ijlFree");
	ijl15_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "ijlGetLibVersion");
	ijl15_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "ijlInit");
	ijl15_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "ijlRead");
	ijl15_ExportList[0x5] = (DWORD)GetProcAddress(hModule, "ijlWrite");


}

