#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
class MXButton;
class UISprite;
class ShopListElementData;
namespace MX::GameLogic::DBModel { class ShopProductDB; }
class TooltipTargetParcelTracker;
class UIPopup_System;

#define UISHOPLISTELEMENT_GET_DATA_OFFSET UNITYSDK_OFFSET(0xAB18F0)
#define UISHOPLISTELEMENT_SET_DATA_OFFSET UNITYSDK_OFFSET(0xAB1900)
#define UISHOPLISTELEMENT_ADD_SELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAB1920)
#define UISHOPLISTELEMENT_REMOVE_SELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAB19C0)
#define UISHOPLISTELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xAB1A60)
#define UISHOPLISTELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xAB1E50)
#define UISHOPLISTELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xAB1EC0)
#define UISHOPLISTELEMENT_SETSELECTBOXSTATE_OFFSET UNITYSDK_OFFSET(0xAB3070)
#define UISHOPLISTELEMENT_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0xAB3100)
#define UISHOPLISTELEMENT_ONCLICKSELECTBOXBUTTON_OFFSET UNITYSDK_OFFSET(0xAB3110)
#define UISHOPLISTELEMENT_ONCLICKFURNITUREDETAILBUTTON_OFFSET UNITYSDK_OFFSET(0xAB31D0)
#define UISHOPLISTELEMENT_PURCHASEWITHINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0xAAAA70)
#define UISHOPLISTELEMENT_PURCHASEWITHOUTINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0xAB38C0)
#define UISHOPLISTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB3D40)
#define UISHOPLISTELEMENT__PURCHASEWITHOUTINPUTCOUNT_B__33_0_OFFSET UNITYSDK_OFFSET(0xAB3D50)
#define UISHOPLISTELEMENT__PURCHASEWITHOUTINPUTCOUNT_G__REQUESTSHOPBUY|33_1_OFFSET UNITYSDK_OFFSET(0xAB39F0)

	inline static constexpr unsigned int UIShopListElement_TypeDefinitionIndex = 7992;

	class UIShopListElement : public Il2CppObject
	{
	public:
		UILabel* DisplayName; // 0x18
		UITexture* DisplayIcon; // 0x20
		::UnityEngine::GameObject* InteractionFurniture; // 0x28
		MXButton* FurnitureDetailButton; // 0x30
		UISprite* CurrencyIcon; // 0x38
		UISprite* RarityBg; // 0x40
		UILabel* PurchaseCountInfo; // 0x48
		UILabel* PurchaseCountResetType; // 0x50
		UILabel* GoodsAmount; // 0x58
		::UnityEngine::GameObject* CooltimeTypeBg; // 0x60
		::UnityEngine::GameObject* CountResetTypeBg; // 0x68
		::UnityEngine::GameObject* Cover; // 0x70
		Il2CppObject* PriceDisplays; // 0x78
		MXButton* Button; // 0x80
		MXButton* SelectBoxButton; // 0x88
		::UnityEngine::GameObject* SelectBoxCheckRoot; // 0x90
		UITexture* displayTagTexture; // 0x98
		ShopListElementData* _Data_k__BackingField; // 0xA0
		::System::Action* SelectBoxStateChanged; // 0xA8

		ShopListElementData* get_Data()
		{
			return ((ShopListElementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(ShopListElementData* arg)
		{
			((::System::Void(*)(ShopListElementData*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_SET_DATA_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectBoxStateChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_ADD_SELECTBOXSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectBoxStateChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_REMOVE_SELECTBOXSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ShopProductDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(ShopListElementData* arg)
		{
			((::System::Void(*)(ShopListElementData*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectBoxState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_SETSELECTBOXSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickSelectBoxButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_ONCLICKSELECTBOXBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickFurnitureDetailButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_ONCLICKFURNITUREDETAILBUTTON_OFFSET))(nullptr);
		}

		::System::Void PurchaseWithInputCount(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_PURCHASEWITHINPUTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void PurchaseWithOutInputCount(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_PURCHASEWITHOUTINPUTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _PurchaseWithOutInputCount_b__33_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT__PURCHASEWITHOUTINPUTCOUNT_B__33_0_OFFSET))(arg, nullptr);
		}

		::System::Void _PurchaseWithOutInputCount_g__RequestShopBuy|33_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT__PURCHASEWITHOUTINPUTCOUNT_G__REQUESTSHOPBUY|33_1_OFFSET))(nullptr);
		}

	};

