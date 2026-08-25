#pragma once
#include "../unitysdk.h"

class ScreenModeType;
class ScreenRatioType;
namespace UnityEngine { class Vector2Int; }
namespace Win32Native { class Win32ClientRect; }
namespace UnityEngine { class RectInt; }
namespace Win32Native { class Win32FrameSize; }

#define WIN32NATIVE_SCREENCONTROLLER_GET_SCREENMODE_OFFSET UNITYSDK_OFFSET(0xDED880)
#define WIN32NATIVE_SCREENCONTROLLER_GET_RATIOTYPE_OFFSET UNITYSDK_OFFSET(0xDED890)
#define WIN32NATIVE_SCREENCONTROLLER_GET_TARGETASPECT_OFFSET UNITYSDK_OFFSET(0xDEA480)
#define WIN32NATIVE_SCREENCONTROLLER_GET_CURRENTASPECT_OFFSET UNITYSDK_OFFSET(0xDED8A0)
#define WIN32NATIVE_SCREENCONTROLLER_GET_ISFULLSCREEN_OFFSET UNITYSDK_OFFSET(0xDEAFC0)
#define WIN32NATIVE_SCREENCONTROLLER_SETOPTIONS_OFFSET UNITYSDK_OFFSET(0xDED8D0)
#define WIN32NATIVE_SCREENCONTROLLER_TOGGLESCREENMODE_OFFSET UNITYSDK_OFFSET(0xDED8E0)
#define WIN32NATIVE_SCREENCONTROLLER_TOGGLERATIOTYPE_OFFSET UNITYSDK_OFFSET(0xDED8F0)
#define WIN32NATIVE_SCREENCONTROLLER_CALCULATEWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0xDED900)
#define WIN32NATIVE_SCREENCONTROLLER_DETERMINERESIZEAXIS_OFFSET UNITYSDK_OFFSET(0xDEA6D0)
#define WIN32NATIVE_SCREENCONTROLLER_CALCULATEASPECTLOCKEDSIZE_OFFSET UNITYSDK_OFFSET(0xDEA790)
#define WIN32NATIVE_SCREENCONTROLLER_CLAMPWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0xDEE2F0)
#define WIN32NATIVE_SCREENCONTROLLER_APPLYLIMIT_OFFSET UNITYSDK_OFFSET(0xDEE5F0)
#define WIN32NATIVE_SCREENCONTROLLER_CLAMPWINDOWTOWORKAREA_OFFSET UNITYSDK_OFFSET(0xDEE890)
#define WIN32NATIVE_SCREENCONTROLLER_CLAMPWINDOWTOWORKAREA_OFFSET UNITYSDK_OFFSET(0xDE7310)
#define WIN32NATIVE_SCREENCONTROLLER_GETWORKAREAFORCLIENT_OFFSET UNITYSDK_OFFSET(0xDEEC60)
#define WIN32NATIVE_SCREENCONTROLLER_SHRINKTOFIT_OFFSET UNITYSDK_OFFSET(0xDEF010)
#define WIN32NATIVE_SCREENCONTROLLER_CLAMPCLIENTPOSITION_OFFSET UNITYSDK_OFFSET(0xDEF250)
#define WIN32NATIVE_SCREENCONTROLLER_GETCENTEREDCLIENTPOSITION_OFFSET UNITYSDK_OFFSET(0xDEEF80)
#define WIN32NATIVE_SCREENCONTROLLER_GETCENTEREDPOSITIONINWORKAREA_OFFSET UNITYSDK_OFFSET(0xDEF6A0)
#define WIN32NATIVE_SCREENCONTROLLER_GETCENTEREDPOSITION_OFFSET UNITYSDK_OFFSET(0xDEF7B0)
#define WIN32NATIVE_SCREENCONTROLLER_GETDEFAULTWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0xDEF840)
#define WIN32NATIVE_SCREENCONTROLLER_GETDEFAULTWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xDEF860)
#define WIN32NATIVE_SCREENCONTROLLER_ISPORTRAITSCREEN_OFFSET UNITYSDK_OFFSET(0xDEB040)
#define WIN32NATIVE_SCREENCONTROLLER_GETRATIONAME_OFFSET UNITYSDK_OFFSET(0xDEF930)
#define WIN32NATIVE_SCREENCONTROLLER_GETASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xDE7280)
#define WIN32NATIVE_SCREENCONTROLLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDEF9A0)
#define WIN32NATIVE_SCREENCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDEFB30)
#define WIN32NATIVE_SCREENCONTROLLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDEFB40)

namespace Win32Native
{
	inline static constexpr unsigned int ScreenController_TypeDefinitionIndex = 10162;

