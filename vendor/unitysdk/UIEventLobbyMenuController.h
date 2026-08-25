#pragma once
#include "unitysdk.h"

class UIGrid;
class MXButton;
namespace MX::Data { class EventContentSeasonInfo; }
class UIEventLobbyMenuItem;
namespace FlatData { class EventContentType; }

#define UIEVENTLOBBYMENUCONTROLLER_MOVETOEVENCLUESEARCH_OFFSET UNITYSDK_OFFSET(0x24556A0)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOEVENTTREASURE_OFFSET UNITYSDK_OFFSET(0x2455750)
#define UIEVENTLOBBYMENUCONTROLLER_ONMENUITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x2455800)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOCARDSHOP_OFFSET UNITYSDK_OFFSET(0x24560C0)
#define UIEVENTLOBBYMENUCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2456940)
#define UIEVENTLOBBYMENUCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2456C40)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOLOCATION_OFFSET UNITYSDK_OFFSET(0x2456170)
#define UIEVENTLOBBYMENUCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x2456CD0)
#define UIEVENTLOBBYMENUCONTROLLER_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x24577C0)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETODICERACE_OFFSET UNITYSDK_OFFSET(0x24564B0)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOFORTUNEGACHASHOP_OFFSET UNITYSDK_OFFSET(0x24562E0)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOSCENARIOSHORTCUT_OFFSET UNITYSDK_OFFSET(0x24567B0)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOMINIGAMESHOOTINGLOBBY_OFFSET UNITYSDK_OFFSET(0x2456650)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOBOXGACHA_OFFSET UNITYSDK_OFFSET(0x2455CD0)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOEVENTCOLLECTION_OFFSET UNITYSDK_OFFSET(0x2456700)
#define UIEVENTLOBBYMENUCONTROLLER_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2457C00)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETORECOLLECTION_OFFSET UNITYSDK_OFFSET(0x2455FB0)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOMISSION_OFFSET UNITYSDK_OFFSET(0x2455990)
#define UIEVENTLOBBYMENUCONTROLLER_ONCLICKSTORYBUTTON_OFFSET UNITYSDK_OFFSET(0x2457CF0)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOSHOP_OFFSET UNITYSDK_OFFSET(0x2455B30)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOMEETUPSCENARIO_OFFSET UNITYSDK_OFFSET(0x2456390)
#define UIEVENTLOBBYMENUCONTROLLER_MOVETOCONCENTRATION_OFFSET UNITYSDK_OFFSET(0x2456840)

	inline static constexpr unsigned int UIEventLobbyMenuController_TypeDefinitionIndex = 5578;

	class UIEventLobbyMenuController : public Il2CppObject
	{
	public:
		UIGrid* grid; // 0x18
		MXButton* storyButton; // 0x20
		::Il2CppArray<::System::Object*>* menuItems; // 0x28
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x30

		::System::Void MoveToEvenClueSearch(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOEVENCLUESEARCH_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToEventTreasure(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOEVENTTREASURE_OFFSET))(arg, nullptr);
		}

		::System::Void OnMenuItemClicked(UIEventLobbyMenuItem* arg)
		{
			((::System::Void(*)(UIEventLobbyMenuItem*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_ONMENUITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToCardShop(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOCARDSHOP_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MoveToLocation(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_UPDATEREDDOT_OFFSET))(nullptr);
		}

		::System::Void MoveToDiceRace(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETODICERACE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToFortuneGachaShop(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOFORTUNEGACHASHOP_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToScenarioShortcut(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOSCENARIOSHORTCUT_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToMiniGameShootingLobby(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOMINIGAMESHOOTINGLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToBoxGacha(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOBOXGACHA_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToEventCollection(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOEVENTCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetReddot(::FlatData::EventContentType* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::EventContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_SETREDDOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveToRecollection(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETORECOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToMission(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickStoryButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_ONCLICKSTORYBUTTON_OFFSET))(nullptr);
		}

		::System::Void MoveToShop(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOSHOP_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToMeetupScenario()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOMEETUPSCENARIO_OFFSET))(nullptr);
		}

		::System::Void MoveToConcentration(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUCONTROLLER_MOVETOCONCENTRATION_OFFSET))(arg, nullptr);
		}

	};

