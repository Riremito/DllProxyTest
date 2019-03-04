#include"d3dcompiler_43.h"
#include"d3dcompiler_43_org_data.h"

DWORD d3dcompiler_43_ExportList[0x11];

void _declspec(naked) d3dcompiler_43_Export_1(){
	_asm{
		mov eax,0x0
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_3(){
	_asm{
		mov eax,0x1
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_4(){
	_asm{
		mov eax,0x2
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_5(){
	_asm{
		mov eax,0x3
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_6(){
	_asm{
		mov eax,0x4
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_8(){
	_asm{
		mov eax,0x5
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_7(){
	_asm{
		mov eax,0x6
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_9(){
	_asm{
		mov eax,0x7
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_10(){
	_asm{
		mov eax,0x8
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_11(){
	_asm{
		mov eax,0x9
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_12(){
	_asm{
		mov eax,0xA
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_13(){
	_asm{
		mov eax,0xB
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_14(){
	_asm{
		mov eax,0xC
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_15(){
	_asm{
		mov eax,0xD
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_16(){
	_asm{
		mov eax,0xE
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_17(){
	_asm{
		mov eax,0xF
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void _declspec(naked) d3dcompiler_43_Export_2(){
	_asm{
		mov eax,0x10
		jmp dword ptr [d3dcompiler_43_ExportList+eax*0x04]
	}
}

void CreateExports(){
	DWORD dw;
	HMODULE hModule;
	HANDLE hFile = CreateFileA("d3dcompiler_43.old", (GENERIC_READ | GENERIC_WRITE), NULL, NULL, CREATE_ALWAYS, NULL, NULL);

	if(hFile){
		WriteFile(hFile, d3dcompiler_43_org_data, sizeof(d3dcompiler_43_org_data), &dw, NULL);
		CloseHandle(hFile);
	}
	hModule = LoadLibraryA("d3dcompiler_43.old");

	d3dcompiler_43_ExportList[0x0] = (DWORD)GetProcAddress(hModule, "D3DAssemble");
	d3dcompiler_43_ExportList[0x1] = (DWORD)GetProcAddress(hModule, "D3DCompile");
	d3dcompiler_43_ExportList[0x2] = (DWORD)GetProcAddress(hModule, "D3DCompressShaders");
	d3dcompiler_43_ExportList[0x3] = (DWORD)GetProcAddress(hModule, "D3DCreateBlob");
	d3dcompiler_43_ExportList[0x4] = (DWORD)GetProcAddress(hModule, "D3DDecompressShaders");
	d3dcompiler_43_ExportList[0x5] = (DWORD)GetProcAddress(hModule, "D3DDisassemble");
	d3dcompiler_43_ExportList[0x6] = (DWORD)GetProcAddress(hModule, "D3DDisassemble10Effect");
	d3dcompiler_43_ExportList[0x7] = (DWORD)GetProcAddress(hModule, "D3DGetBlobPart");
	d3dcompiler_43_ExportList[0x8] = (DWORD)GetProcAddress(hModule, "D3DGetDebugInfo");
	d3dcompiler_43_ExportList[0x9] = (DWORD)GetProcAddress(hModule, "D3DGetInputAndOutputSignatureBlob");
	d3dcompiler_43_ExportList[0xA] = (DWORD)GetProcAddress(hModule, "D3DGetInputSignatureBlob");
	d3dcompiler_43_ExportList[0xB] = (DWORD)GetProcAddress(hModule, "D3DGetOutputSignatureBlob");
	d3dcompiler_43_ExportList[0xC] = (DWORD)GetProcAddress(hModule, "D3DPreprocess");
	d3dcompiler_43_ExportList[0xD] = (DWORD)GetProcAddress(hModule, "D3DReflect");
	d3dcompiler_43_ExportList[0xE] = (DWORD)GetProcAddress(hModule, "D3DReturnFailure1");
	d3dcompiler_43_ExportList[0xF] = (DWORD)GetProcAddress(hModule, "D3DStripShader");
	d3dcompiler_43_ExportList[0x10] = (DWORD)GetProcAddress(hModule, "DebugSetMute");


}

