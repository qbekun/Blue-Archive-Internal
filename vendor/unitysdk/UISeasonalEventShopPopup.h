#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIEventShopProductList;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class ShopCategoryType; }
namespace MX::Data::Excel { class EventContentShopInfoExcel; }

#define UISEASONALEVENTSHOPPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xA697D0)
#define UISEASONALEVENTSHOPPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA697F0)
#define UISEASONALEVENTSHOPPOPUP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xA69990)
#define UISEASONALEVENTSHOPPOPUP_ONCLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xA69A20)
#define UISEASONALEVENTSHOPPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA69AB0)
#define UISEASONALEVENTSHOPPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA69AC0)
#define UISEASONALEVENTSHOPPOPUP_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA69C00)
#define UISEASONALEVENTSHOPPOPUP_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA69E20)
#define UISEASONALEVENTSHOPPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA6A240)
#define UISEASONALEVENTSHOPPOPUP_HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA6A3D0)
#define UISEASONALEVENTSHOPPOPUP___N__0_OFFSET UNITYSDK_OFFSET(0xA6A5F0)
#define UISEASONALEVENTSHOPPOPUP_ONNEXTREFRESHDATEARRIVED_OFFSET UNITYSDK_OFFSET(0xA6A600)
#define UISEASONALEVENTSHOPPOPUP__CO_LOADING_B__13_0_OFFSET UNITYSDK_OFFSET(0xA6A830)
#define UISEASONALEVENTSHOPPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA6A870)

	inline static constexpr unsigned int UISeasonalEventShopPopup_TypeDefinitionIndex = 7836;

	class UISeasonalEventShopPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* parcelName; // 0xE0
		UIEventShopProductList* nonRefreshableShopProductList; // 0xE8
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0xF0
		::MX::GameLogic::DBModel::ShopInfoDB* shopInfo; // 0xF8

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnCloseButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_ONCLOSEBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentShopBuyRefreshMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentShopListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP___N__0_OFFSET))(nullptr);
		}

		::System::Void OnNextRefreshDateArrived(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_ONNEXTREFRESHDATEARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Co_Loading_b__13_0(::MX::Data::Excel::EventContentShopInfoExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::EventContentShopInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP__CO_LOADING_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENTSHOPPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

	};

