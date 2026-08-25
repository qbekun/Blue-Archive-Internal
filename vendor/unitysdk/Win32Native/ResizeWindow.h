#pragma once
#include "../unitysdk.h"

namespace Win32Native { class ResizeWindow; }
class SubclassProc;
namespace Win32Native { class ScreenController; }
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class RectInt; }

#define WIN32NATIVE_RESIZEWINDOW_ONAPPLICATIONQUITTING_OFFSET UNITYSDK_OFFSET(0xDE9470)
#define WIN32NATIVE_RESIZEWINDOW_INITIALIZELASTSIZE_OFFSET UNITYSDK_OFFSET(0xDE96F0)
#define WIN32NATIVE_RESIZEWINDOW_CHECKMONITORCHANGED_OFFSET UNITYSDK_OFFSET(0xDE9720)
#define WIN32NATIVE_RESIZEWINDOW_UPDATEFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0xDE9990)
#define WIN32NATIVE_RESIZEWINDOW_CACHEWINDOWSTATE_OFFSET UNITYSDK_OFFSET(0xDE9B10)
#define WIN32NATIVE_RESIZEWINDOW_HANDLEDISPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0xDE9CC0)
#define WIN32NATIVE_RESIZEWINDOW_UNINSTALLSUBCLASS_OFFSET UNITYSDK_OFFSET(0xDE94C0)
#define WIN32NATIVE_RESIZEWINDOW_REQUESTDELAYEDADJUST_OFFSET UNITYSDK_OFFSET(0xDE9DF0)
#define WIN32NATIVE_RESIZEWINDOW_ONEXITSIZEMOVE_OFFSET UNITYSDK_OFFSET(0xDE9E20)
#define WIN32NATIVE_RESIZEWINDOW_ONENTERSIZEMOVE_OFFSET UNITYSDK_OFFSET(0xDEAF90)
#define WIN32NATIVE_RESIZEWINDOW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEAFD0)
#define WIN32NATIVE_RESIZEWINDOW_GETISPORTRAITSAFE_OFFSET UNITYSDK_OFFSET(0xDEA600)
#define WIN32NATIVE_RESIZEWINDOW_SUBCLASSWNDPROC_OFFSET UNITYSDK_OFFSET(0xDE8D90)
#define WIN32NATIVE_RESIZEWINDOW_INSTALLSUBCLASS_OFFSET UNITYSDK_OFFSET(0xDEB310)
#define WIN32NATIVE_RESIZEWINDOW_FINISH_OFFSET UNITYSDK_OFFSET(0xDEB530)
#define WIN32NATIVE_RESIZEWINDOW_MAXIMIZEWITHASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xDEB640)
#define WIN32NATIVE_RESIZEWINDOW_SETEXACTWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0xDEC040)
#define WIN32NATIVE_RESIZEWINDOW_RESETDRAGSTATE_OFFSET UNITYSDK_OFFSET(0xDEC120)
#define WIN32NATIVE_RESIZEWINDOW_HANDLEWINDOWSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xDEC130)
#define WIN32NATIVE_RESIZEWINDOW_SAVECURRENTWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xDEB570)
#define WIN32NATIVE_RESIZEWINDOW_HANDLEWMSIZING_OFFSET UNITYSDK_OFFSET(0xDEB170)
#define WIN32NATIVE_RESIZEWINDOW_HANDLEDELAYEDRESIZE_OFFSET UNITYSDK_OFFSET(0xDECCF0)
#define WIN32NATIVE_RESIZEWINDOW_.CTOR_OFFSET UNITYSDK_OFFSET(0xDECD30)
#define WIN32NATIVE_RESIZEWINDOW_CALCULATEMAXCLIENTSIZE_OFFSET UNITYSDK_OFFSET(0xDEBC10)
#define WIN32NATIVE_RESIZEWINDOW_SYNCLASTSIZE_OFFSET UNITYSDK_OFFSET(0xDED020)
#define WIN32NATIVE_RESIZEWINDOW_HANDLENONDRAGRESIZE_OFFSET UNITYSDK_OFFSET(0xDED050)
#define WIN32NATIVE_RESIZEWINDOW_HANDLEWINDOWPOSCHANGING_OFFSET UNITYSDK_OFFSET(0xDEB050)
#define WIN32NATIVE_RESIZEWINDOW_HANDLEMAXIMIZERESTORE_OFFSET UNITYSDK_OFFSET(0xDED1E0)
#define WIN32NATIVE_RESIZEWINDOW_COWATCHUPDATE_OFFSET UNITYSDK_OFFSET(0xDED5C0)

