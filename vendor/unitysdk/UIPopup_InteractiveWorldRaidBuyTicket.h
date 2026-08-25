#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace FlatData { class CurrencyTypes; }
class UILabel;
class UIShopMaxMinButtonController;
class UISprite;
class MXButton;
namespace UnityEngine { class GameObject; }
class EventContentShopBuyMerchandiseResponseMessage;
class BillingPurchaseListByNexonResponseMessage;
class ClickMaxMinButtonMessage;

#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2631F40)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_GET_CURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0x2632110)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2632120)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_REFRESH_OFFSET UNITYSDK_OFFSET(0x26321C0)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_SET_SHOPINFO_OFFSET UNITYSDK_OFFSET(0x2632700)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_SET_CURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0x2632720)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2632730)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26327D0)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_AWAKE_OFFSET UNITYSDK_OFFSET(0x2632FE0)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONCLICKPURCHASE_OFFSET UNITYSDK_OFFSET(0x2633240)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2633360)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_GET_SHOPINFO_OFFSET UNITYSDK_OFFSET(0x26333F0)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2633400)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2633630)
#define UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET UNITYSDK_OFFSET(0x2633640)

	inline static constexpr unsigned int UIPopup_InteractiveWorldRaidBuyTicket_TypeDefinitionIndex = 6570;

	class UIPopup_InteractiveWorldRaidBuyTicket : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ShopInfoDB* _ShopInfo_k__BackingField; // 0xD8
		::FlatData::CurrencyTypes* _CurrencyType_k__BackingField; // 0xE0
		UILabel* messageLabel; // 0xE8
		UILabel* purchaseCountLabel; // 0xF0
		UIShopMaxMinButtonController* purchaseCountController; // 0xF8
		UISprite* ticketSprite; // 0x100
		UILabel* ticketBeforePurchaseLabel; // 0x108
		UILabel* ticketAfterPurchaseLabel; // 0x110
		UILabel* gemCurrentLabel; // 0x118
		UILabel* gemPricePerLabel; // 0x120
		UILabel* gemPriceTotalLabel; // 0x128
		MXButton* okButton; // 0x130
		::UnityEngine::GameObject* notOkButton; // 0x138
		::Il2CppArray<::System::Object*>* closeButtons; // 0x140
		::System::Int64 _currencyChargeCount; // 0x148
		::System::Int64 _pricePerEach; // 0x150
		::System::Int64 _amountPerEach; // 0x158

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONENABLE_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_CurrencyType()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_GET_CURRENCYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentShopBuyMerchandiseResponseMessage(EventContentShopBuyMerchandiseResponseMessage* arg)
		{
			return ((::System::Boolean(*)(EventContentShopBuyMerchandiseResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_REFRESH_OFFSET))(nullptr);
		}

		::System::Void set_ShopInfo(::MX::GameLogic::DBModel::ShopInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_SET_SHOPINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrencyType(::FlatData::CurrencyTypes* arg)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_SET_CURRENCYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleBillingPurchaseListByNexonResponseMessage(BillingPurchaseListByNexonResponseMessage* arg)
		{
			return ((::System::Boolean(*)(BillingPurchaseListByNexonResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONCLICKPURCHASE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ShopInfoDB* get_ShopInfo()
		{
			return ((::MX::GameLogic::DBModel::ShopInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_GET_SHOPINFO_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickMaxMinButtonMessage(ClickMaxMinButtonMessage* arg)
		{
			return ((::System::Boolean(*)(ClickMaxMinButtonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDBUYTICKET_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET))(arg, nullptr);
		}

	};

