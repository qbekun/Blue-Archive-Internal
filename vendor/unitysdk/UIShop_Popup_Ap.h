#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace FlatData { class ShopCategoryType; }
class UIShopMaxMinButtonController;
class PurchasableApCalculator;
namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace FlatData { class CurrencyTypes; }
class RequestInfo;
class UIShop_Popup_Ap_Confirm;
namespace MX::Data { class ShopExcelData; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace Assets::_MX::Program::Scripts::Network { class SessionTask; }

#define UISHOP_POPUP_AP__ONCLICKPURCHASE_B__62_1_OFFSET UNITYSDK_OFFSET(0xABAE90)
#define UISHOP_POPUP_AP_SET_CURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0xABAF20)
#define UISHOP_POPUP_AP_OPENAPPOPUP_OFFSET UNITYSDK_OFFSET(0xABAF30)
#define UISHOP_POPUP_AP__ONCLICKPURCHASE_B__62_3_OFFSET UNITYSDK_OFFSET(0xABB2D0)
#define UISHOP_POPUP_AP_GET_PURCHASECOUNTLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xABB340)
#define UISHOP_POPUP_AP_HANDLESHOPBUYAPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xABB3A0)
#define UISHOP_POPUP_AP_.CTOR_OFFSET UNITYSDK_OFFSET(0xABB460)
#define UISHOP_POPUP_AP_REFRESHWIDGETS_OFFSET UNITYSDK_OFFSET(0xABB4D0)
#define UISHOP_POPUP_AP_GET_CURRENCYPARCELID_OFFSET UNITYSDK_OFFSET(0xABC0A0)
#define UISHOP_POPUP_AP_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xABC0B0)
#define UISHOP_POPUP_AP_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xABC120)
#define UISHOP_POPUP_AP__ONCLICKPURCHASE_B__62_4_OFFSET UNITYSDK_OFFSET(0xABC1E0)
#define UISHOP_POPUP_AP_SETCAUTIONTEXT_OFFSET UNITYSDK_OFFSET(0xABC350)
#define UISHOP_POPUP_AP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xABC380)
#define UISHOP_POPUP_AP_AWAKE_OFFSET UNITYSDK_OFFSET(0xABC3C0)
#define UISHOP_POPUP_AP_GET_CURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0xABC6B0)
#define UISHOP_POPUP_AP__AWAKE_B__47_0_OFFSET UNITYSDK_OFFSET(0xABC6C0)
#define UISHOP_POPUP_AP_ONCLICKPURCHASE_OFFSET UNITYSDK_OFFSET(0xABC750)
#define UISHOP_POPUP_AP_GET_MESSAGELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xABC030)
#define UISHOP_POPUP_AP_HANDLESHOPLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xABCE00)
#define UISHOP_POPUP_AP_SET_CURRENCYPARCELID_OFFSET UNITYSDK_OFFSET(0xABD430)
#define UISHOP_POPUP_AP__AWAKE_B__47_1_OFFSET UNITYSDK_OFFSET(0xABD440)
#define UISHOP_POPUP_AP_GET_SHOWCAUTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xABC090)
#define UISHOP_POPUP_AP_GET_CURRENCYNAME_OFFSET UNITYSDK_OFFSET(0xABBF20)
#define UISHOP_POPUP_AP_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET UNITYSDK_OFFSET(0xABD4D0)
#define UISHOP_POPUP_AP_GET_TITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xABBEC0)
#define UISHOP_POPUP_AP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xABD540)
#define UISHOP_POPUP_AP_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xABD830)
#define UISHOP_POPUP_AP_ONOPENED_OFFSET UNITYSDK_OFFSET(0xABD840)
#define UISHOP_POPUP_AP__ONCLICKPURCHASE_B__62_0_OFFSET UNITYSDK_OFFSET(0xABDAD0)
#define UISHOP_POPUP_AP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xABDC50)
#define UISHOP_POPUP_AP__ONCLICKPURCHASE_G__GETNETWORKTASK|62_2_OFFSET UNITYSDK_OFFSET(0xABC260)
#define UISHOP_POPUP_AP_GET_SHOPINFO_OFFSET UNITYSDK_OFFSET(0xABDEE0)
#define UISHOP_POPUP_AP_OPENCAFESUMMONTICKETPOPUP_OFFSET UNITYSDK_OFFSET(0xABDEF0)
#define UISHOP_POPUP_AP_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xABE010)
#define UISHOP_POPUP_AP_GET_MAXMINBUTTONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xABBFC0)
#define UISHOP_POPUP_AP_SET_SHOPINFO_OFFSET UNITYSDK_OFFSET(0xABE0D0)
#define UISHOP_POPUP_AP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0xABAF40)

