#include"WzFlashRenderer.h"
#include"WzFlashRenderer_org_data.h"

DWORD WzFlashRenderer_ExportList[0x6];

void _declspec(naked) WzFlashRenderer_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [WzFlashRenderer_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzFlashRenderer_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [WzFlashRenderer_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzFlashRenderer_Export_3(){
	_asm{
		mov eax,0x2
		jmp dword ptr [WzFlashRenderer_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzFlashRenderer_Export_4(){
	_asm{
		mov eax,0x3
		jmp dword ptr [WzFlashRenderer_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzFlashRenderer_Export_5(){
	_asm{
		mov eax,0x4
		jmp dword ptr [WzFlashRenderer_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzFlashRenderer_Export_6(){
	_asm{
		mov eax,0x5
		jmp dword ptr [WzFlashRenderer_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("WzFlashRenderer.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, WzFlashRenderer_org_data, sizeof(WzFlashRenderer_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("WzFlashRenderer.old");

	WzFlashRenderer_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "InitializeFlash");
	WzFlashRenderer_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "InitializeFlashbyDevice");
	WzFlashRenderer_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "IsRenderFlash");
	WzFlashRenderer_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "LoadMediaFile");
	WzFlashRenderer_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "ReleaseFlash");
	WzFlashRenderer_ExportList[0x5] = (DWORD)GetProcAddress(hModule, "RenderFlash");


}

