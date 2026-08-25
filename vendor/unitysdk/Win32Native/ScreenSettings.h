#pragma once
#include "../unitysdk.h"

class ScreenModeType;
class ScreenRatioType;
namespace UnityEngine { class RectInt; }

#define WIN32NATIVE_SCREENSETTINGS_SAVEALL_OFFSET UNITYSDK_OFFSET(0xDEFC90)
#define WIN32NATIVE_SCREENSETTINGS_GETDEFAULTRECT_OFFSET UNITYSDK_OFFSET(0xDE77C0)
#define WIN32NATIVE_SCREENSETTINGS_LOADSCREENRATIO_OFFSET UNITYSDK_OFFSET(0xDE71B0)
#define WIN32NATIVE_SCREENSETTINGS_SAVEWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xDEC290)
#define WIN32NATIVE_SCREENSETTINGS_LOADWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xDEFDC0)
#define WIN32NATIVE_SCREENSETTINGS_SAVEWINDOWPOSITION_OFFSET UNITYSDK_OFFSET(0xDEAF30)

namespace Win32Native
{
	inline static constexpr unsigned int ScreenSettings_TypeDefinitionIndex = 10163;

	class ScreenSettings : public Il2CppObject
	{
	public:
		::System::Void SaveAll(ScreenModeType* arg, ScreenRatioType* arg2, ::UnityEngine::RectInt* arg3)
		{
			((::System::Void(*)(ScreenModeType*, ScreenRatioType*, ::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENSETTINGS_SAVEALL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::RectInt* GetDefaultRect()
		{
			return ((::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENSETTINGS_GETDEFAULTRECT_OFFSET))(nullptr);
		}

		ScreenRatioType* LoadScreenRatio()
		{
			return ((ScreenRatioType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENSETTINGS_LOADSCREENRATIO_OFFSET))(nullptr);
		}

		::System::Void SaveWindowRect(::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENSETTINGS_SAVEWINDOWRECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RectInt* LoadWindowRect()
		{
			return ((::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENSETTINGS_LOADWINDOWRECT_OFFSET))(nullptr);
		}

		::System::Void SaveWindowPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_SCREENSETTINGS_SAVEWINDOWPOSITION_OFFSET))(nullptr);
		}

	};
}

