#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UISprite;
class UIShopContent;
namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace FlatData { class ShopCategoryType; }
class TooltipTargetParcelTracker;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICATEGORYSHOPPOPUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA83FA0)
#define UICATEGORYSHOPPOPUP__AWAKE_B__10_0_OFFSET UNITYSDK_OFFSET(0xA83FD0)
#define UICATEGORYSHOPPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA84060)
#define UICATEGORYSHOPPOPUP_TRYSETCURRENTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xA84200)
#define UICATEGORYSHOPPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA84660)
#define UICATEGORYSHOPPOPUP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xA84670)
#define UICATEGORYSHOPPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xA83E30)
#define UICATEGORYSHOPPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA84700)
#define UICATEGORYSHOPPOPUP_ONNEXTREFRESHDATEARRIVED_OFFSET UNITYSDK_OFFSET(0xA84A60)
#define UICATEGORYSHOPPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xA84C90)
#define UICATEGORYSHOPPOPUP_SETTARGET_OFFSET UNITYSDK_OFFSET(0xA84CF0)
#define UICATEGORYSHOPPOPUP_HANDLESHOPLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA84D20)
#define UICATEGORYSHOPPOPUP___N__0_OFFSET UNITYSDK_OFFSET(0xA84F30)
#define UICATEGORYSHOPPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA84F40)
#define UICATEGORYSHOPPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA85050)
#define UICATEGORYSHOPPOPUP_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA851C0)

	inline static constexpr unsigned int UICategoryShopPopup_TypeDefinitionIndex = 7906;

	class UICategoryShopPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* title; // 0xE0
		UISprite* parcelIcon; // 0xE8
		UILabel* parcelName; // 0xF0
		UILabel* currentParcelAmount; // 0xF8
		UIShopContent* shopContent; // 0x100
		::MX::GameLogic::DBModel::ShopInfoDB* shopInfo; // 0x108
		Il2CppObject* openConditionState; // 0x110
		::System::Action* closeCallback; // 0x118
		Il2CppObject* shopCategoryType; // 0x120

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__10_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP__AWAKE_B__10_0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void TrySetCurrentParcelAmount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_TRYSETCURRENTPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::ShopCategoryType* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNextRefreshDateArrived(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_ONNEXTREFRESHDATEARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetTarget(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_SETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleShopListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_HANDLESHOPLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP___N__0_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICATEGORYSHOPPOPUP_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

