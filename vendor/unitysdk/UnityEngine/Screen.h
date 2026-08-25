#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ScreenOrientation; }
namespace UnityEngine { class EnabledOrientation; }
namespace UnityEngine { class Resolution; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class FullScreenMode; }
namespace UnityEngine { class Resolution&; }
namespace UnityEngine { class Rect&; }

#define UNITYENGINE_SCREEN_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA1F1F00)
#define UNITYENGINE_SCREEN_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA1F1F40)
#define UNITYENGINE_SCREEN_GET_DPI_OFFSET UNITYSDK_OFFSET(0xA1F1F80)
#define UNITYENGINE_SCREEN_REQUESTORIENTATION_OFFSET UNITYSDK_OFFSET(0xA1F1FC0)
#define UNITYENGINE_SCREEN_GETSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0xA1F2000)
#define UNITYENGINE_SCREEN_GET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0xA1F2040)
#define UNITYENGINE_SCREEN_SET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0xA1F2080)
#define UNITYENGINE_SCREEN_SET_SLEEPTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA1F2120)
#define UNITYENGINE_SCREEN_SETORIENTATIONENABLED_OFFSET UNITYSDK_OFFSET(0xA1F2160)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAIT_OFFSET UNITYSDK_OFFSET(0xA1F21A0)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET UNITYSDK_OFFSET(0xA1F21E0)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPELEFT_OFFSET UNITYSDK_OFFSET(0xA1F2220)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPERIGHT_OFFSET UNITYSDK_OFFSET(0xA1F2260)
#define UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_OFFSET UNITYSDK_OFFSET(0xA1F22A0)
#define UNITYENGINE_SCREEN_GET_FULLSCREEN_OFFSET UNITYSDK_OFFSET(0xA1F2340)
#define UNITYENGINE_SCREEN_GET_SAFEAREA_OFFSET UNITYSDK_OFFSET(0xA1F2380)
#define UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET UNITYSDK_OFFSET(0xA1F2410)
#define UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET UNITYSDK_OFFSET(0xA1F2460)
#define UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET UNITYSDK_OFFSET(0xA1F24B0)
#define UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET UNITYSDK_OFFSET(0xA1F2540)
#define UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F2300)
#define UNITYENGINE_SCREEN_GET_SAFEAREA_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F23D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Screen_TypeDefinitionIndex = 30993;

	class Screen : public Il2CppObject
	{
	public:
		::System::Int32 get_width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_dpi()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_DPI_OFFSET))(nullptr);
		}

		::System::Void RequestOrientation(::UnityEngine::ScreenOrientation* arg)
		{
			((::System::Void(*)(::UnityEngine::ScreenOrientation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_REQUESTORIENTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ScreenOrientation* GetScreenOrientation()
		{
			return (return (::UnityEngine::ScreenOrientation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GETSCREENORIENTATION_OFFSET))(nullptr);
		}

		::UnityEngine::ScreenOrientation* get_orientation()
		{
			return (return (::UnityEngine::ScreenOrientation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_ORIENTATION_OFFSET))(nullptr);
		}

		::System::Void set_orientation(::UnityEngine::ScreenOrientation* arg)
		{
			((::System::Void(*)(::UnityEngine::ScreenOrientation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_ORIENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_sleepTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_SLEEPTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SetOrientationEnabled(::UnityEngine::EnabledOrientation* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::EnabledOrientation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETORIENTATIONENABLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_autorotateToPortrait(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_autorotateToPortraitUpsideDown(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void set_autorotateToLandscapeLeft(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPELEFT_OFFSET))(arg, nullptr);
		}

		::System::Void set_autorotateToLandscapeRight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPERIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Resolution* get_currentResolution()
		{
			return (return (::UnityEngine::Resolution*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_OFFSET))(nullptr);
		}

		::System::Boolean get_fullScreen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_FULLSCREEN_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_safeArea()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_SAFEAREA_OFFSET))(nullptr);
		}

		::System::Void SetResolution(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::FullScreenMode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::FullScreenMode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetResolution(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::FullScreenMode* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::FullScreenMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetResolution(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetResolution(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void get_currentResolution_Injected(::UnityEngine::Resolution&* arg)
		{
			((::System::Void(*)(::UnityEngine::Resolution&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_safeArea_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_SAFEAREA_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

