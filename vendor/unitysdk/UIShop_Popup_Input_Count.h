#pragma once
#include "unitysdk.h"

class UIShopMaxMinButtonController;
class UITexture;
namespace UnityEngine { class GameObject; }
class UISprite;
class UILabel;
class TooltipTargetParcelDisplay;
namespace UnityEngine { class Transform; }
class ButtonActivator;
namespace FlatData { class ShopCategoryType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class ShopProductDB; }
class TooltipTargetParcelTracker;

#define UISHOP_POPUP_INPUT_COUNT_AWAKE_OFFSET UNITYSDK_OFFSET(0xAD1DC0)
#define UISHOP_POPUP_INPUT_COUNT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAD1EF0)
#define UISHOP_POPUP_INPUT_COUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD2170)
#define UISHOP_POPUP_INPUT_COUNT_HANDLESHOPBUYELIGMARESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAD21D0)
#define UISHOP_POPUP_INPUT_COUNT_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAD22A0)
#define UISHOP_POPUP_INPUT_COUNT_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET UNITYSDK_OFFSET(0xAD2370)
#define UISHOP_POPUP_INPUT_COUNT_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xAD2420)
#define UISHOP_POPUP_INPUT_COUNT_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xAD24B0)
#define UISHOP_POPUP_INPUT_COUNT_SETPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0xAD2F80)
#define UISHOP_POPUP_INPUT_COUNT_GETCAUTIONTEXT_OFFSET UNITYSDK_OFFSET(0xAD3210)
#define UISHOP_POPUP_INPUT_COUNT_SETDATA_OFFSET UNITYSDK_OFFSET(0xAD3750)
#define UISHOP_POPUP_INPUT_COUNT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAD55C0)
#define UISHOP_POPUP_INPUT_COUNT_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAD58C0)

	inline static constexpr unsigned int UIShop_Popup_Input_Count_TypeDefinitionIndex = 8061;

	class UIShop_Popup_Input_Count : public Il2CppObject
	{
	public:
		UIShopMaxMinButtonController* maxMinbuttonController; // 0xD8
		UITexture* itemIconTexture; // 0xE0
		::UnityEngine::GameObject* interactionFurniture; // 0xE8
		UISprite* itemRarityBg; // 0xF0
		UILabel* itemCountLabel; // 0xF8
		UILabel* itemNameLabel; // 0x100
		UILabel* itemHasCountLabel; // 0x108
		UISprite* pricePerEachIcon; // 0x110
		UILabel* pricePerEachLabel; // 0x118
		UISprite* totalPriceIcon; // 0x120
		UILabel* totalPriceLabel; // 0x128
		TooltipTargetParcelDisplay* tooltipTargetParcelDisplay; // 0x130
		::UnityEngine::Transform* itemInfoDisplay; // 0x138
		ButtonActivator* okButtonType01; // 0x140
		::UnityEngine::GameObject* cautionAnchor; // 0x148
		UILabel* cautionLabel; // 0x150
		::System::Int64 eventContentId; // 0x158
		::System::Int64 shopUniqueId; // 0x160
		::FlatData::ShopCategoryType* shopCategoryType; // 0x168
		::System::Boolean isRefreshMerchandise; // 0x16C
		::System::Int64 goodsUniqueId; // 0x170
		::System::Int64 characterUniqueId; // 0x178
		Il2CppObject* consumeParcel; // 0x180
		::System::Int64 pricePerEach; // 0x190

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopBuyEligmaResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_HANDLESHOPBUYELIGMARESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleClickMaxMinButtonMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetPopupType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_SETPOPUPTYPE_OFFSET))(nullptr);
		}

		::System::String* GetCautionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_GETCAUTIONTEXT_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ShopProductDB* arg, ::System::Boolean arg2, ::System::Int64 arg3, ::System::Int64 arg4, TooltipTargetParcelTracker* arg5)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductDB*, ::System::Boolean, ::System::Int64, ::System::Int64, TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_INPUT_COUNT_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

