#pragma once
#include "unitysdk.h"

class UIWidget;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class InteractiveWorldRaidUITriggerMessage;
class EventContentShopListResponseMessage;
class CurrencyUpdateMessage;

#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_ONBUYTICKETBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x262AA50)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_ONRESTORETIMEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x262ACE0)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_REFRESH_OFFSET UNITYSDK_OFFSET(0x262AE10)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_HANDLEUITRIGGERMESSAGE_OFFSET UNITYSDK_OFFSET(0x262B300)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_CORESTORETIMETOOLTIPCLOSETIMER_OFFSET UNITYSDK_OFFSET(0x262ADA0)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x262B360)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x262B570)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x262B580)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0x262B990)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x262BD80)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x262C330)
#define UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x262C4F0)

	inline static constexpr unsigned int UIInteractiveWorldRaidLobbyTicketButton_TypeDefinitionIndex = 6554;

	class UIInteractiveWorldRaidLobbyTicketButton : public Il2CppObject
	{
	public:
		UIWidget* alphaWidget; // 0x18
		UILabel* displayLabel; // 0x20
		MXButton* restoreTimeButton; // 0x28
		MXButton* buyButton; // 0x30
		::UnityEngine::GameObject* restoreTimeTooltipObject; // 0x38
		UILabel* restoreTimeTooltipDisplayLabel; // 0x40
		::System::Boolean _isFull; // 0x48
		::FlatData::CurrencyTypes* _currencyType; // 0x4C
		::MX::GameLogic::Parcel::ParcelInfo* _enterParcelInfo; // 0x50
		::System::TimeSpan* _autoChargeTime; // 0x58
		::System::TimeSpan* _timeLeftForCharge; // 0x60
		::System::DateTime* _lastChargeTime; // 0x68

		::System::Void OnBuyTicketButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_ONBUYTICKETBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnRestoreTimeButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_ONRESTORETIMEBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean HandleUITriggerMessage(InteractiveWorldRaidUITriggerMessage* arg)
		{
			return ((::System::Boolean(*)(InteractiveWorldRaidUITriggerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_HANDLEUITRIGGERMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoRestoreTimeTooltipCloseTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_CORESTORETIMETOOLTIPCLOSETIMER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentShopListResponseMessage(EventContentShopListResponseMessage* arg)
		{
			return ((::System::Boolean(*)(EventContentShopListResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(CurrencyUpdateMessage* arg)
		{
			return ((::System::Boolean(*)(CurrencyUpdateMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTICKETBUTTON_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

