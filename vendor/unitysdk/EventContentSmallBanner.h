#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data { class EventContentCollectionInfo; }
class UIEventShop;
class UIEventPreviewPopup;
class UISeasonalEvent;
namespace MX::NetworkProtocol { class NotificationEventContentReddotResponse; }
class UIEventLobby;
class UISpecialOperationLobby;
class UIEventMission;

#define EVENTCONTENTSMALLBANNER_GETBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x263EB30)
#define EVENTCONTENTSMALLBANNER__SETREDDOTENABLED_B__9_2_OFFSET UNITYSDK_OFFSET(0x263EC30)
#define EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_10_OFFSET UNITYSDK_OFFSET(0x263EC70)
#define EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_0_OFFSET UNITYSDK_OFFSET(0x263ED20)
#define EVENTCONTENTSMALLBANNER_SETCARDGAMEREDDOTDATA_OFFSET UNITYSDK_OFFSET(0x263EDD0)
#define EVENTCONTENTSMALLBANNER_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x263F0D0)
#define EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_6_OFFSET UNITYSDK_OFFSET(0x263F0E0)
#define EVENTCONTENTSMALLBANNER__SETREDDOTENABLED_B__9_1_OFFSET UNITYSDK_OFFSET(0x263F190)
#define EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_2_OFFSET UNITYSDK_OFFSET(0x263F1C0)
#define EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_4_OFFSET UNITYSDK_OFFSET(0x263F290)
#define EVENTCONTENTSMALLBANNER_SETREDDOTENABLED_OFFSET UNITYSDK_OFFSET(0x263F5D0)
#define EVENTCONTENTSMALLBANNER_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x26400B0)
#define EVENTCONTENTSMALLBANNER_ONCLICKBANNER_OFFSET UNITYSDK_OFFSET(0x26400C0)
#define EVENTCONTENTSMALLBANNER_ISACTIVATEDBANNER_OFFSET UNITYSDK_OFFSET(0x2640A50)
#define EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_7_OFFSET UNITYSDK_OFFSET(0x2640AF0)
#define EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_1_OFFSET UNITYSDK_OFFSET(0x2640BA0)
#define EVENTCONTENTSMALLBANNER_CHECKSPOILERPOPUP_OFFSET UNITYSDK_OFFSET(0x2640800)
#define EVENTCONTENTSMALLBANNER__SETREDDOTENABLED_G__ACTIVATEREDDOT|9_0_OFFSET UNITYSDK_OFFSET(0x2640020)
#define EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_5_OFFSET UNITYSDK_OFFSET(0x2640C80)
#define EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_9_OFFSET UNITYSDK_OFFSET(0x2640D30)
#define EVENTCONTENTSMALLBANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2640DE0)

	inline static constexpr unsigned int EventContentSmallBanner_TypeDefinitionIndex = 6600;

	class EventContentSmallBanner : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* _SeasonInfo_k__BackingField; // 0x30

		::System::String* GetBannerImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER_GETBANNERIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Boolean _SetReddotEnabled_b__9_2(::MX::Data::EventContentCollectionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__SETREDDOTENABLED_B__9_2_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__7_10(UIEventShop* arg)
		{
			((::System::Void(*)(UIEventShop*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_10_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__7_0(UIEventPreviewPopup* arg)
		{
			((::System::Void(*)(UIEventPreviewPopup*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetCardGameReddotData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER_SETCARDGAMEREDDOTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__7_6(UISeasonalEvent* arg)
		{
			((::System::Void(*)(UISeasonalEvent*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_6_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetReddotEnabled_b__9_1(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__SETREDDOTENABLED_B__9_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__7_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_2_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__7_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_4_OFFSET))(nullptr);
		}

		::System::Void SetReddotEnabled(::MX::NetworkProtocol::NotificationEventContentReddotResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::NotificationEventContentReddotResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER_SETREDDOTENABLED_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER_ONCLICKBANNER_OFFSET))(nullptr);
		}

		::System::Boolean IsActivatedBanner(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER_ISACTIVATEDBANNER_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__7_7(UIEventLobby* arg)
		{
			((::System::Void(*)(UIEventLobby*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_7_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__7_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_1_OFFSET))(nullptr);
		}

		::System::Void CheckSpoilerPopup(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER_CHECKSPOILERPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _SetReddotEnabled_g__ActivateReddot|9_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__SETREDDOTENABLED_G__ACTIVATEREDDOT|9_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__7_5(UISpecialOperationLobby* arg)
		{
			((::System::Void(*)(UISpecialOperationLobby*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_5_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__7_9(UIEventMission* arg)
		{
			((::System::Void(*)(UIEventMission*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER__ONCLICKBANNER_B__7_9_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSMALLBANNER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

