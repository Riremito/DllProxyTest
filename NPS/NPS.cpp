#include"NPS.h"
#include"NPS_org_data.h"

DWORD NPS_ExportList[0x2];

void _declspec(naked) NPS_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [NPS_ExportList+eax*0x04]
	}
}

void _declspec(naked) NPS_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [NPS_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("NPS.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, NPS_org_data, sizeof(NPS_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("NPS.old");

	NPS_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "OpenSurveyA");
	NPS_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "OpenSurveyW");


}

