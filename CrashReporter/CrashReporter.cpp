#include"CrashReporter.h"
#include"CrashReporter_org_data.h"

DWORD CrashReporter_ExportList[0x2D];

void _declspec(naked) CrashReporter_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_3(){
	_asm{
		mov eax,0x2
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_4(){
	_asm{
		mov eax,0x3
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_5(){
	_asm{
		mov eax,0x4
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_6(){
	_asm{
		mov eax,0x5
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_7(){
	_asm{
		mov eax,0x6
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_8(){
	_asm{
		mov eax,0x7
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_9(){
	_asm{
		mov eax,0x8
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_10(){
	_asm{
		mov eax,0x9
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_11(){
	_asm{
		mov eax,0xA
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_12(){
	_asm{
		mov eax,0xB
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_13(){
	_asm{
		mov eax,0xC
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_14(){
	_asm{
		mov eax,0xD
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_15(){
	_asm{
		mov eax,0xE
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_16(){
	_asm{
		mov eax,0xF
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_17(){
	_asm{
		mov eax,0x10
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_18(){
	_asm{
		mov eax,0x11
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_19(){
	_asm{
		mov eax,0x12
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_20(){
	_asm{
		mov eax,0x13
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_21(){
	_asm{
		mov eax,0x14
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_22(){
	_asm{
		mov eax,0x15
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_23(){
	_asm{
		mov eax,0x16
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_24(){
	_asm{
		mov eax,0x17
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_25(){
	_asm{
		mov eax,0x18
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_26(){
	_asm{
		mov eax,0x19
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_27(){
	_asm{
		mov eax,0x1A
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_28(){
	_asm{
		mov eax,0x1B
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_29(){
	_asm{
		mov eax,0x1C
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_30(){
	_asm{
		mov eax,0x1D
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_31(){
	_asm{
		mov eax,0x1E
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_32(){
	_asm{
		mov eax,0x1F
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_33(){
	_asm{
		mov eax,0x20
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_34(){
	_asm{
		mov eax,0x21
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_35(){
	_asm{
		mov eax,0x22
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_36(){
	_asm{
		mov eax,0x23
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_37(){
	_asm{
		mov eax,0x24
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_38(){
	_asm{
		mov eax,0x25
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_39(){
	_asm{
		mov eax,0x26
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_40(){
	_asm{
		mov eax,0x27
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_41(){
	_asm{
		mov eax,0x28
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_42(){
	_asm{
		mov eax,0x29
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_43(){
	_asm{
		mov eax,0x2A
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_44(){
	_asm{
		mov eax,0x2B
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void _declspec(naked) CrashReporter_Export_45(){
	_asm{
		mov eax,0x2C
		jmp dword ptr [CrashReporter_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("CrashReporter.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, CrashReporter_org_data, sizeof(CrashReporter_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("CrashReporter.old");

	CrashReporter_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "_CrashReporter_GetInfoA@12");
	CrashReporter_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "_CrashReporter_GetInfoW@12");
	CrashReporter_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "_CrashReporter_Init@8");
	CrashReporter_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "_CrashReporter_IsInit@0");
	CrashReporter_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "_CrashReporter_RegisterCallback_AfterDump@4");
	CrashReporter_ExportList[0x5] = (DWORD)GetProcAddress(hModule, "_CrashReporter_RegisterCallback_BeforeDump@4");
	CrashReporter_ExportList[0x6] = (DWORD)GetProcAddress(hModule, "_CrashReporter_RegisterClientModule@4");
	CrashReporter_ExportList[0x7] = (DWORD)GetProcAddress(hModule, "_CrashReporter_RegisterLogFile@4");
	CrashReporter_ExportList[0x8] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetBoolInfo@8");
	CrashReporter_ExportList[0x9] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetClientExit@4");
	CrashReporter_ExportList[0xA] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetDumpFileName@4");
	CrashReporter_ExportList[0xB] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetFullDumpPath@4");
	CrashReporter_ExportList[0xC] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetGatherCrashScreenShot@4");
	CrashReporter_ExportList[0xD] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetInt64Info@8");
	CrashReporter_ExportList[0xE] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetIntInfo@8");
	CrashReporter_ExportList[0xF] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetJsonInfoA@8");
	CrashReporter_ExportList[0x10] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetJsonInfoW@8");
	CrashReporter_ExportList[0x11] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetReceiveServerRegion@4");
	CrashReporter_ExportList[0x12] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetSSL@4");
	CrashReporter_ExportList[0x13] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetSendDump@4");
	CrashReporter_ExportList[0x14] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetStrInfoA@8");
	CrashReporter_ExportList[0x15] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetStrInfoW@8");
	CrashReporter_ExportList[0x16] = (DWORD)GetProcAddress(hModule, "_CrashReporter_SetUintInfo@8");
	CrashReporter_ExportList[0x17] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Clear@0");
	CrashReporter_ExportList[0x18] = (DWORD)GetProcAddress(hModule, "_ScreenShot_CustomCallBack@4");
	CrashReporter_ExportList[0x19] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Custom_DrawBuffer@20");
	CrashReporter_ExportList[0x1A] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Custom_GetBuffer@8");
	CrashReporter_ExportList[0x1B] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Destroy@0");
	CrashReporter_ExportList[0x1C] = (DWORD)GetProcAddress(hModule, "_ScreenShot_GetDescriptionA@12");
	CrashReporter_ExportList[0x1D] = (DWORD)GetProcAddress(hModule, "_ScreenShot_GetDescriptionW@12");
	CrashReporter_ExportList[0x1E] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Init@4");
	CrashReporter_ExportList[0x1F] = (DWORD)GetProcAddress(hModule, "_ScreenShot_ResetPathConfig@0");
	CrashReporter_ExportList[0x20] = (DWORD)GetProcAddress(hModule, "_ScreenShot_SetFormat@4");
	CrashReporter_ExportList[0x21] = (DWORD)GetProcAddress(hModule, "_ScreenShot_SetJpegQuality@4");
	CrashReporter_ExportList[0x22] = (DWORD)GetProcAddress(hModule, "_ScreenShot_SetQuickCamActive@4");
	CrashReporter_ExportList[0x23] = (DWORD)GetProcAddress(hModule, "_ScreenShot_SetSavePathA@4");
	CrashReporter_ExportList[0x24] = (DWORD)GetProcAddress(hModule, "_ScreenShot_SetSavePathW@4");
	CrashReporter_ExportList[0x25] = (DWORD)GetProcAddress(hModule, "_ScreenShot_SetVerifyLevel@4");
	CrashReporter_ExportList[0x26] = (DWORD)GetProcAddress(hModule, "_ScreenShot_ShootA@8");
	CrashReporter_ExportList[0x27] = (DWORD)GetProcAddress(hModule, "_ScreenShot_ShootW@8");
	CrashReporter_ExportList[0x28] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Shoot_7A@4");
	CrashReporter_ExportList[0x29] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Shoot_7W@4");
	CrashReporter_ExportList[0x2A] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Shoot_ImmediateA@8");
	CrashReporter_ExportList[0x2B] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Shoot_ImmediateW@8");
	CrashReporter_ExportList[0x2C] = (DWORD)GetProcAddress(hModule, "_ScreenShot_Update@0");


}

