#ifndef PROXIDIRECT3D9_H
#define PROXIDIRECT3D9_H

#include "stdafx.h"

class proxIDirect3D9 : public IDirect3D9 {
private:
	// Pointer to the original interface.
	IDirect3D9 *const lpIDirect3D9;
public:
	proxIDirect3D9( IDirect3D9 *const pIDirect3D9 ) : lpIDirect3D9( pIDirect3D9 ) { }
	proxIDirect3D9( ) : lpIDirect3D9( NULL ) { }
	virtual ~proxIDirect3D9( void ) { }

	HRESULT		__stdcall QueryInterface( REFIID riid, void** ppvObj );
    ULONG		__stdcall AddRef( void );
	ULONG		__stdcall Release( void );
    HRESULT		__stdcall RegisterSoftwareDevice( void* pInitializeFunction );
	UINT		__stdcall GetAdapterCount( void );
	HRESULT		__stdcall GetAdapterIdentifier( UINT Adapter, DWORD Flags, D3DADAPTER_IDENTIFIER9* pIdentifier );
    UINT		__stdcall GetAdapterModeCount( UINT Adapter, D3DFORMAT Format );
    HRESULT		__stdcall EnumAdapterModes( UINT Adapter, D3DFORMAT Format, UINT Mode, D3DDISPLAYMODE* pMode );
    HRESULT		__stdcall GetAdapterDisplayMode( UINT Adapter, D3DDISPLAYMODE* pMode );
    HRESULT		__stdcall CheckDeviceType( UINT Adapter, D3DDEVTYPE DevType, D3DFORMAT DisplayFormat, D3DFORMAT BackBufferFormat, BOOL bWindowed );
    HRESULT		__stdcall CheckDeviceFormat( UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, DWORD Usage ,D3DRESOURCETYPE RType, D3DFORMAT CheckFormat );
    HRESULT		__stdcall CheckDeviceMultiSampleType( UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SurfaceFormat, BOOL Windowed, D3DMULTISAMPLE_TYPE MultiSampleType, DWORD* pQualityLevels );
    HRESULT		__stdcall CheckDepthStencilMatch( UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, D3DFORMAT RenderTargetFormat, D3DFORMAT DepthStencilFormat );
    HRESULT		__stdcall CheckDeviceFormatConversion( UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SourceFormat, D3DFORMAT TargetFormat );
    HRESULT		__stdcall GetDeviceCaps( UINT Adapter, D3DDEVTYPE DeviceType, D3DCAPS9* pCaps);
	HMONITOR	__stdcall GetAdapterMonitor( UINT Adapter );
	HRESULT		__stdcall CreateDevice( UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS* pPresentationParameters, IDirect3DDevice9** ppReturnedDeviceInterface );
};


#endif // PROXIDIRECT3D9_H