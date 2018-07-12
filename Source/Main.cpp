#include "App.h"

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// Perform application initialization
	if (!g_pApp->Initialize(hInstance, lpCmdLine, 0))
	{
		return FALSE;
	}

	// enter main loop
	g_pWindow->Run();

	// shut down
	g_pApp->Shutdown();
	
	return 0;
}