	inline static constexpr unsigned int UIShop_Popup_Ap_TypeDefinitionIndex = 8026;

	class UIShop_Popup_Ap : public Il2CppObject
	{
	public:
		UILabel* Title; // 0xD8
		UISprite* ParcelSprite; // 0xE0
		UISprite* SkewParcelSprite; // 0xE8
		UILabel* ApBeforePurchaseLabel; // 0xF0
		UILabel* ApAfterPurchaseLabel; // 0xF8
		UILabel* Message; // 0x100
		UILabel* CautionMessage; // 0x108
		::UnityEngine::GameObject* CautionMessageRoot; // 0x110
		UILabel* purchaseCountLabel; // 0x118
		UILabel* pricePerLabel; // 0x120
		UILabel* priceTotalLabel; // 0x128
		MXButton* ButtonOk; // 0x130
		MXButton* ButtonClose; // 0x138
		MXButton* ButtonX; // 0x140
		::FlatData::ShopCategoryType* _categoryType; // 0x148
		UIShopMaxMinButtonController* _maxMinButtonController; // 0x150
		::System::Int64 currencyCharge; // 0x158
		PurchasableApCalculator* purchasableApCalculator; // 0x160
		::MX::GameLogic::DBModel::ShopInfoDB* _ShopInfo_k__BackingField; // 0x168
		::System::Int64 _CurrencyParcelId_k__BackingField; // 0x170
		::FlatData::CurrencyTypes* _CurrencyType_k__BackingField; // 0x178
		RequestInfo* Info; // 0x180

		::System::Void _OnClickPurchase_b__62_1(UIShop_Popup_Ap_Confirm* arg)
		{
			((::System::Void(*)(UIShop_Popup_Ap_Confirm*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP__ONCLICKPURCHASE_B__62_1_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrencyType(::FlatData::CurrencyTypes* arg)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_SET_CURRENCYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenApPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_OPENAPPOPUP_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickPurchase_b__62_3(::MX::Data::ShopExcelData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ShopExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP__ONCLICKPURCHASE_B__62_3_OFFSET))(arg, nullptr);
		}

		::System::String* get_PurchaseCountLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_PURCHASECOUNTLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopBuyAPResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_HANDLESHOPBUYAPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshWidgets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_REFRESHWIDGETS_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrencyParcelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_CURRENCYPARCELID_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleBillingPurchaseListByNexonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPurchase_b__62_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP__ONCLICKPURCHASE_B__62_4_OFFSET))(nullptr);
		}

		::System::Void SetCautionText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_SETCAUTIONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_AWAKE_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_CurrencyType()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_CURRENCYTYPE_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__47_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP__AWAKE_B__47_0_OFFSET))(nullptr);
		}

		::System::Void OnClickPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_ONCLICKPURCHASE_OFFSET))(nullptr);
		}

		::System::String* get_MessageLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_MESSAGELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopListResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_HANDLESHOPLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrencyParcelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_SET_CURRENCYPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__47_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP__AWAKE_B__47_1_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowCautionMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_SHOWCAUTIONMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_CurrencyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_CURRENCYNAME_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickMaxMinButtonMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_TitleLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_TITLELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_ONDISABLE_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return ((::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPurchase_b__62_0(UIShop_Popup_Ap_Confirm* arg)
		{
			((::System::Void(*)(UIShop_Popup_Ap_Confirm*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP__ONCLICKPURCHASE_B__62_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_ONENABLE_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::SessionTask* _OnClickPurchase_g__GetNetworkTask|62_2()
		{
			return ((::Assets::_MX::Program::Scripts::Network::SessionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP__ONCLICKPURCHASE_G__GETNETWORKTASK|62_2_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ShopInfoDB* get_ShopInfo()
		{
			return ((::MX::GameLogic::DBModel::ShopInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_SHOPINFO_OFFSET))(nullptr);
		}

		::System::Void OpenCafeSummonTicketPopup(::MX::GameLogic::DBModel::ShopInfoDB* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopInfoDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_OPENCAFESUMMONTICKETPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		UIShopMaxMinButtonController* get_maxMinButtonController()
		{
			return ((UIShopMaxMinButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_GET_MAXMINBUTTONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_ShopInfo(::MX::GameLogic::DBModel::ShopInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_SET_SHOPINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OpenPopup(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_AP_OPENPOPUP_OFFSET))(arg, nullptr);
		}

	};

