#include "App.h"

// A global pointer to the app.  Th
App* g_pApp;

// A global instantiation of the app
// This would normally be instantiated with the inherited game-specific app
App g_appInstance;

App::App()
{
	// Associate the global instance with the global pointer
	g_pApp = this;

	m_bIsRunning = false;
	m_bQuitRequested = false;
	m_bQuitting = false;
}

App::~App()
{
}

bool App::Initialize(HINSTANCE hInstance, LPSTR lpCmdLine, HWND hWnd)
{
	// check for existing window

	// check ram size

	// check disk size

	// check cpu speed

	// initialize directx

	// create window
	g_pWindow->Initialize();

	// get window
	return true;
}


void App::Shutdown()
{
	// destroy window
	g_pWindow->Shutdown();

}