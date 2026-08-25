#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectInt; }
class POINT;
namespace UnityEngine { class Vector2Int; }
class SubclassProc;
namespace Win32Native { class Win32ClientRect; }
namespace Win32Native { class Win32WindowRect; }
class EnumWindowsProc;

#define WIN32NATIVE_WIN32NATIVEHELPER_ISDRAGFULLWINDOWSON_OFFSET UNITYSDK_OFFSET(0xDEA510)
#define WIN32NATIVE_WIN32NATIVEHELPER_ISCURRENTMONITORPORTRAIT_OFFSET UNITYSDK_OFFSET(0xDF0500)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xDF0C00)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETCURRENTWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xDEFF60)
#define WIN32NATIVE_WIN32NATIVEHELPER_MONITORFROMPOINT_OFFSET UNITYSDK_OFFSET(0xDF0D40)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETMONITORRESOLUTIONFORWINDOW_OFFSET UNITYSDK_OFFSET(0xDF0DC0)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETUNITYWINDOWHANDLE_OFFSET UNITYSDK_OFFSET(0xDE7920)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWSUBCLASS_OFFSET UNITYSDK_OFFSET(0xDE8270)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWLONG_OFFSET UNITYSDK_OFFSET(0xDF1200)
#define WIN32NATIVE_WIN32NATIVEHELPER_ADJUSTSIZINGRECT_OFFSET UNITYSDK_OFFSET(0xDEC3B0)
#define WIN32NATIVE_WIN32NATIVEHELPER_MONITORFROMWINDOW_OFFSET UNITYSDK_OFFSET(0xDE8320)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETMONITORREFRESHRATEFORWINDOW_OFFSET UNITYSDK_OFFSET(0xDF1330)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWBYCLIENTRECT_OFFSET UNITYSDK_OFFSET(0xDF1610)
#define WIN32NATIVE_WIN32NATIVEHELPER_ENUMWINDOWSCALLBACK_OFFSET UNITYSDK_OFFSET(0xDF0180)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETFULLSCREENFORRECT_OFFSET UNITYSDK_OFFSET(0xDE6F20)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETMONITORINFO_OFFSET UNITYSDK_OFFSET(0xDF0850)
#define WIN32NATIVE_WIN32NATIVEHELPER_CLIENTTOSCREEN_OFFSET UNITYSDK_OFFSET(0xDF1C80)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWLONGPTR_OFFSET UNITYSDK_OFFSET(0xDE6780)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETFULLSCREENONMONITOR_OFFSET UNITYSDK_OFFSET(0xDF1A90)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETFULLSCREENONMAINMONITOR_OFFSET UNITYSDK_OFFSET(0xDE6B20)
#define WIN32NATIVE_WIN32NATIVEHELPER_ISZOOMED_OFFSET UNITYSDK_OFFSET(0xDF1D10)
#define WIN32NATIVE_WIN32NATIVEHELPER_ENUMDISPLAYSETTINGS_OFFSET UNITYSDK_OFFSET(0xDF09D0)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWLONG_OFFSET UNITYSDK_OFFSET(0xDE9C30)
#define WIN32NATIVE_WIN32NATIVEHELPER_MONITORFROMRECT_OFFSET UNITYSDK_OFFSET(0xDF1A10)
#define WIN32NATIVE_WIN32NATIVEHELPER_SHOWWINDOW_OFFSET UNITYSDK_OFFSET(0xDED530)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETCURSORPOS_OFFSET UNITYSDK_OFFSET(0xDF1D90)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETWORKAREAFORPOSITION_OFFSET UNITYSDK_OFFSET(0xDF1E10)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETCLIENTSIZE_OFFSET UNITYSDK_OFFSET(0xDEACE0)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWTEXT_OFFSET UNITYSDK_OFFSET(0xDF1890)
#define WIN32NATIVE_WIN32NATIVEHELPER_ADJUSTWINDOWRECTEX_OFFSET UNITYSDK_OFFSET(0xDF1290)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWTEXT_OFFSET UNITYSDK_OFFSET(0xDF2080)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETFULLSCREENONCURRENTMONITOR_OFFSET UNITYSDK_OFFSET(0xDE6A30)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0xDF1950)
#define WIN32NATIVE_WIN32NATIVEHELPER_ASSIGNPROCESSTOJOBOBJECT_OFFSET UNITYSDK_OFFSET(0xDF2110)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWBYWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xDE7670)
#define WIN32NATIVE_WIN32NATIVEHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDF21A0)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETPRIMARYWORKAREA_OFFSET UNITYSDK_OFFSET(0xDEF3F0)
#define WIN32NATIVE_WIN32NATIVEHELPER_DEFSUBCLASSPROC_OFFSET UNITYSDK_OFFSET(0xDE8790)
#define WIN32NATIVE_WIN32NATIVEHELPER_ISRECTINANYMONITOR_OFFSET UNITYSDK_OFFSET(0xDEED80)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWRECTINFO_OFFSET UNITYSDK_OFFSET(0xDEB830)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETSYSTEMMETRICS_OFFSET UNITYSDK_OFFSET(0xDF2310)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETCLIENTRECTINFO_OFFSET UNITYSDK_OFFSET(0xDEA2A0)
#define WIN32NATIVE_WIN32NATIVEHELPER_CREATEJOBOBJECT_OFFSET UNITYSDK_OFFSET(0xDF2520)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETINFORMATIONJOBOBJECT_OFFSET UNITYSDK_OFFSET(0xDF25B0)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETCLIENTRECT_OFFSET UNITYSDK_OFFSET(0xDF0C90)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETCURSORPOS_OFFSET UNITYSDK_OFFSET(0xDF2650)
#define WIN32NATIVE_WIN32NATIVEHELPER_SYSTEMPARAMETERSINFO_OFFSET UNITYSDK_OFFSET(0xDF0450)
#define WIN32NATIVE_WIN32NATIVEHELPER_ENUMWINDOWS_OFFSET UNITYSDK_OFFSET(0xDF10E0)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETLAYEREDWINDOWATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xDF26E0)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWLONGPTR_OFFSET UNITYSDK_OFFSET(0xDE66F0)
#define WIN32NATIVE_WIN32NATIVEHELPER_REMOVEWINDOWSUBCLASS_OFFSET UNITYSDK_OFFSET(0xDE8670)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETASYNCKEYSTATE_OFFSET UNITYSDK_OFFSET(0xDF2780)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETACTIVEWINDOW_OFFSET UNITYSDK_OFFSET(0xDF1180)
#define WIN32NATIVE_WIN32NATIVEHELPER_ISPOSITIONINANYMONITOR_OFFSET UNITYSDK_OFFSET(0xDF2200)
#define WIN32NATIVE_WIN32NATIVEHELPER_ISWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0xDF2800)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0xDE9A90)
#define WIN32NATIVE_WIN32NATIVEHELPER_GETWORKAREAFORRECT_OFFSET UNITYSDK_OFFSET(0xDEB970)
#define WIN32NATIVE_WIN32NATIVEHELPER_CENTERWINDOWBYCLIENTSIZE_OFFSET UNITYSDK_OFFSET(0xDEBE90)
#define WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWPOS_OFFSET UNITYSDK_OFFSET(0xDF17C0)