	class ScreenController : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* AspectRatios; // 0x0
		::System::Int32 MinWindowWidth; // 0x0
		::System::Int32 MinWindowHeight; // 0x0
		::System::Int32 DEFAULT_WIDTH_16_9; // 0x0
		::System::Int32 DEFAULT_HEIGHT_16_9; // 0x0
		::System::Int32 DEFAULT_WIDTH_4_3; // 0x0
		::System::Int32 DEFAULT_HEIGHT_4_3; // 0x0
		ScreenModeType* screenMode; // 0x10
		ScreenRatioType* ratioType; // 0x14

		ScreenModeType* get_ScreenMode()
		{
			return ((ScreenModeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GET_SCREENMODE_OFFSET))(nullptr);
		}

		ScreenRatioType* get_RatioType()
		{
			return ((ScreenRatioType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GET_RATIOTYPE_OFFSET))(nullptr);
		}

		::System::Single get_TargetAspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GET_TARGETASPECT_OFFSET))(nullptr);
		}

		::System::Single get_CurrentAspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GET_CURRENTASPECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFullScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GET_ISFULLSCREEN_OFFSET))(nullptr);
		}

		::System::Void SetOptions(ScreenModeType* arg, ScreenRatioType* arg2)
		{
			((::System::Void(*)(ScreenModeType*, ScreenRatioType*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_SETOPTIONS_OFFSET))(arg, arg2, nullptr);
		}

		ScreenModeType* ToggleScreenMode()
		{
			return ((ScreenModeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_TOGGLESCREENMODE_OFFSET))(nullptr);
		}

		ScreenRatioType* ToggleRatioType()
		{
			return ((ScreenRatioType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_TOGGLERATIOTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* CalculateWindowSize(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_CALCULATEWINDOWSIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean DetermineResizeAxis(::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2Int* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int*, ::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_DETERMINERESIZEAXIS_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2Int* CalculateAspectLockedSize(::UnityEngine::Vector2Int* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			return ((::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2Int*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_CALCULATEASPECTLOCKEDSIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2Int* ClampWindowSize(::System::Int32 arg, ::System::Int32 arg2, ::System::Single arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Int32 arg7)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_CLAMPWINDOWSIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		Il2CppObject* ApplyLimit(::System::Int32 arg, ::System::Int32 arg2, ::System::Single arg3, ::System::Int32 arg4, ::System::Int32 arg5, Il2CppObject* arg6)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_APPLYLIMIT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::Win32Native::Win32ClientRect* ClampWindowToWorkArea(::Win32Native::Win32ClientRect* arg, ::System::Single arg2)
		{
			return ((::Win32Native::Win32ClientRect*(*)(::Win32Native::Win32ClientRect*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_CLAMPWINDOWTOWORKAREA_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::RectInt* ClampWindowToWorkArea(::UnityEngine::RectInt* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::RectInt*(*)(::UnityEngine::RectInt*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_CLAMPWINDOWTOWORKAREA_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::RectInt* GetWorkAreaForClient(::Win32Native::Win32ClientRect* arg)
		{
			return ((::UnityEngine::RectInt*(*)(::Win32Native::Win32ClientRect*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GETWORKAREAFORCLIENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* ShrinkToFit(::System::Int32 arg, ::System::Int32 arg2, ::System::Single arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_SHRINKTOFIT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::UnityEngine::Vector2Int* ClampClientPosition(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::UnityEngine::RectInt* arg5, ::Win32Native::Win32FrameSize* arg6)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RectInt*, ::Win32Native::Win32FrameSize*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_CLAMPCLIENTPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::UnityEngine::Vector2Int* GetCenteredClientPosition(::System::Int32 arg, ::System::Int32 arg2, ::UnityEngine::RectInt* arg3, ::Win32Native::Win32FrameSize* arg4)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::System::Int32, ::UnityEngine::RectInt*, ::Win32Native::Win32FrameSize*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GETCENTEREDCLIENTPOSITION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector2Int* GetCenteredPositionInWorkArea(::System::Int32 arg, ::System::Int32 arg2, ::UnityEngine::RectInt* arg3)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::System::Int32, ::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GETCENTEREDPOSITIONINWORKAREA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2Int* GetCenteredPosition(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GETCENTEREDPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2Int* GetDefaultWindowSize(ScreenRatioType* arg)
		{
			return ((::UnityEngine::Vector2Int*(*)(ScreenRatioType*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GETDEFAULTWINDOWSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RectInt* GetDefaultWindowRect(ScreenRatioType* arg)
		{
			return ((::UnityEngine::RectInt*(*)(ScreenRatioType*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GETDEFAULTWINDOWRECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPortraitScreen(::System::Single arg)
		{
			return ((::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_ISPORTRAITSCREEN_OFFSET))(arg, nullptr);
		}

		::System::String* GetRatioName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GETRATIONAME_OFFSET))(nullptr);
		}

		::System::Single GetAspectRatio(ScreenRatioType* arg)
		{
			return ((::System::Single(*)(ScreenRatioType*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_GETASPECTRATIO_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENCONTROLLER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

