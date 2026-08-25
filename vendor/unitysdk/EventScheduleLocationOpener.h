#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
class UIAcademyLocation;

#define EVENTSCHEDULELOCATIONOPENER__OPENUI_B__5_1_OFFSET UNITYSDK_OFFSET(0x26C6A50)
#define EVENTSCHEDULELOCATIONOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C6A80)
#define EVENTSCHEDULELOCATIONOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C6A90)
#define EVENTSCHEDULELOCATIONOPENER_GET__SEASONINFO_OFFSET UNITYSDK_OFFSET(0x26C6AC0)
#define EVENTSCHEDULELOCATIONOPENER__OPENUI_G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0_OFFSET UNITYSDK_OFFSET(0x26C6AD0)
#define EVENTSCHEDULELOCATIONOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C6B60)

	inline static constexpr unsigned int EventScheduleLocationOpener_TypeDefinitionIndex = 6986;

	class EventScheduleLocationOpener : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* __seasonInfo_k__BackingField; // 0x18

		::System::Void _OpenUI_b__5_1(UIAcademyLocation* arg)
		{
			((::System::Void(*)(UIAcademyLocation*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSCHEDULELOCATIONOPENER__OPENUI_B__5_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSCHEDULELOCATIONOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSCHEDULELOCATIONOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get__seasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSCHEDULELOCATIONOPENER_GET__SEASONINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OpenUI_g__Co_OpenAcademyLocationWithEventContent|5_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSCHEDULELOCATIONOPENER__OPENUI_G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSCHEDULELOCATIONOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

