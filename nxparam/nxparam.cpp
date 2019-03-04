#include"nxparam.h"
#include"nxparam_org_data.h"

DWORD nxparam_ExportList[0x1F];

void _declspec(naked) nxparam_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_3(){
	_asm{
		mov eax,0x2
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_4(){
	_asm{
		mov eax,0x3
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_5(){
	_asm{
		mov eax,0x4
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_6(){
	_asm{
		mov eax,0x5
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_7(){
	_asm{
		mov eax,0x6
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_8(){
	_asm{
		mov eax,0x7
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_9(){
	_asm{
		mov eax,0x8
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_10(){
	_asm{
		mov eax,0x9
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_11(){
	_asm{
		mov eax,0xA
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_12(){
	_asm{
		mov eax,0xB
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_13(){
	_asm{
		mov eax,0xC
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_14(){
	_asm{
		mov eax,0xD
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_15(){
	_asm{
		mov eax,0xE
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_16(){
	_asm{
		mov eax,0xF
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_17(){
	_asm{
		mov eax,0x10
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_18(){
	_asm{
		mov eax,0x11
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_19(){
	_asm{
		mov eax,0x12
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_20(){
	_asm{
		mov eax,0x13
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_21(){
	_asm{
		mov eax,0x14
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_22(){
	_asm{
		mov eax,0x15
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_23(){
	_asm{
		mov eax,0x16
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_24(){
	_asm{
		mov eax,0x17
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_25(){
	_asm{
		mov eax,0x18
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_26(){
	_asm{
		mov eax,0x19
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_27(){
	_asm{
		mov eax,0x1A
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_28(){
	_asm{
		mov eax,0x1B
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_29(){
	_asm{
		mov eax,0x1C
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_30(){
	_asm{
		mov eax,0x1D
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void _declspec(naked) nxparam_Export_31(){
	_asm{
		mov eax,0x1E
		jmp dword ptr [nxparam_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("nxparam.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, nxparam_org_data, sizeof(nxparam_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("nxparam.old");

	nxparam_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "??0NXParam@@QAE@XZ");
	nxparam_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "??1NXParam@@QAE@XZ");
	nxparam_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "??4NXParam@@QAEAAV0@ABV0@@Z");
	nxparam_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "?AnsiToUnicode@NXParam@@SAPA_WPBD@Z");
	nxparam_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "?Clear@NXParam@@QAEXXZ");
	nxparam_ExportList[0x5] = (DWORD)GetProcAddress(hModule, "?Decrypt@NXParam@@AAEHPBD@Z");
	nxparam_ExportList[0x6] = (DWORD)GetProcAddress(hModule, "?DoneWithAnsi@NXParam@@SAXPBD@Z");
	nxparam_ExportList[0x7] = (DWORD)GetProcAddress(hModule, "?DoneWithUnicode@NXParam@@SAXPB_W@Z");
	nxparam_ExportList[0x8] = (DWORD)GetProcAddress(hModule, "?Encrypt@NXParam@@AAEHPAD@Z");
	nxparam_ExportList[0x9] = (DWORD)GetProcAddress(hModule, "?GetHashValue@NXParam@@AAE_JPAXH@Z");
	nxparam_ExportList[0xA] = (DWORD)GetProcAddress(hModule, "?GetParamPtr@NXParam@@AAEHPBD@Z");
	nxparam_ExportList[0xB] = (DWORD)GetProcAddress(hModule, "?GetParamValueA@NXParam@@QAEIPBDPAXI@Z");
	nxparam_ExportList[0xC] = (DWORD)GetProcAddress(hModule, "?GetParamValueW@NXParam@@QAEIPB_WPAXI@Z");
	nxparam_ExportList[0xD] = (DWORD)GetProcAddress(hModule, "?GetTokenA@NXParam@@QAEHPAD@Z");
	nxparam_ExportList[0xE] = (DWORD)GetProcAddress(hModule, "?GetTokenW@NXParam@@QAEHPA_W@Z");
	nxparam_ExportList[0xF] = (DWORD)GetProcAddress(hModule, "?SetHashKey@NXParam@@QAEX_J@Z");
	nxparam_ExportList[0x10] = (DWORD)GetProcAddress(hModule, "?SetParamValue@NXParam@@AAEHIPBDPAXI@Z");
	nxparam_ExportList[0x11] = (DWORD)GetProcAddress(hModule, "?SetParam_AnsiStr@NXParam@@QAEHPBD0@Z");
	nxparam_ExportList[0x12] = (DWORD)GetProcAddress(hModule, "?SetParam_Binary@NXParam@@QAEHPBDPAEI@Z");
	nxparam_ExportList[0x13] = (DWORD)GetProcAddress(hModule, "?SetParam_S16@NXParam@@QAEHPBDF@Z");
	nxparam_ExportList[0x14] = (DWORD)GetProcAddress(hModule, "?SetParam_S32@NXParam@@QAEHPBDH@Z");
	nxparam_ExportList[0x15] = (DWORD)GetProcAddress(hModule, "?SetParam_S64@NXParam@@QAEHPBD_J@Z");
	nxparam_ExportList[0x16] = (DWORD)GetProcAddress(hModule, "?SetParam_S8@NXParam@@QAEHPBDC@Z");
	nxparam_ExportList[0x17] = (DWORD)GetProcAddress(hModule, "?SetParam_U16@NXParam@@QAEHPBDG@Z");
	nxparam_ExportList[0x18] = (DWORD)GetProcAddress(hModule, "?SetParam_U32@NXParam@@QAEHPBDI@Z");
	nxparam_ExportList[0x19] = (DWORD)GetProcAddress(hModule, "?SetParam_U64@NXParam@@QAEHPBD_K@Z");
	nxparam_ExportList[0x1A] = (DWORD)GetProcAddress(hModule, "?SetParam_U8@NXParam@@QAEHPBDE@Z");
	nxparam_ExportList[0x1B] = (DWORD)GetProcAddress(hModule, "?SetParam_UniStr@NXParam@@QAEHPBD0@Z");
	nxparam_ExportList[0x1C] = (DWORD)GetProcAddress(hModule, "?SetTokenA@NXParam@@QAEHPBD@Z");
	nxparam_ExportList[0x1D] = (DWORD)GetProcAddress(hModule, "?SetTokenW@NXParam@@QAEHPB_W@Z");
	nxparam_ExportList[0x1E] = (DWORD)GetProcAddress(hModule, "?UnicodeToAnsi@NXParam@@SAPADPB_W@Z");


}

