#pragma once
#include "unitysdk.h"

class UIShopListElement;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class UIScrollView;
class UIGrid;
class SpineChatDialogContainerEvent;
namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace FlatData { class ShopCategoryType; }
namespace MX::GameLogic::DBModel { class ShopProductDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEVENTSHOPPRODUCTLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C00E0)
#define UIEVENTSHOPPRODUCTLIST_REMOVE_REFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x24C01A0)
#define UIEVENTSHOPPRODUCTLIST_ONCLICKBUYALLCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x24C0240)
#define UIEVENTSHOPPRODUCTLIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24C04A0)
#define UIEVENTSHOPPRODUCTLIST_ADD_NEXTREFRESHDATEARRIVED_OFFSET UNITYSDK_OFFSET(0x24BE9A0)
#define UIEVENTSHOPPRODUCTLIST_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x24BCF10)
#define UIEVENTSHOPPRODUCTLIST_WAITANDAUTOREFRESH_OFFSET UNITYSDK_OFFSET(0x24C0AD0)
#define UIEVENTSHOPPRODUCTLIST_ONCLICKBUYALLCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x24C0B70)
#define UIEVENTSHOPPRODUCTLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x24BCC50)
#define UIEVENTSHOPPRODUCTLIST_ONCLICKREFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x24C0FB0)
#define UIEVENTSHOPPRODUCTLIST_REFRESHREMAINREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x24C06A0)
#define UIEVENTSHOPPRODUCTLIST_UPDATE_OFFSET UNITYSDK_OFFSET(0x24C0FF0)
#define UIEVENTSHOPPRODUCTLIST_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0x24C1120)
#define UIEVENTSHOPPRODUCTLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24C12B0)
#define UIEVENTSHOPPRODUCTLIST_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24C1430)
#define UIEVENTSHOPPRODUCTLIST_REMOVE_NEXTREFRESHDATEARRIVED_OFFSET UNITYSDK_OFFSET(0x24C1AF0)
#define UIEVENTSHOPPRODUCTLIST_ADD_REFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x24BE900)
#define UIEVENTSHOPPRODUCTLIST_RELEASESELECTBOXSTATE_OFFSET UNITYSDK_OFFSET(0x24C0250)
#define UIEVENTSHOPPRODUCTLIST_ONSELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x24C1610)
#define UIEVENTSHOPPRODUCTLIST_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24C1B90)
#define UIEVENTSHOPPRODUCTLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x24C1DB0)

	inline static constexpr unsigned int UIEventShopProductList_TypeDefinitionIndex = 5893;

	class UIEventShopProductList : public Il2CppObject
	{
	public:
		UIShopListElement* shopListElementPrefab; // 0x18
		::Il2CppArray<::System::Object*>* itemResoruceDisplay; // 0x20
		::UnityEngine::GameObject* refreshBarRoot; // 0x28
		UILabel* remainRefreshTimeLabel; // 0x30
		MXButton* refreshButton; // 0x38
		::UnityEngine::GameObject* buyAllBarRoot; // 0x40
		UILabel* selectedElementCountLabel; // 0x48
		MXButton* buyAllConfirmButton; // 0x50
		::UnityEngine::GameObject* buyAllConfirmButtonDisabledRoot; // 0x58
		MXButton* buyAllCancelButton; // 0x60
		UIScrollView* scrollView; // 0x68
		UIGrid* grid; // 0x70
		SpineChatDialogContainerEvent* spineChatDialogContainerEvent; // 0x78
		::MX::GameLogic::DBModel::ShopInfoDB* shopInfo; // 0x80
		Il2CppObject* expiredTo; // 0x88
		Il2CppObject* lastUpdateTime; // 0x98
		Il2CppObject* cachedShopListElementList; // 0xA8
		Il2CppObject* shopListElementList; // 0xB0
		Il2CppObject* RefreshButtonClicked; // 0xB8
		Il2CppObject* NextRefreshDateArrived; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void remove_RefreshButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_REMOVE_REFRESHBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBuyAllCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_ONCLICKBUYALLCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void add_NextRefreshDateArrived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_ADD_NEXTREFRESHDATEARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitAndAutoRefresh(::FlatData::ShopCategoryType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_WAITANDAUTOREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBuyAllConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_ONCLICKBUYALLCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ShopInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRefreshButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_ONCLICKREFRESHBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean RefreshRemainRefreshTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_REFRESHREMAINREFRESHTIME_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_UPDATE_OFFSET))(nullptr);
		}

		::System::Void RefreshListItem(::MX::GameLogic::DBModel::ShopProductDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_REFRESHLISTITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_NextRefreshDateArrived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_REMOVE_NEXTREFRESHDATEARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Void add_RefreshButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_ADD_REFRESHBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseSelectBoxState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_RELEASESELECTBOXSTATE_OFFSET))(nullptr);
		}

		::System::Void OnSelectBoxStateChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_ONSELECTBOXSTATECHANGED_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentShopBuyRefreshMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPPRODUCTLIST_AWAKE_OFFSET))(nullptr);
		}

	};

