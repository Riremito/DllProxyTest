#include"jypc.h"
#include"jypc_org_data.h"

DWORD jypc_ExportList[0x11];

void _declspec(naked) jypc_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_4(){
	_asm{
		mov eax,0x2
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_5(){
	_asm{
		mov eax,0x3
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_6(){
	_asm{
		mov eax,0x4
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_7(){
	_asm{
		mov eax,0x5
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_8(){
	_asm{
		mov eax,0x6
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_9(){
	_asm{
		mov eax,0x7
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_10(){
	_asm{
		mov eax,0x8
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_11(){
	_asm{
		mov eax,0x9
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_12(){
	_asm{
		mov eax,0xA
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_13(){
	_asm{
		mov eax,0xB
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_14(){
	_asm{
		mov eax,0xC
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_15(){
	_asm{
		mov eax,0xD
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_16(){
	_asm{
		mov eax,0xE
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_17(){
	_asm{
		mov eax,0xF
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void _declspec(naked) jypc_Export_3(){
	_asm{
		mov eax,0x10
		jmp dword ptr [jypc_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("jypc.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, jypc_org_data, sizeof(jypc_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("jypc.old");

	jypc_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "F0e9292417034e96934eadd7e6fedafd8");
	jypc_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "F115b237976ec8bf35520b7902c7e6d60");
	jypc_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "F44378efa30359dfefb729d0c78d8d165");
	jypc_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "F538e7326e9781d04d9080aa6f34ad8a4");
	jypc_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "F5c3467cc03c2c02a32f0ee44fb0d091c");
	jypc_ExportList[0x5] = (DWORD)GetProcAddress(hModule, "F5cea56786ca21f947588ec2697de703e");
	jypc_ExportList[0x6] = (DWORD)GetProcAddress(hModule, "F72c5931210a394fb89fcac8833f733dd");
	jypc_ExportList[0x7] = (DWORD)GetProcAddress(hModule, "F789442d28913a51877f4f75aea1c1b55");
	jypc_ExportList[0x8] = (DWORD)GetProcAddress(hModule, "F89fc6c72bce7ade75c3266e5b75a75d0");
	jypc_ExportList[0x9] = (DWORD)GetProcAddress(hModule, "F9340b5014dfa44350fa31431fa11c9dc");
	jypc_ExportList[0xA] = (DWORD)GetProcAddress(hModule, "Fabc80445266abf307701a1b32d59e60a");
	jypc_ExportList[0xB] = (DWORD)GetProcAddress(hModule, "Fb32f6d035d24c0561d9a68269c2eec07");
	jypc_ExportList[0xC] = (DWORD)GetProcAddress(hModule, "Fd66f9f17b91646fea9c989edb0f79a4c");
	jypc_ExportList[0xD] = (DWORD)GetProcAddress(hModule, "Fdc54bd409d31528919bc6d16d3118854");
	jypc_ExportList[0xE] = (DWORD)GetProcAddress(hModule, "Fec680445266abf307601a8b32db9e60a");
	jypc_ExportList[0xF] = (DWORD)GetProcAddress(hModule, "Fff4e83a9888f8c346ace9f45a35759c8");
	jypc_ExportList[0x10] = (DWORD)GetProcAddress(hModule, "_F3ac1c848c87e599c50a6678d50c1a45a@4");


}

