#pragma once

#include <Windows.h>
#include "Window.h"

class App
{
protected:
	HINSTANCE m_hInstance;
	bool m_bIsRunning;
	bool m_bQuitRequested;
	bool m_bQuitting;

public:
	App();
	~App();
	virtual bool Initialize(HINSTANCE hInstance, LPSTR lpCmdLine, HWND hWnd);
	void Shutdown();

	void AbortGame() { m_bQuitting = true; }
	bool IsRunning() { return m_bIsRunning; }
	void SetQuitting(bool quitting) { m_bQuitting = quitting; }
};

extern App* g_pApp;