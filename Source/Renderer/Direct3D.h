#pragma once

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3dcompiler.lib")

#include <d3d11.h>
#include <DirectXMath.h>
using namespace DirectX;

class Direct3D
{
public:
	Direct3D();
	~Direct3D();

	bool Init(int screenWidth, int screenHeight, bool vsync, HWND hWnd, bool fullScreen, float ScreenDepth, float screenNear);
	void Shutdown();

private:
	ID3D11Device* m_device;
	ID3D11DeviceContext* m_deviceContext;
	IDXGISwapChain* m_swapChain;
	ID3D11Texture2D* m_depthStencilBuffer;
	ID3D11DepthStencilState* m_depthStencilState;
	ID3D11DepthStencilView* m_depthStencilView;
	ID3D11RenderTargetView* m_renderTargetView;

	bool m_vsync_enabled;
	int m_videoCardMemory;
	char m_videoCardDescription[128];
};