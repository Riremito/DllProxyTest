#include"PCOM.h"
#include"PCOM_org_data.h"

DWORD PCOM_ExportList[0xA];

void _declspec(naked) PCOM_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void _declspec(naked) PCOM_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void _declspec(naked) PCOM_Export_3(){
	_asm{
		mov eax,0x2
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void _declspec(naked) PCOM_Export_4(){
	_asm{
		mov eax,0x3
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void _declspec(naked) PCOM_Export_5(){
	_asm{
		mov eax,0x4
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void _declspec(naked) PCOM_Export_6(){
	_asm{
		mov eax,0x5
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void _declspec(naked) PCOM_Export_7(){
	_asm{
		mov eax,0x6
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void _declspec(naked) PCOM_Export_8(){
	_asm{
		mov eax,0x7
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void _declspec(naked) PCOM_Export_9(){
	_asm{
		mov eax,0x8
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void _declspec(naked) PCOM_Export_10(){
	_asm{
		mov eax,0x9
		jmp dword ptr [PCOM_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("PCOM.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, PCOM_org_data, sizeof(PCOM_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("PCOM.old");

	PCOM_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "DllCanUnloadNow");
	PCOM_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "DllGetClassObject");
	PCOM_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "PcCreateObject");
	PCOM_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "PcFreeUnusedLibraries");
	PCOM_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "PcInitModule");
	PCOM_ExportList[0x5] = (DWORD)GetProcAddress(hModule, "PcPassPackIgnoreProp");
	PCOM_ExportList[0x6] = (DWORD)GetProcAddress(hModule, "PcRootNameSpace");
	PCOM_ExportList[0x7] = (DWORD)GetProcAddress(hModule, "PcSerializeObject");
	PCOM_ExportList[0x8] = (DWORD)GetProcAddress(hModule, "PcSerializeString");
	PCOM_ExportList[0x9] = (DWORD)GetProcAddress(hModule, "PcTermModule");


}

