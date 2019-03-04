#include"WzMss.h"
#include"WzMss_org_data.h"

DWORD WzMss_ExportList[0x1F];

void _declspec(naked) WzMss_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_2(){
	_asm{
		mov eax,0x1
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_3(){
	_asm{
		mov eax,0x2
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_4(){
	_asm{
		mov eax,0x3
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_5(){
	_asm{
		mov eax,0x4
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_6(){
	_asm{
		mov eax,0x5
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_7(){
	_asm{
		mov eax,0x6
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_8(){
	_asm{
		mov eax,0x7
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_9(){
	_asm{
		mov eax,0x8
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_10(){
	_asm{
		mov eax,0x9
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_11(){
	_asm{
		mov eax,0xA
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_12(){
	_asm{
		mov eax,0xB
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_13(){
	_asm{
		mov eax,0xC
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_14(){
	_asm{
		mov eax,0xD
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_15(){
	_asm{
		mov eax,0xE
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_16(){
	_asm{
		mov eax,0xF
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_17(){
	_asm{
		mov eax,0x10
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_18(){
	_asm{
		mov eax,0x11
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_19(){
	_asm{
		mov eax,0x12
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_20(){
	_asm{
		mov eax,0x13
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_21(){
	_asm{
		mov eax,0x14
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_22(){
	_asm{
		mov eax,0x15
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_23(){
	_asm{
		mov eax,0x16
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_24(){
	_asm{
		mov eax,0x17
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_25(){
	_asm{
		mov eax,0x18
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_26(){
	_asm{
		mov eax,0x19
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_27(){
	_asm{
		mov eax,0x1A
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_28(){
	_asm{
		mov eax,0x1B
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_29(){
	_asm{
		mov eax,0x1C
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_30(){
	_asm{
		mov eax,0x1D
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void _declspec(naked) WzMss_Export_31(){
	_asm{
		mov eax,0x1E
		jmp dword ptr [WzMss_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("WzMss.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, WzMss_org_data, sizeof(WzMss_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("WzMss.old");

	WzMss_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "WzSoap_CommentArticle");
	WzMss_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "WzSoap_ConsultCheckAnswer");
	WzMss_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "WzSoap_ConsultCheckCreate");
	WzMss_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "WzSoap_ConsultDelete");
	WzMss_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "WzSoap_ConsultGetContent");
	WzMss_ExportList[0x5] = (DWORD)GetProcAddress(hModule, "WzSoap_ConsultGetTitle");
	WzMss_ExportList[0x6] = (DWORD)GetProcAddress(hModule, "WzSoap_ConsultModify");
	WzMss_ExportList[0x7] = (DWORD)GetProcAddress(hModule, "WzSoap_ConsultWrite");
	WzMss_ExportList[0x8] = (DWORD)GetProcAddress(hModule, "WzSoap_DeleteArticle");
	WzMss_ExportList[0x9] = (DWORD)GetProcAddress(hModule, "WzSoap_GetArticleContent");
	WzMss_ExportList[0xA] = (DWORD)GetProcAddress(hModule, "WzSoap_GetArticleOwner");
	WzMss_ExportList[0xB] = (DWORD)GetProcAddress(hModule, "WzSoap_GetArticleTitle");
	WzMss_ExportList[0xC] = (DWORD)GetProcAddress(hModule, "WzSoap_GetInspectionInfo");
	WzMss_ExportList[0xD] = (DWORD)GetProcAddress(hModule, "WzSoap_GetTopArticleID");
	WzMss_ExportList[0xE] = (DWORD)GetProcAddress(hModule, "WzSoap_GetTopArticleTitle");
	WzMss_ExportList[0xF] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Article_Create");
	WzMss_ExportList[0x10] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Article_Create_NoImage");
	WzMss_ExportList[0x11] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Article_Delete");
	WzMss_ExportList[0x12] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Article_List");
	WzMss_ExportList[0x13] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Article_Modify");
	WzMss_ExportList[0x14] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Article_MyList");
	WzMss_ExportList[0x15] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Article_Recommend");
	WzMss_ExportList[0x16] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Article_RecommendList");
	WzMss_ExportList[0x17] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Article_View_Content");
	WzMss_ExportList[0x18] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Comment_Create");
	WzMss_ExportList[0x19] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Comment_Delete");
	WzMss_ExportList[0x1A] = (DWORD)GetProcAddress(hModule, "WzSoap_GuildNewBoard_Comment_List");
	WzMss_ExportList[0x1B] = (DWORD)GetProcAddress(hModule, "WzSoap_MapleNoticeBoard_GetList_Num");
	WzMss_ExportList[0x1C] = (DWORD)GetProcAddress(hModule, "WzSoap_MapleTNoticeBoard_GetList_Num");
	WzMss_ExportList[0x1D] = (DWORD)GetProcAddress(hModule, "WzSoap_ModifyArticle");
	WzMss_ExportList[0x1E] = (DWORD)GetProcAddress(hModule, "WzSoap_WriteArticle");


}

