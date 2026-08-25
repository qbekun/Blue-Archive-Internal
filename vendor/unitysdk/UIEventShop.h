#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class EventShopTabController;
class UIEventShopProductList;
namespace UnityEngine { class Transform; }
class SpineChatDialogContainerEvent;
namespace MX::Data { class EventContentSeasonInfo; }
namespace FlatData { class ShopCategoryType; }
namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class BGMPlayInfo; }

#define UIEVENTSHOP___N__0_OFFSET UNITYSDK_OFFSET(0x24BBAE0)
#define UIEVENTSHOP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24BBAF0)
#define UIEVENTSHOP_ONREFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x24BBB80)
#define UIEVENTSHOP_SELECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x24BC1A0)
#define UIEVENTSHOP_SETDATA_OFFSET UNITYSDK_OFFSET(0x24BC2C0)
#define UIEVENTSHOP_SETINITIALTABONOPENED_OFFSET UNITYSDK_OFFSET(0x24BC2E0)
#define UIEVENTSHOP_ONNEXTREFRESHDATEARRIVED_OFFSET UNITYSDK_OFFSET(0x24BC570)
#define UIEVENTSHOP_GETACTIVESHOPPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x24BC7C0)
#define UIEVENTSHOP_HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24BC8B0)
#define UIEVENTSHOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24BD8E0)
#define UIEVENTSHOP_HANDLEEVENTCONTENTSHOPREFRESHRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24BD990)
#define UIEVENTSHOP_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24BDA90)
#define UIEVENTSHOP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24BDE20)
#define UIEVENTSHOP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24BDE70)
#define UIEVENTSHOP_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x24BE080)
#define UIEVENTSHOP_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x24BE0B0)
#define UIEVENTSHOP_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24BE0D0)
#define UIEVENTSHOP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24BE2D0)
#define UIEVENTSHOP_ONCHANGEDEVENTSHOPTAB_OFFSET UNITYSDK_OFFSET(0x24BEA40)
#define UIEVENTSHOP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24BEB80)

	inline static constexpr unsigned int UIEventShop_TypeDefinitionIndex = 5888;

	class UIEventShop : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		UITexture* bgTexture; // 0xE0
		EventShopTabController* eventShopTab; // 0xE8
		UIEventShopProductList* refreshableShopProductList; // 0xF0
		UIEventShopProductList* nonRefreshableShopProductList; // 0xF8
		::System::String* defaultBgImagePath; // 0x100
		::UnityEngine::Transform* spineOffsetTransform; // 0x108
		::UnityEngine::Transform* dialogOffsetTransform; // 0x110
		SpineChatDialogContainerEvent* spineChatContainerEvent; // 0x118
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x120
		Il2CppObject* shopInfoDict; // 0x128

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnRefreshButtonClicked(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_ONREFRESHBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void SelectCategory(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_SELECTCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetInitialTabOnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_SETINITIALTABONOPENED_OFFSET))(nullptr);
		}

		::System::Void OnNextRefreshDateArrived(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_ONNEXTREFRESHDATEARRIVED_OFFSET))(arg, nullptr);
		}

		UIEventShopProductList* GetActiveShopProductList(::MX::GameLogic::DBModel::ShopInfoDB* arg)
		{
			return ((UIEventShopProductList*(*)(::MX::GameLogic::DBModel::ShopInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_GETACTIVESHOPPRODUCTLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentShopListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentShopRefreshResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_HANDLEEVENTCONTENTSHOPREFRESHRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentShopBuyRefreshMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_ONENABLE_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnChangedEventShopTab(::System::Boolean arg, ::FlatData::ShopCategoryType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_ONCHANGEDEVENTSHOPTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOP_ONDISABLE_OFFSET))(nullptr);
		}

	};

