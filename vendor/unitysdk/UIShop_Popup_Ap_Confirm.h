#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
class MXButton;
namespace FlatData { class CurrencyTypes; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISHOP_POPUP_AP_CONFIRM_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xABEBE0)
#define UISHOP_POPUP_AP_CONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0xABEC70)
#define UISHOP_POPUP_AP_CONFIRM_.CTOR_OFFSET UNITYSDK_OFFSET(0xABEF60)
#define UISHOP_POPUP_AP_CONFIRM_ONOPENED_OFFSET UNITYSDK_OFFSET(0xABEF80)
#define UISHOP_POPUP_AP_CONFIRM_GET_MESSAGELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xABF190)
#define UISHOP_POPUP_AP_CONFIRM_GET_CURRENCYNAME_OFFSET UNITYSDK_OFFSET(0xABF1F0)
#define UISHOP_POPUP_AP_CONFIRM_HANDLESHOPBUYAPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xABF290)
#define UISHOP_POPUP_AP_CONFIRM_SETDATA_OFFSET UNITYSDK_OFFSET(0xABF350)
#define UISHOP_POPUP_AP_CONFIRM_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xABFAA0)
#define UISHOP_POPUP_AP_CONFIRM_GET_TITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xABFA40)
#define UISHOP_POPUP_AP_CONFIRM_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xABFD10)
#define UISHOP_POPUP_AP_CONFIRM_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xABFDD0)
#define UISHOP_POPUP_AP_CONFIRM_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xABFE90)

	inline static constexpr unsigned int UIShop_Popup_Ap_Confirm_TypeDefinitionIndex = 8029;

	class UIShop_Popup_Ap_Confirm : public Il2CppObject
	{
	public:
		UILabel* title; // 0xD8
		UISprite* parcelSprite; // 0xE0
		UISprite* skewParcelSprite; // 0xE8
		UILabel* currencyLabel; // 0xF0
		UILabel* apBeforePurchaseLabel; // 0xF8
		UILabel* apAfterPurchaseLabel; // 0x100
		UILabel* gemAmountLabel; // 0x108
		UILabel* messageLabel; // 0x110
		MXButton* confirmButton; // 0x118
		MXButton* cancelButton; // 0x120
		MXButton* xButton; // 0x128
		::System::Action* confirmAction; // 0x130
		::FlatData::CurrencyTypes* CurrencyType; // 0x138

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::String* get_MessageLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_GET_MESSAGELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_CurrencyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_GET_CURRENCYNAME_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopBuyAPResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_HANDLESHOPBUYAPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_ONCLOSED_OFFSET))(nullptr);
		}

		::System::String* get_TitleLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_GET_TITLELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Boolean HandleBillingPurchaseListByNexonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_CONFIRM_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

	};

