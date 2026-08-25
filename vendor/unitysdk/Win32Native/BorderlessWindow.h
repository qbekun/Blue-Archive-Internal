#pragma once
#include "../unitysdk.h"

class SubclassProc;
namespace Win32Native { class BorderlessWindow; }
namespace UnityEngine { class RectInt; }

#define WIN32NATIVE_BORDERLESSWINDOW_MAKEBORDERLESS_OFFSET UNITYSDK_OFFSET(0xDE64C0)
#define WIN32NATIVE_BORDERLESSWINDOW_RESETBORDERSTYLE_OFFSET UNITYSDK_OFFSET(0xDE6820)
#define WIN32NATIVE_BORDERLESSWINDOW_MAXIMIZEWINDOW_OFFSET UNITYSDK_OFFSET(0xDE69B0)
#define WIN32NATIVE_BORDERLESSWINDOW_MAXIMIZEWINDOWONSAVEDMONITOR_OFFSET UNITYSDK_OFFSET(0xDE6C10)
#define WIN32NATIVE_BORDERLESSWINDOW_RESTORESIZEPOS_OFFSET UNITYSDK_OFFSET(0xDE7070)
#define WIN32NATIVE_BORDERLESSWINDOW_RESTORESIZEPOS_OFFSET UNITYSDK_OFFSET(0xDE74E0)
#define WIN32NATIVE_BORDERLESSWINDOW_APPLYWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xDE7410)
#define WIN32NATIVE_BORDERLESSWINDOW_LOADRECT_OFFSET UNITYSDK_OFFSET(0xDE6CF0)
#define WIN32NATIVE_BORDERLESSWINDOW_ENSUREWINDOWHANDLE_OFFSET UNITYSDK_OFFSET(0xDE6640)
#define WIN32NATIVE_BORDERLESSWINDOW_ADD_ONMONITORCHANGED_OFFSET UNITYSDK_OFFSET(0xDE7DE0)
#define WIN32NATIVE_BORDERLESSWINDOW_REMOVE_ONMONITORCHANGED_OFFSET UNITYSDK_OFFSET(0xDE7E90)
#define WIN32NATIVE_BORDERLESSWINDOW_ADD_ONDISPLAYCHANGED_OFFSET UNITYSDK_OFFSET(0xDE7F40)
#define WIN32NATIVE_BORDERLESSWINDOW_REMOVE_ONDISPLAYCHANGED_OFFSET UNITYSDK_OFFSET(0xDE8000)
#define WIN32NATIVE_BORDERLESSWINDOW_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE80C0)
#define WIN32NATIVE_BORDERLESSWINDOW_INITIALIZESUBCLASS_OFFSET UNITYSDK_OFFSET(0xDE7BA0)
#define WIN32NATIVE_BORDERLESSWINDOW_UNINSTALLSUBCLASS_OFFSET UNITYSDK_OFFSET(0xDE83A0)
#define WIN32NATIVE_BORDERLESSWINDOW_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xDE8710)
#define WIN32NATIVE_BORDERLESSWINDOW_WINDOWSUBCLASSPROC_OFFSET UNITYSDK_OFFSET(0xDE62C0)
#define WIN32NATIVE_BORDERLESSWINDOW_EVENT_WM_WINDOWPOSCHANGED_OFFSET UNITYSDK_OFFSET(0xDE8830)
#define WIN32NATIVE_BORDERLESSWINDOW_EVENT_WM_DISPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0xDE8B30)

namespace Win32Native
{
	inline static constexpr unsigned int BorderlessWindow_TypeDefinitionIndex = 10158;

	class BorderlessWindow : public Il2CppObject
	{
	public:
		::System::Int32 hWnd; // 0x10
		::System::Boolean _isSubclassed; // 0x18
		SubclassProc* _subclassProc; // 0x20
		::System::Int32 SUBCLASS_ID; // 0x0
		::System::Int32 _currentMonitorHandle; // 0x28
		::System::Action* OnMonitorChanged; // 0x0
		::System::Action* OnDisplayChanged; // 0x8
		::Win32Native::BorderlessWindow* instance; // 0x10
		::System::Boolean isQuitting; // 0x30

		::System::Void MakeBorderless()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_MAKEBORDERLESS_OFFSET))(nullptr);
		}

		::System::Void ResetBorderStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_RESETBORDERSTYLE_OFFSET))(nullptr);
		}

		::System::Void MaximizeWindow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_MAXIMIZEWINDOW_OFFSET))(arg, nullptr);
		}

		::System::Void MaximizeWindowOnSavedMonitor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_MAXIMIZEWINDOWONSAVEDMONITOR_OFFSET))(nullptr);
		}

		::System::Void RestoreSizePos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_RESTORESIZEPOS_OFFSET))(nullptr);
		}

		::System::Void RestoreSizePos(::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_RESTORESIZEPOS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyWindowRect(::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_APPLYWINDOWRECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RectInt* LoadRect()
		{
			return ((::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_LOADRECT_OFFSET))(nullptr);
		}

		::System::Boolean EnsureWindowHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_ENSUREWINDOWHANDLE_OFFSET))(nullptr);
		}

		::System::Void add_OnMonitorChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_ADD_ONMONITORCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnMonitorChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_REMOVE_ONMONITORCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnDisplayChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_ADD_ONDISPLAYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnDisplayChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_REMOVE_ONDISPLAYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeSubclass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_INITIALIZESUBCLASS_OFFSET))(nullptr);
		}

		::System::Void UninstallSubclass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_UNINSTALLSUBCLASS_OFFSET))(nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Int32 WindowSubclassProc(::System::Int32 arg, ::System::UInt32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_WINDOWSUBCLASSPROC_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void Event_WM_WINDOWPOSCHANGED(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_EVENT_WM_WINDOWPOSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Event_WM_DISPLAYCHANGE(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_BORDERLESSWINDOW_EVENT_WM_DISPLAYCHANGE_OFFSET))(arg, nullptr);
		}

	};
}

