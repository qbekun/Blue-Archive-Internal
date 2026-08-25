#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITable;
class UIScrollView;
class UIShopSlot_Package;
class UIShopSlot_Single;
class UILabel;
class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UISHOP_POPUP_BUY_ITEMSET_SETDATA_OFFSET UNITYSDK_OFFSET(0xAC1830)
#define UISHOP_POPUP_BUY_ITEMSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAC24E0)
#define UISHOP_POPUP_BUY_ITEMSET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAC25E0)
#define UISHOP_POPUP_BUY_ITEMSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xAC2760)
#define UISHOP_POPUP_BUY_ITEMSET_ONOPENED_OFFSET UNITYSDK_OFFSET(0xAC08F0)
#define UISHOP_POPUP_BUY_ITEMSET_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET UNITYSDK_OFFSET(0xAC2830)
#define UISHOP_POPUP_BUY_ITEMSET_SETVALUE_OFFSET UNITYSDK_OFFSET(0xAC2190)

	inline static constexpr unsigned int UIShop_Popup_Buy_ItemSet_TypeDefinitionIndex = 8033;

	class UIShop_Popup_Buy_ItemSet : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* packageListObj; // 0x18
		UITable* packageTable; // 0x20
		UIScrollView* packageTableScrollView; // 0x28
		::UnityEngine::GameObject* singleListObj; // 0x30
		UITable* singleTable; // 0x38
		UIScrollView* singleTableScrollView; // 0x40
		UIShopSlot_Package* shopSlotPackageItemPrefab; // 0x48
		UIShopSlot_Single* shopSlotSingleItemPerfab; // 0x50
		UILabel* hasValueLabel; // 0x58
		UILabel* consumeValueLabel; // 0x60
		UISprite* inventoryIconSprite; // 0x68
		UISprite* consumeIconSprite; // 0x70
		Il2CppObject* packageItems; // 0x78
		Il2CppObject* singleItems; // 0x80

		::System::Void SetData(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ITEMSET_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ITEMSET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ITEMSET_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ITEMSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ITEMSET_ONOPENED_OFFSET))(nullptr);
		}

		::System::Boolean AlignScrollViewOnClickParcel(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ITEMSET_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ITEMSET_SETVALUE_OFFSET))(arg, nullptr);
		}

	};

