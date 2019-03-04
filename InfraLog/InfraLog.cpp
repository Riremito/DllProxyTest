#include"InfraLog.h"
#include"InfraLog_org_data.h"

DWORD InfraLog_ExportList[0xB];

void _declspec(naked) InfraLog_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_3(){
	_asm{
		mov eax,0x2
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_4(){
	_asm{
		mov eax,0x3
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_5(){
	_asm{
		mov eax,0x4
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_6(){
	_asm{
		mov eax,0x5
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_7(){
	_asm{
		mov eax,0x6
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_8(){
	_asm{
		mov eax,0x7
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_9(){
	_asm{
		mov eax,0x8
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_10(){
	_asm{
		mov eax,0x9
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void _declspec(naked) InfraLog_Export_11(){
	_asm{
		mov eax,0xA
		jmp dword ptr [InfraLog_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("InfraLog.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, InfraLog_org_data, sizeof(InfraLog_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("InfraLog.old");

	InfraLog_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "LogFunc_1");
	InfraLog_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "LogFunc_10");
	InfraLog_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "LogFunc_11");
	InfraLog_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "LogFunc_2");
	InfraLog_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "LogFunc_3");
	InfraLog_ExportList[0x5] = (DWORD)GetProcAddress(hModule, "LogFunc_4");
	InfraLog_ExportList[0x6] = (DWORD)GetProcAddress(hModule, "LogFunc_5");
	InfraLog_ExportList[0x7] = (DWORD)GetProcAddress(hModule, "LogFunc_6");
	InfraLog_ExportList[0x8] = (DWORD)GetProcAddress(hModule, "LogFunc_7");
	InfraLog_ExportList[0x9] = (DWORD)GetProcAddress(hModule, "LogFunc_8");
	InfraLog_ExportList[0xA] = (DWORD)GetProcAddress(hModule, "LogFunc_9");


}

