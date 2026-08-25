#pragma once
#include "unitysdk.h"

class ShopTabController;
class ShopSubCategoryTabController;
namespace UnityEngine { class GameObject; }
class UIScrollView;
class UIGrid;
class MXToggle;
class MXButton;
class SpineChatDialogContainer;
class UIShopContent;
namespace FlatData { class ShopGroupType; }
namespace FlatData { class ShopCategoryType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class TooltipTargetParcelTracker;

#define UISHOP_ONREFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAA2F90)
#define UISHOP_ONCHANGEDSUBCATEGORYTAB_OFFSET UNITYSDK_OFFSET(0xAA35B0)
#define UISHOP_HANDLESHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAA4D60)
#define UISHOP_ONNEXTREFRESHDATEARRIVED_OFFSET UNITYSDK_OFFSET(0xAA50F0)
#define UISHOP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xAA5320)
#define UISHOP_HANDLESHOPBUYELIGMARESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAA53B0)
#define UISHOP_ONCHANGEDSHOPTAB_OFFSET UNITYSDK_OFFSET(0xAA55B0)
#define UISHOP_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAA5CB0)
#define UISHOP___N__0_OFFSET UNITYSDK_OFFSET(0xAA5EB0)
#define UISHOP_SELECTCATEGORY_OFFSET UNITYSDK_OFFSET(0xAA5EC0)
#define UISHOP_HANDLESHOPLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAA6150)
#define UISHOP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAA7350)
#define UISHOP_ONCLICKGEMSHOPBUTTON_OFFSET UNITYSDK_OFFSET(0xAA75E0)
#define UISHOP_HANDLESHOPREFRESHRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAA7690)
#define UISHOP_AWAKE_OFFSET UNITYSDK_OFFSET(0xAA7810)
#define UISHOP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAA7DC0)
#define UISHOP_SETTABSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0xAA5C00)
#define UISHOP_ONOPENED_OFFSET UNITYSDK_OFFSET(0xAA80B0)
#define UISHOP_.CTOR_OFFSET UNITYSDK_OFFSET(0xAA84A0)

	inline static constexpr unsigned int UIShop_TypeDefinitionIndex = 7977;

	class UIShop : public Il2CppObject
	{
	public:
		ShopTabController* shopTabController; // 0xD8
		ShopSubCategoryTabController* shopSubCategoryTabController; // 0xE0
		::UnityEngine::GameObject* ScrollDefaultBG; // 0xE8
		UIScrollView* tabScrollView; // 0xF0
		UIGrid* tabGrid; // 0xF8
		MXToggle* shopTabPrefab; // 0x100
		MXButton* gemShopButton; // 0x108
		SpineChatDialogContainer* spineChatDialogContainer; // 0x110
		UIShopContent* shopContent; // 0x118
		Il2CppObject* shopInfoDict; // 0x120
		Il2CppObject* shopTabGroupList; // 0x128
		::FlatData::ShopGroupType* currentShopGroupType; // 0x130
		::FlatData::ShopCategoryType* currentShopSubCategoryType; // 0x134

		::System::Void OnRefreshButtonClicked(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_ONREFRESHBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangedSubCategoryTab(::System::Boolean arg, ::FlatData::ShopCategoryType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_ONCHANGEDSUBCATEGORYTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleShopBuyRefreshMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_HANDLESHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNextRefreshDateArrived(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_ONNEXTREFRESHDATEARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopBuyEligmaResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_HANDLESHOPBUYELIGMARESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangedShopTab(::System::Boolean arg, ::FlatData::ShopGroupType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_ONCHANGEDSHOPTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP___N__0_OFFSET))(nullptr);
		}

		::System::Void SelectCategory(::FlatData::ShopCategoryType* arg, TooltipTargetParcelTracker* arg2)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_SELECTCATEGORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleShopListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_HANDLESHOPLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickGemShopButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_ONCLICKGEMSHOPBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopRefreshResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_HANDLESHOPREFRESHRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetTabScrollPosition(::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_SETTABSCROLLPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_.CTOR_OFFSET))(nullptr);
		}

	};

