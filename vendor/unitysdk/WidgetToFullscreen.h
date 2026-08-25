#pragma once
#include "unitysdk.h"

class FitType;
class UIWidget;
class SafeAreaScaler;

#define WIDGETTOFULLSCREEN_REFRESH_OFFSET UNITYSDK_OFFSET(0xC23120)
#define WIDGETTOFULLSCREEN_FITHEIGHT_OFFSET UNITYSDK_OFFSET(0xC23AD0)
#define WIDGETTOFULLSCREEN_.CTOR_OFFSET UNITYSDK_OFFSET(0xC23F50)
#define WIDGETTOFULLSCREEN_FITWIDTH_OFFSET UNITYSDK_OFFSET(0xC236D0)
#define WIDGETTOFULLSCREEN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC23F60)
#define WIDGETTOFULLSCREEN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC24090)
#define WIDGETTOFULLSCREEN_TOFULLSCREEN_OFFSET UNITYSDK_OFFSET(0xC23210)
#define WIDGETTOFULLSCREEN_AWAKE_OFFSET UNITYSDK_OFFSET(0xC24160)

	inline static constexpr unsigned int WidgetToFullscreen_TypeDefinitionIndex = 8888;

	class WidgetToFullscreen : public Il2CppObject
	{
	public:
		FitType* fitType; // 0x18
		UIWidget* widget; // 0x20
		SafeAreaScaler* safeAreaScaler; // 0x28

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREEN_REFRESH_OFFSET))(nullptr);
		}

		::System::Void FitHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREEN_FITHEIGHT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREEN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FitWidth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREEN_FITWIDTH_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREEN_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREEN_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ToFullscreen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREEN_TOFULLSCREEN_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREEN_AWAKE_OFFSET))(nullptr);
		}

	};

