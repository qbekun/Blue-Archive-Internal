#pragma once
#include "unitysdk.h"

class WndProcDelegate;
class QuitGuardWin32;

#define QUITGUARDWIN32_SETWINDOWLONGPTR_OFFSET UNITYSDK_OFFSET(0xC89210)
#define QUITGUARDWIN32_DOCLEANUPONCE_OFFSET UNITYSDK_OFFSET(0xC894C0)
#define QUITGUARDWIN32_SETWINDOWLONG32_OFFSET UNITYSDK_OFFSET(0xC89380)
#define QUITGUARDWIN32_SHUTDOWNBLOCKREASONCREATE_OFFSET UNITYSDK_OFFSET(0xC89620)
#define QUITGUARDWIN32_GETACTIVEWINDOW_OFFSET UNITYSDK_OFFSET(0xC896B0)
#define QUITGUARDWIN32_AWAKE_OFFSET UNITYSDK_OFFSET(0xC89730)
#define QUITGUARDWIN32_GETWINDOWLONG32_OFFSET UNITYSDK_OFFSET(0xC89880)
#define QUITGUARDWIN32_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC89910)
#define QUITGUARDWIN32_CALLWINDOWPROC_OFFSET UNITYSDK_OFFSET(0xC89980)
#define QUITGUARDWIN32_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC89A30)
#define QUITGUARDWIN32_ISWINDOW_OFFSET UNITYSDK_OFFSET(0xC89AC0)
#define QUITGUARDWIN32_UPDATE_OFFSET UNITYSDK_OFFSET(0xC89B40)
#define QUITGUARDWIN32_MESSAGEBOXW_OFFSET UNITYSDK_OFFSET(0xC89BC0)
#define QUITGUARDWIN32_SHUTDOWNBLOCKREASONDESTROY_OFFSET UNITYSDK_OFFSET(0xC89C70)
#define QUITGUARDWIN32_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xC89CF0)
#define QUITGUARDWIN32_TRYINSTALL_OFFSET UNITYSDK_OFFSET(0xC89D50)
#define QUITGUARDWIN32_.CTOR_OFFSET UNITYSDK_OFFSET(0xC8A460)
#define QUITGUARDWIN32_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC8A470)
#define QUITGUARDWIN32_INSTALLNEXTFRAME_OFFSET UNITYSDK_OFFSET(0xC89810)
#define QUITGUARDWIN32_GETWINDOWLONGPTR_OFFSET UNITYSDK_OFFSET(0xC8A300)
#define QUITGUARDWIN32_SETWINDOWLONGPTR64_OFFSET UNITYSDK_OFFSET(0xC89420)
#define QUITGUARDWIN32_FINDWINDOWW_OFFSET UNITYSDK_OFFSET(0xC8A1A0)
#define QUITGUARDWIN32_GETWINDOWLONGPTR64_OFFSET UNITYSDK_OFFSET(0xC8A710)
#define QUITGUARDWIN32_WNDPROCHOOK_OFFSET UNITYSDK_OFFSET(0xC88C60)
#define QUITGUARDWIN32_UNINSTALL_OFFSET UNITYSDK_OFFSET(0xC8A480)

	inline static constexpr unsigned int QuitGuardWin32_TypeDefinitionIndex = 9085;

	class QuitGuardWin32 : public Il2CppObject
	{
	public:
		::System::Boolean _installed; // 0x0
		::System::Boolean UserConfirmed; // 0x1
		::System::Boolean _cleanupDone; // 0x2
		::System::Boolean _hasUnsavedWork; // 0x3
		::System::Int32 _hwnd; // 0x8
		::System::Int32 _prevWndProc; // 0x10
		WndProcDelegate* _wndProcDel; // 0x18
		::System::Int32 _wndProcPtr; // 0x20
		::System::Action* _cleanup; // 0x28
		::System::Int32 GWL_WNDPROC; // 0x0
		::System::UInt32 WM_CLOSE; // 0x0
		::System::UInt32 WM_QUERYENDSESSION; // 0x0
		::System::UInt32 WM_ENDSESSION; // 0x0
		::System::UInt32 WM_DESTROY; // 0x0
		::System::UInt32 MB_YESNO; // 0x0
		::System::UInt32 MB_ICONQUESTION; // 0x0
		::System::UInt32 MB_DEFBUTTON2; // 0x0
		::System::Int32 IDYES; // 0x0
		QuitGuardWin32* _instance; // 0x30

		::System::Int32 SetWindowLongPtr(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_SETWINDOWLONGPTR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void DoCleanupOnce()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_DOCLEANUPONCE_OFFSET))(nullptr);
		}

		::System::Int32 SetWindowLong32(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_SETWINDOWLONG32_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ShutdownBlockReasonCreate(::System::Int32 arg, ::System::String* str)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_SHUTDOWNBLOCKREASONCREATE_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetActiveWindow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_GETACTIVEWINDOW_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_AWAKE_OFFSET))(nullptr);
		}

		::System::Int32 GetWindowLong32(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_GETWINDOWLONG32_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_ONENABLE_OFFSET))(nullptr);
		}

		::System::Int32 CallWindowProc(::System::Int32 arg, ::System::Int32 arg2, ::System::UInt32 arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_CALLWINDOWPROC_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsWindow(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_ISWINDOW_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_UPDATE_OFFSET))(nullptr);
		}

		::System::Int32 MessageBoxW(::System::Int32 arg, ::System::String* str, ::System::String* str2, ::System::UInt32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_MESSAGEBOXW_OFFSET))(arg, str, str2, arg2, nullptr);
		}

		::System::Boolean ShutdownBlockReasonDestroy(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_SHUTDOWNBLOCKREASONDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void TryInstall()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_TRYINSTALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InstallNextFrame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_INSTALLNEXTFRAME_OFFSET))(nullptr);
		}

		::System::Int32 GetWindowLongPtr(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_GETWINDOWLONGPTR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 SetWindowLongPtr64(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_SETWINDOWLONGPTR64_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 FindWindowW(::System::String* str, ::System::String* str2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_FINDWINDOWW_OFFSET))(str, str2, nullptr);
		}

		::System::Int32 GetWindowLongPtr64(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_GETWINDOWLONGPTR64_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 WndProcHook(::System::Int32 arg, ::System::UInt32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_WNDPROCHOOK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Uninstall()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUITGUARDWIN32_UNINSTALL_OFFSET))(nullptr);
		}

	};

