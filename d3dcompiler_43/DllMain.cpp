#include"d3dcompiler_43.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved){
	if(fdwReason == DLL_PROCESS_ATTACH){
		DisableThreadLibraryCalls(hinstDLL);
		CreateExports();
	}
	return TRUE;
}