namespace Win32Native
{
	inline static constexpr unsigned int ResizeWindow_TypeDefinitionIndex = 10160;

	class ResizeWindow : public Il2CppObject
	{
	public:
		::System::Single RESIZE_DELAY; // 0x0
		::System::Single MAXIMIZE_RESTORE_DELAY; // 0x0
		::System::Single NON_DRAG_RESIZE_COOLDOWN; // 0x0
		::System::UInt32 WM_NCLBUTTONDBLCLK; // 0x0
		::System::Int32 HTCAPTION; // 0x0
		::Win32Native::ResizeWindow* s_instance; // 0x0
		SubclassProc* subclassProc; // 0x8
		::System::Boolean isSubclassed; // 0x10
		::System::Boolean isActualResizing; // 0x11
		::System::Int32 hWnd; // 0x10
		::Win32Native::ScreenController* screenController; // 0x18
		::System::Action* onExitSizeMove; // 0x20
		::System::Action* onSizeChanged; // 0x28
		::System::Boolean isDragging; // 0x30
		::System::Boolean wasMouseDown; // 0x31
		::System::Boolean hadFocus; // 0x32
		::System::Boolean isResizingByWidthLocked; // 0x33
		::System::Boolean _isMaximized; // 0x34
		::System::Boolean _isMinimized; // 0x35
		::System::Boolean isRestoringFromMaximize; // 0x36
		::UnityEngine::Vector2Int* lastSize; // 0x38
		::System::Single resizeTimer; // 0x40
		::System::Boolean resizePending; // 0x44
		::System::Boolean resizeRunning; // 0x45
		::System::Single lastResizeTime; // 0x48
		::System::Int32 currentMonitorHandle; // 0x50
		::System::Boolean isQuitting; // 0x12

		::System::Void OnApplicationQuitting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_ONAPPLICATIONQUITTING_OFFSET))(nullptr);
		}

		::System::Void InitializeLastSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_INITIALIZELASTSIZE_OFFSET))(nullptr);
		}

		::System::Void CheckMonitorChanged(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_CHECKMONITORCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateFocusState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_UPDATEFOCUSSTATE_OFFSET))(nullptr);
		}

		::System::Void CacheWindowState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_CACHEWINDOWSTATE_OFFSET))(nullptr);
		}

		::System::Void HandleDisplayChange(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_HANDLEDISPLAYCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void UninstallSubclass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_UNINSTALLSUBCLASS_OFFSET))(nullptr);
		}

		::System::Void RequestDelayedAdjust()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_REQUESTDELAYEDADJUST_OFFSET))(nullptr);
		}

		::System::Void OnExitSizeMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_ONEXITSIZEMOVE_OFFSET))(nullptr);
		}

		::System::Void OnEnterSizeMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_ONENTERSIZEMOVE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean GetIsPortraitSafe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_GETISPORTRAITSAFE_OFFSET))(nullptr);
		}

		::System::Int32 SubclassWndProc(::System::Int32 arg, ::System::UInt32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_SUBCLASSWNDPROC_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void InstallSubclass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_INSTALLSUBCLASS_OFFSET))(nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_FINISH_OFFSET))(nullptr);
		}

		::System::Void MaximizeWithAspectRatio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_MAXIMIZEWITHASPECTRATIO_OFFSET))(nullptr);
		}

		::System::Void SetExactWindowSize(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_SETEXACTWINDOWSIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetDragState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_RESETDRAGSTATE_OFFSET))(nullptr);
		}

		::System::Void HandleWindowStateChange(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_HANDLEWINDOWSTATECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void SaveCurrentWindowRect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_SAVECURRENTWINDOWRECT_OFFSET))(nullptr);
		}

		::System::Void HandleWmSizing(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_HANDLEWMSIZING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void HandleDelayedResize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_HANDLEDELAYEDRESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Win32Native::ScreenController* arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::Win32Native::ScreenController*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2Int* CalculateMaxClientSize(::UnityEngine::RectInt* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector2Int*(*)(::UnityEngine::RectInt*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_CALCULATEMAXCLIENTSIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncLastSize(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_SYNCLASTSIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HandleNonDragResize(::UnityEngine::Vector2Int* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2Int*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_HANDLENONDRAGRESIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HandleWindowPosChanging(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_HANDLEWINDOWPOSCHANGING_OFFSET))(arg, nullptr);
		}

		::System::Void HandleMaximizeRestore(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_HANDLEMAXIMIZERESTORE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoWatchUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_RESIZEWINDOW_COWATCHUPDATE_OFFSET))(nullptr);
		}

	};
}