namespace Win32Native
{
	inline static constexpr unsigned int Win32NativeHelper_TypeDefinitionIndex = 10175;

	class Win32NativeHelper : public Il2CppObject
	{
	public:
		::System::Int32 GWL_STYLE; // 0x0
		::System::Int32 GWL_EXSTYLE; // 0x0
		::System::Int32 WS_BORDER; // 0x0
		::System::Int32 WS_CAPTION; // 0x0
		::System::Int32 WS_THICKFRAME; // 0x0
		::System::Int32 WS_MINIMIZEBOX; // 0x0
		::System::Int32 WS_MAXIMIZEBOX; // 0x0
		::System::Int32 WS_MAXIMIZE; // 0x0
		::System::Int32 WS_MINIMIZE; // 0x0
		::System::UInt32 WS_OVERLAPPEDWINDOW; // 0x0
		::System::UInt32 WS_EX_APPWINDOW; // 0x0
		::System::Int32 WM_SIZING; // 0x0
		::System::Int32 WM_EXITSIZEMOVE; // 0x0
		::System::Int32 WM_ENTERSIZEMOVE; // 0x0
		::System::Int32 WM_LBUTTONUP; // 0x0
		::System::Int32 WM_NCLBUTTONUP; // 0x0
		::System::UInt32 WM_NCDESTROY; // 0x0
		::System::UInt32 WM_CLOSE; // 0x0
		::System::Int32 WMSZ_LEFT; // 0x0
		::System::Int32 WMSZ_RIGHT; // 0x0
		::System::Int32 WMSZ_TOP; // 0x0
		::System::Int32 WMSZ_TOPLEFT; // 0x0
		::System::Int32 WMSZ_TOPRIGHT; // 0x0
		::System::Int32 WMSZ_BOTTOM; // 0x0
		::System::Int32 WMSZ_BOTTOMLEFT; // 0x0
		::System::Int32 WMSZ_BOTTOMRIGHT; // 0x0
		::System::UInt32 SWP_NOZORDER; // 0x0
		::System::UInt32 SWP_NOACTIVATE; // 0x0
		::System::UInt32 SWP_FRAMECHANGED; // 0x0
		::System::UInt32 SWP_SHOWWINDOW; // 0x0
		::System::UInt32 SWP_DEFERERASE; // 0x0
		::System::UInt32 WM_SYSCOMMAND; // 0x0
		::System::Int32 SC_SIZE; // 0x0
		::System::Int32 SC_MOVE; // 0x0
		::System::Int32 SC_CLOSE; // 0x0
		::System::UInt32 WM_WINDOWPOSCHANGING; // 0x0
		::System::UInt32 WM_WINDOWPOSCHANGED; // 0x0
		::System::UInt32 WM_DISPLAYCHANGE; // 0x0
		::System::UInt32 SWP_NOSIZE; // 0x0
		::System::Int32 ENUM_CURRENT_SETTINGS; // 0x0
		::System::UInt32 MONITOR_DEFAULTTONEAREST; // 0x0
		::System::UInt32 MONITOR_DEFAULTTOPRIMARY; // 0x0
		::System::UInt32 MONITOR_DEFAULTTONULL; // 0x0
		::System::Int32 SW_RESTORE; // 0x0
		::System::Int32 SW_MAXIMIZE; // 0x0
		::System::Int32 SW_MINIMIZE; // 0x0
		::System::Int32 SW_HIDE; // 0x0
		::System::Int32 SW_SHOW; // 0x0
		::System::UInt32 SPI_GETDRAGFULLWINDOWS; // 0x0
		::System::Int32 cachedWindowHandle; // 0x0
		::System::Int32 JobObjectExtendedLimitInformation; // 0x0
		::System::UInt32 JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE; // 0x0

