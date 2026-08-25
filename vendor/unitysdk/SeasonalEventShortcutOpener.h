#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
class UISeasonalEventShopPopup;
class UIEventMeetupPopup;

#define SEASONALEVENTSHORTCUTOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C6E90)
#define SEASONALEVENTSHORTCUTOPENER_OPENSEASONALEVENTTHEN_OFFSET UNITYSDK_OFFSET(0x26C6F20)
#define SEASONALEVENTSHORTCUTOPENER__OPENUI_B__5_2_OFFSET UNITYSDK_OFFSET(0x26C7050)
#define SEASONALEVENTSHORTCUTOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C7100)
#define SEASONALEVENTSHORTCUTOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C7110)
#define SEASONALEVENTSHORTCUTOPENER__OPENUI_B__5_1_OFFSET UNITYSDK_OFFSET(0x26C7140)
#define SEASONALEVENTSHORTCUTOPENER_GET__SEASONINFO_OFFSET UNITYSDK_OFFSET(0x26C7170)
#define SEASONALEVENTSHORTCUTOPENER__OPENUI_B__5_0_OFFSET UNITYSDK_OFFSET(0x26C7180)

	inline static constexpr unsigned int SeasonalEventShortcutOpener_TypeDefinitionIndex = 6988;

	class SeasonalEventShortcutOpener : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* __seasonInfo_k__BackingField; // 0x18

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEASONALEVENTSHORTCUTOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void OpenSeasonalEventThen(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEASONALEVENTSHORTCUTOPENER_OPENSEASONALEVENTTHEN_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__5_2(UISeasonalEventShopPopup* arg)
		{
			((::System::Void(*)(UISeasonalEventShopPopup*, ::PVOID))((::PBYTE)hIl2Cpp + SEASONALEVENTSHORTCUTOPENER__OPENUI_B__5_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SEASONALEVENTSHORTCUTOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SEASONALEVENTSHORTCUTOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__5_1(UIEventMeetupPopup* arg)
		{
			((::System::Void(*)(UIEventMeetupPopup*, ::PVOID))((::PBYTE)hIl2Cpp + SEASONALEVENTSHORTCUTOPENER__OPENUI_B__5_1_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get__seasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SEASONALEVENTSHORTCUTOPENER_GET__SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__5_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEASONALEVENTSHORTCUTOPENER__OPENUI_B__5_0_OFFSET))(nullptr);
		}

	};

