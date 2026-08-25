#pragma once
#include "unitysdk.h"

class CategoryShopParcelDisplayType;
namespace FlatData { class ShopCategoryType; }
class UISprite;
class UILabel;
class MXButton;
class UICategoryShopPopup;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICATEGORYSHOPBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA83310)
#define UICATEGORYSHOPBUTTON_SETSHOPINFOS_OFFSET UNITYSDK_OFFSET(0xA83420)
#define UICATEGORYSHOPBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA839F0)
#define UICATEGORYSHOPBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xA83A00)
#define UICATEGORYSHOPBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA83B70)
#define UICATEGORYSHOPBUTTON__ONCLICKSHOP_B__13_0_OFFSET UNITYSDK_OFFSET(0xA83CF0)
#define UICATEGORYSHOPBUTTON_GETDISPLAYEDPARCEL_OFFSET UNITYSDK_OFFSET(0xA83880)
#define UICATEGORYSHOPBUTTON_ONCLICKSHOP_OFFSET UNITYSDK_OFFSET(0xA83EB0)
#define UICATEGORYSHOPBUTTON_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA83F90)

	inline static constexpr unsigned int UICategoryShopButton_TypeDefinitionIndex = 7903;

	class UICategoryShopButton : public Il2CppObject
	{
	public:
		::System::Boolean useShopApPopup; // 0x18
		CategoryShopParcelDisplayType* displayType; // 0x1C
		::FlatData::ShopCategoryType* categoryType; // 0x20
		UISprite* parcelIcon; // 0x28
		UILabel* currentParcelAmount; // 0x30
		MXButton* shopButton; // 0x38

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetShopInfos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPBUTTON_SETSHOPINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPBUTTON_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void _OnClickShop_b__13_0(UICategoryShopPopup* arg)
		{
			((::System::Void(*)(UICategoryShopPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPBUTTON__ONCLICKSHOP_B__13_0_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetDisplayedParcel()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPBUTTON_GETDISPLAYEDPARCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickShop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPBUTTON_ONCLICKSHOP_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPBUTTON_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

