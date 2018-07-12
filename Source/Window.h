#pragma once

#include <windows.h>

class Window
{
public:
	Window();
	~Window();
	bool Initialize();
	void Shutdown();
	void Run();

private:
	LPCSTR m_appName;
	HINSTANCE m_hInstance;
	HWND m_hWnd;
	bool m_isFullscreen;
};

static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

extern Window* g_pWindow;