#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UIEventLobbyQuickButton;
class UIEventMissionTab;
class UILabel;
class UIMissionScrollController;
class ButtonActivator;
namespace MX::Data { class EventContentSeasonInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class MissionCategory; }
namespace MX::Data { class BGMPlayInfo; }
class UIEventPlayGuide;

#define UISEASONALEVENT_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA67030)
#define UISEASONALEVENT_TRYREFRESHEVENTMEETUPTICKET_OFFSET UNITYSDK_OFFSET(0xA67170)
#define UISEASONALEVENT_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xA674E0)
#define UISEASONALEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA67580)
#define UISEASONALEVENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xA67590)
#define UISEASONALEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA675B0)
#define UISEASONALEVENT_ONPLAYGUIDEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xA679F0)
#define UISEASONALEVENT___N__0_OFFSET UNITYSDK_OFFSET(0xA67AC0)
#define UISEASONALEVENT_REFRESHMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA67130)
#define UISEASONALEVENT_REFRESHMISSIONLISTITEMS_OFFSET UNITYSDK_OFFSET(0xA67AD0)
#define UISEASONALEVENT_ONMISSIONTABSWITCHED_OFFSET UNITYSDK_OFFSET(0xA67D70)
#define UISEASONALEVENT_ONBACKBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xA67DF0)
#define UISEASONALEVENT_RESETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA67DB0)
#define UISEASONALEVENT_ONMINISHOPBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xA67E10)
#define UISEASONALEVENT_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0xA67FA0)
#define UISEASONALEVENT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA67FD0)
#define UISEASONALEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA687B0)
#define UISEASONALEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA68AA0)
#define UISEASONALEVENT_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA68D30)
#define UISEASONALEVENT_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA68DC0)
#define UISEASONALEVENT_ONCLICKRECEIVEALLBUTTONACTIVATOR_OFFSET UNITYSDK_OFFSET(0xA68E50)
#define UISEASONALEVENT__ONPLAYGUIDEBUTTONCLICKED_B__13_0_OFFSET UNITYSDK_OFFSET(0xA68F10)
#define UISEASONALEVENT_REFRESHEVENTMEETUPTICKET_OFFSET UNITYSDK_OFFSET(0xA68FD0)
#define UISEASONALEVENT_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA69000)
#define UISEASONALEVENT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xA69100)

	inline static constexpr unsigned int UISeasonalEvent_TypeDefinitionIndex = 7832;

	class UISeasonalEvent : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		MXButton* playGuideButton; // 0xE0
		UITexture* bannerTexture; // 0xE8
		UIEventLobbyQuickButton* quickButton; // 0xF0
		MXButton* miniShopButton; // 0xF8
		UIEventMissionTab* missionTab; // 0x100
		UILabel* remainDateLabel; // 0x108
		UIMissionScrollController* missionScrollController; // 0x110
		UILabel* periodLabel; // 0x118
		ButtonActivator* receiveAllButtonActivator; // 0x120
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x128

		::System::Boolean HandleMissionMultipleRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryRefreshEventMeetupTicket(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_TRYREFRESHEVENTMEETUPTICKET_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsActivated(::MX::Data::EventContentSeasonInfo* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_ISACTIVATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnPlayGuideButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_ONPLAYGUIDEBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT___N__0_OFFSET))(nullptr);
		}

		::System::Void RefreshMissionList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_REFRESHMISSIONLIST_OFFSET))(nullptr);
		}

		::System::Void RefreshMissionListItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_REFRESHMISSIONLISTITEMS_OFFSET))(nullptr);
		}

		::System::Void OnMissionTabSwitched(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_ONMISSIONTABSWITCHED_OFFSET))(arg, nullptr);
		}

		::System::Void OnBackButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_ONBACKBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void ResetMissionList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_RESETMISSIONLIST_OFFSET))(nullptr);
		}

		::System::Void OnMiniShopButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_ONMINISHOPBUTTONCLICKED_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentShopBuyRefreshMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_HANDLEEVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickReceiveAllButtonActivator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_ONCLICKRECEIVEALLBUTTONACTIVATOR_OFFSET))(nullptr);
		}

		::System::Void _OnPlayGuideButtonClicked_b__13_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT__ONPLAYGUIDEBUTTONCLICKED_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshEventMeetupTicket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_REFRESHEVENTMEETUPTICKET_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALEVENT_CO_LOADING_OFFSET))(nullptr);
		}

	};