		::System::Boolean IsDragFullWindowsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ISDRAGFULLWINDOWSON_OFFSET))(nullptr);
		}

		::System::Boolean IsCurrentMonitorPortrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ISCURRENTMONITORPORTRAIT_OFFSET))(nullptr);
		}

		::System::Boolean GetWindowRect(::System::Int32 arg, RECT&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, RECT&*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWRECT_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::RectInt* GetCurrentWindowRect()
		{
			return ((::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETCURRENTWINDOWRECT_OFFSET))(nullptr);
		}

		::System::Int32 MonitorFromPoint(POINT* arg, ::System::UInt32 arg2)
		{
			return ((::System::Int32(*)(POINT*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_MONITORFROMPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2Int* GetMonitorResolutionForWindow(::System::Int32 arg)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETMONITORRESOLUTIONFORWINDOW_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetUnityWindowHandle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETUNITYWINDOWHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean SetWindowSubclass(::System::Int32 arg, SubclassProc* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Boolean(*)(::System::Int32, SubclassProc*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWSUBCLASS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::UInt32 SetWindowLong(::System::Int32 arg, ::System::Int32 arg2, ::System::UInt32 arg3)
		{
			return ((::System::UInt32(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWLONG_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AdjustSizingRect(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Single arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ADJUSTSIZINGRECT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int32 MonitorFromWindow(::System::Int32 arg, ::System::UInt32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_MONITORFROMWINDOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetMonitorRefreshRateForWindow(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETMONITORREFRESHRATEFORWINDOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetWindowByClientRect(::System::Int32 arg, ::Win32Native::Win32ClientRect* arg2, ::System::UInt32 arg3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Win32Native::Win32ClientRect*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWBYCLIENTRECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean EnumWindowsCallback(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ENUMWINDOWSCALLBACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SetFullScreenForRect(::System::Int32 arg, ::UnityEngine::RectInt* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETFULLSCREENFORRECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean GetMonitorInfo(::System::Int32 arg, MONITORINFOEX&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, MONITORINFOEX&*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETMONITORINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ClientToScreen(::System::Int32 arg, POINT&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, POINT&*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_CLIENTTOSCREEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 SetWindowLongPtr(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWLONGPTR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean SetFullScreenOnMonitor(::System::Int32 arg, ::System::Int32 arg2, ::System::String* str)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETFULLSCREENONMONITOR_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Boolean SetFullScreenOnMainMonitor(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETFULLSCREENONMAINMONITOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsZoomed(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ISZOOMED_OFFSET))(arg, nullptr);
		}

		::System::Boolean EnumDisplaySettings(::System::String* str, ::System::Int32 arg, DEVMODE&* arg2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, DEVMODE&*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ENUMDISPLAYSETTINGS_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::UInt32 GetWindowLong(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::UInt32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWLONG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 MonitorFromRect(RECT&* arg, ::System::UInt32 arg2)
		{
			return ((::System::Int32(*)(RECT&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_MONITORFROMRECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShowWindow(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SHOWWINDOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean GetCursorPos(POINT&* arg)
		{
			return ((::System::Boolean(*)(POINT&*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETCURSORPOS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RectInt* GetWorkAreaForPosition(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::UnityEngine::RectInt*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETWORKAREAFORPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SetClientSize(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::UInt32 arg4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETCLIENTSIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 GetWindowText(::System::Int32 arg, ::System::Text::StringBuilder* arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWTEXT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean AdjustWindowRectEx(RECT&* arg, ::System::UInt32 arg2, ::System::Boolean arg3, ::System::UInt32 arg4)
		{
			return ((::System::Boolean(*)(RECT&*, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ADJUSTWINDOWRECTEX_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean SetWindowText(::System::Int32 arg, ::System::String* str)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWTEXT_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SetFullScreenOnCurrentMonitor(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETFULLSCREENONCURRENTMONITOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetClassName(::System::Int32 arg, ::System::Text::StringBuilder* arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETCLASSNAME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean AssignProcessToJobObject(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ASSIGNPROCESSTOJOBOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SetWindowByWindowRect(::System::Int32 arg, ::Win32Native::Win32WindowRect* arg2, ::System::UInt32 arg3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Win32Native::Win32WindowRect*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWBYWINDOWRECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::RectInt* GetPrimaryWorkArea()
		{
			return ((::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETPRIMARYWORKAREA_OFFSET))(nullptr);
		}

		::System::Int32 DefSubclassProc(::System::Int32 arg, ::System::UInt32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_DEFSUBCLASSPROC_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsRectInAnyMonitor(::UnityEngine::RectInt* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ISRECTINANYMONITOR_OFFSET))(arg, nullptr);
		}

		::Win32Native::Win32WindowRect* GetWindowRectInfo(::System::Int32 arg)
		{
			return ((::Win32Native::Win32WindowRect*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWRECTINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSystemMetrics(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETSYSTEMMETRICS_OFFSET))(arg, nullptr);
		}

		::Win32Native::Win32ClientRect* GetClientRectInfo(::System::Int32 arg)
		{
			return ((::Win32Native::Win32ClientRect*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETCLIENTRECTINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CreateJobObject(::System::Int32 arg, ::System::String* str)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_CREATEJOBOBJECT_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SetInformationJobObject(::System::Int32 arg, ::System::Int32 arg2, JOBOBJECT_EXTENDED_LIMIT_INFORMATION&* arg3, ::System::UInt32 arg4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, JOBOBJECT_EXTENDED_LIMIT_INFORMATION&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETINFORMATIONJOBOBJECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean GetClientRect(::System::Int32 arg, RECT&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, RECT&*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETCLIENTRECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SetCursorPos(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETCURSORPOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SystemParametersInfo(::System::UInt32 arg, ::System::UInt32 arg2, bool&* arg3, ::System::UInt32 arg4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, bool&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SYSTEMPARAMETERSINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean EnumWindows(EnumWindowsProc* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(EnumWindowsProc*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ENUMWINDOWS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SetLayeredWindowAttributes(::System::Int32 arg, ::System::UInt32 arg2, ::System::Byte arg3, ::System::UInt32 arg4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32, ::System::Byte, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETLAYEREDWINDOWATTRIBUTES_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 GetWindowLongPtr(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETWINDOWLONGPTR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean RemoveWindowSubclass(::System::Int32 arg, SubclassProc* arg2, ::System::Int32 arg3)
		{
			return ((::System::Boolean(*)(::System::Int32, SubclassProc*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_REMOVEWINDOWSUBCLASS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int16 GetAsyncKeyState(::System::Int32 arg)
		{
			return ((::System::Int16(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETASYNCKEYSTATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetActiveWindow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETACTIVEWINDOW_OFFSET))(nullptr);
		}

		::System::Boolean IsPositionInAnyMonitor(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ISPOSITIONINANYMONITOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsWindowVisible(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_ISWINDOWVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetForegroundWindow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETFOREGROUNDWINDOW_OFFSET))(nullptr);
		}

		::UnityEngine::RectInt* GetWorkAreaForRect(::UnityEngine::RectInt* arg)
		{
			return ((::UnityEngine::RectInt*(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_GETWORKAREAFORRECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CenterWindowByClientSize(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::UnityEngine::RectInt* arg4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_CENTERWINDOWBYCLIENTSIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean SetWindowPos(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::UInt32 arg7)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32NATIVEHELPER_SETWINDOWPOS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

	};
}

