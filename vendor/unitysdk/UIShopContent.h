#pragma once
#include "unitysdk.h"

class UIShopResource;
class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXToggle;
class UITable;
namespace UnityEngine { class Transform; }
class UIShopContent_RefreshBar;
class UIShopContent_BuyAllBar;
class UIShopListElementGroupScrollViewController;
namespace MX::GameLogic::DBModel { class ShopInfoDB; }
class TooltipTargetParcelTracker;
namespace FlatData { class ShopCategoryType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class ShopProductDB; }

#define UISHOPCONTENT_WAITANDAUTOREFRESH_OFFSET UNITYSDK_OFFSET(0xAA97B0)
#define UISHOPCONTENT_HANDLESHOPBUYELIGMARESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAA9850)
#define UISHOPCONTENT_ONCLICKFILTERBUTTON_OFFSET UNITYSDK_OFFSET(0xAA9950)
#define UISHOPCONTENT_REMOVE_REFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAA9D00)
#define UISHOPCONTENT_ONSELECTALLTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0xAA9DA0)
#define UISHOPCONTENT_OPENPURCHASEGOODSPOPUP_OFFSET UNITYSDK_OFFSET(0xAAA270)
#define UISHOPCONTENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAAACB0)
#define UISHOPCONTENT_ADD_NEXTREFRESHDATEARRIVED_OFFSET UNITYSDK_OFFSET(0xAA7D20)
#define UISHOPCONTENT_SETALLSELECTBOXSTATE_OFFSET UNITYSDK_OFFSET(0xAA9DB0)
#define UISHOPCONTENT_APPLYFILTERSORT_OFFSET UNITYSDK_OFFSET(0xAAB890)
#define UISHOPCONTENT_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xAA9900)
#define UISHOPCONTENT_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAABEC0)
#define UISHOPCONTENT_ONMASTERCOINSTATEPOPUPBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAAC250)
#define UISHOPCONTENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xAAC2E0)
#define UISHOPCONTENT_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0xAA39A0)
#define UISHOPCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAADD20)
#define UISHOPCONTENT_ONBUYALLBARBUYALLBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAADDA0)
#define UISHOPCONTENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xAA3720)
#define UISHOPCONTENT_GET_HASTOTRACETOOLTIP_OFFSET UNITYSDK_OFFSET(0xAADD00)
#define UISHOPCONTENT_ONREFRESHBARREFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAAEE20)
#define UISHOPCONTENT_ONSELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAAB020)
#define UISHOPCONTENT_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xAAEFB0)
#define UISHOPCONTENT_HANDLERESETABLECONTENTRESPONSE_OFFSET UNITYSDK_OFFSET(0xAAEFC0)
#define UISHOPCONTENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAAF2C0)
#define UISHOPCONTENT_ADD_REFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAA7C80)
#define UISHOPCONTENT_HANDLESHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAAF5C0)
#define UISHOPCONTENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xAAF9F0)
#define UISHOPCONTENT_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xAAFB90)
#define UISHOPCONTENT_ONBUYALLBARCANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAAFBB0)
#define UISHOPCONTENT_REMOVE_NEXTREFRESHDATEARRIVED_OFFSET UNITYSDK_OFFSET(0xAAFBC0)
#define UISHOPCONTENT_DISABLESELECTALLTOGGLE_OFFSET UNITYSDK_OFFSET(0xAAC180)

	inline static constexpr unsigned int UIShopContent_TypeDefinitionIndex = 7984;

	class UIShopContent : public Il2CppObject
	{
	public:
		UIShopResource* shopResource; // 0x18
		MXButton* filterButton; // 0x20
		::UnityEngine::GameObject* filterMarkerOn; // 0x28
		::UnityEngine::GameObject* filterMarkerOff; // 0x30
		UILabel* sortLabelType1; // 0x38
		UILabel* sortLabelType2; // 0x40
		::UnityEngine::GameObject* selectAllToggleRoot; // 0x48
		MXToggle* selectAllToggle; // 0x50
		::UnityEngine::GameObject* selectAllToggleDisableRoot; // 0x58
		UITable* resourceTable; // 0x60
		::UnityEngine::Transform* bottomBarRoot; // 0x68
		UIShopContent_RefreshBar* refreshBar; // 0x70
		UIShopContent_BuyAllBar* buyAllBar; // 0x78
		UIShopListElementGroupScrollViewController* scrollViewController; // 0x80
		::UnityEngine::GameObject* shopEmptyLabel; // 0x88
		::MX::GameLogic::DBModel::ShopInfoDB* shopInfo; // 0x90
		Il2CppObject* availableFilters; // 0x98
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0xA0
		Il2CppObject* RefreshButtonClicked; // 0xA8
		Il2CppObject* NextRefreshDateArrived; // 0xB0

		::System::Collections::IEnumerator* WaitAndAutoRefresh(::FlatData::ShopCategoryType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_WAITANDAUTOREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleShopBuyEligmaResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_HANDLESHOPBUYELIGMARESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickFilterButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ONCLICKFILTERBUTTON_OFFSET))(nullptr);
		}

		::System::Void remove_RefreshButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REMOVE_REFRESHBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelectAllToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ONSELECTALLTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OpenPurchaseGoodsPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_OPENPURCHASEGOODSPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void add_NextRefreshDateArrived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ADD_NEXTREFRESHDATEARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Void SetAllSelectBoxState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_SETALLSELECTBOXSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyFilterSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_APPLYFILTERSORT_OFFSET))(nullptr);
		}

		::System::Void RefreshListItem(::MX::GameLogic::DBModel::ShopProductDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHLISTITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnMasterCoinStatePopupButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ONMASTERCOINSTATEPOPUPBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBuyAllBarBuyAllButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ONBUYALLBARBUYALLBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ShopInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasToTraceTooltip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_GET_HASTOTRACETOOLTIP_OFFSET))(nullptr);
		}

		::System::Void OnRefreshBarRefreshButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ONREFRESHBARREFRESHBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnSelectBoxStateChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ONSELECTBOXSTATECHANGED_OFFSET))(nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Boolean HandleResetableContentResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_HANDLERESETABLECONTENTRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void add_RefreshButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ADD_REFRESHBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleShopBuyRefreshMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_HANDLESHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Void OnBuyAllBarCancelButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_ONBUYALLBARCANCELBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void remove_NextRefreshDateArrived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REMOVE_NEXTREFRESHDATEARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Void DisableSelectAllToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_DISABLESELECTALLTOGGLE_OFFSET))(arg, nullptr);
		}

	};

