#pragma once
#include <d3d11.h>
#include <dwmapi.h>
#include <windowsx.h>
#include <Windows.h>

namespace gui
{
	// imgui�ؼ�״̬
	inline bool exit = true;
	inline bool menutoggle = true;
	inline bool boxEsp = true;// ����͸��
	inline bool playerBodyGlow = true;// ������巢��
	inline bool playerHealth = true;// ���Ѫ��
	inline bool aimbot = false;// ���鲢��ͷ
	inline bool rcs = false; // ����������
	inline bool radar = false;// �״�
	inline bool flash = true; // ������
	inline bool bhop = false;// ����

	// win32api window��ر���
	inline HWND overlay = nullptr;
	inline WNDCLASSEXW windowClass = {};

	// directx��ر���
	inline DXGI_SWAP_CHAIN_DESC sd{};
	inline ID3D11Device* device{ nullptr };
	inline ID3D11DeviceContext* device_context{ nullptr };
	inline IDXGISwapChain* swap_chain{ nullptr };
	inline ID3D11RenderTargetView* render_target_view{ nullptr };
	inline D3D_FEATURE_LEVEL level{};

	// ���ڵĴ���������
	void CreateHWindow(
		const char* windowName,
		const char* className,
		HINSTANCE instance,
		INT cmd_show) noexcept;
	void DestroyHWindow() noexcept;

	// directx�豸�Ĵ���������
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	// ImGui�Ĵ���������
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;
}