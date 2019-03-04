#include"Gr2D_DX9.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved){
	if(fdwReason == DLL_PROCESS_ATTACH){
		DisableThreadLibraryCalls(hinstDLL);
		CreateExports();
	}
	return TRUE;
}
