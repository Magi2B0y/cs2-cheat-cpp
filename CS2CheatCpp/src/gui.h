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
	inline bool aimbot = false;// ������ͷ
	inline bool autoAttack = false;// ������ͷ����ǹ
	inline bool rcs = false; // ����������
	inline bool radar = false;// �״�
	inline bool flash = true; // ������
	inline bool bhop = false;// ����
	inline int fov = 0;// ��Ұ�Ƕ�
	inline int speed = 0;// ��ǰ�ٶ�
	inline int maxSpeed = 0;// ����ٶ�
	inline bool bombPlanted = false; // ը���Ƿ��Ѱ���
	inline int bombTimeLeft = -1; // ը����ը����ʱ

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