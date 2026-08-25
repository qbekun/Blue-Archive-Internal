#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
namespace MX::Data { class EventContentSeasonInfo; }
class UIEventMission;
class UIEventShop;

#define UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0x26299D0)
#define UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_ONMISSIONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26299E0)
#define UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_ONSTORYBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2629B60)
#define UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_ONSHOPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2629EE0)
#define UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_AWAKE_OFFSET UNITYSDK_OFFSET(0x262A060)
#define UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_SETDATA_OFFSET UNITYSDK_OFFSET(0x2623F60)
#define UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU__ONMISSIONBUTTONCLICK_B__13_0_OFFSET UNITYSDK_OFFSET(0x262A440)
#define UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x26233F0)
#define UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU__ONSHOPBUTTONCLICK_B__14_0_OFFSET UNITYSDK_OFFSET(0x262A5C0)

	inline static constexpr unsigned int UIInteractiveWorldRaidLobbyEventMenu_TypeDefinitionIndex = 6550;

	class UIInteractiveWorldRaidLobbyEventMenu : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* openSeasonMenu; // 0x18
		::UnityEngine::GameObject* permanentMenu; // 0x20
		MXButton* openSeasonStoryButton; // 0x28
		MXButton* openSeasonMissionButton; // 0x30
		MXButton* openSeasonShopButton; // 0x38
		::UnityEngine::GameObject* missionRedDot; // 0x40
		MXButton* permanentStoryButton; // 0x48
		::MX::Data::EventContentSeasonInfo* _seasonInfo; // 0x50
		::MX::Data::EventContentSeasonInfo* _missionSeasonInfo; // 0x58
		::MX::Data::EventContentSeasonInfo* _shopSeasonInfo; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnMissionButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_ONMISSIONBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnStoryButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_ONSTORYBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnShopButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_ONSHOPBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnMissionButtonClick_b__13_0(UIEventMission* arg)
		{
			((::System::Void(*)(UIEventMission*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU__ONMISSIONBUTTONCLICK_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU_UPDATEREDDOT_OFFSET))(nullptr);
		}

		::System::Void _OnShopButtonClick_b__14_0(UIEventShop* arg)
		{
			((::System::Void(*)(UIEventShop*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYEVENTMENU__ONSHOPBUTTONCLICK_B__14_0_OFFSET))(arg, nullptr);
		}

	};

