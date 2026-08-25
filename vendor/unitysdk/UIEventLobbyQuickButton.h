#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class UISprite;
class OpenConditionButtonController;
namespace MX::Data { class EventContentSeasonInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEVENTLOBBYQUICKBUTTON_REFRESHMINIGAMEDREAMMAKERCOST_OFFSET UNITYSDK_OFFSET(0x24586D0)
#define UIEVENTLOBBYQUICKBUTTON_OPENMEETUPUI_OFFSET UNITYSDK_OFFSET(0x24588C0)
#define UIEVENTLOBBYQUICKBUTTON_OPENWORLDRAIDLOBBY_OFFSET UNITYSDK_OFFSET(0x2458A50)
#define UIEVENTLOBBYQUICKBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2458E60)
#define UIEVENTLOBBYQUICKBUTTON_OPENCOLLECTIONUI_OFFSET UNITYSDK_OFFSET(0x2458E70)
#define UIEVENTLOBBYQUICKBUTTON_OPENCARDGAMELOBBY_OFFSET UNITYSDK_OFFSET(0x2458EA0)
#define UIEVENTLOBBYQUICKBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x2459180)
#define UIEVENTLOBBYQUICKBUTTON_OPENUITBGCAMPAIGN_OFFSET UNITYSDK_OFFSET(0x24592A0)
#define UIEVENTLOBBYQUICKBUTTON_ONCLICKCOLLECTIONBUTTON_OFFSET UNITYSDK_OFFSET(0x24592F0)
#define UIEVENTLOBBYQUICKBUTTON__GETQUICKBUTTONCONTENT_B__23_0_OFFSET UNITYSDK_OFFSET(0x2459450)
#define UIEVENTLOBBYQUICKBUTTON_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x2459480)
#define UIEVENTLOBBYQUICKBUTTON_HANDLENOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24594A0)
#define UIEVENTLOBBYQUICKBUTTON_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x2459670)
#define UIEVENTLOBBYQUICKBUTTON_REFRESHMINIGAMEROADCOST_OFFSET UNITYSDK_OFFSET(0x2459680)
#define UIEVENTLOBBYQUICKBUTTON_ONCLICKSTARTMINIGAMEDEFENSE_OFFSET UNITYSDK_OFFSET(0x24598D0)
#define UIEVENTLOBBYQUICKBUTTON_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2459B30)
#define UIEVENTLOBBYQUICKBUTTON_REFRESHEVENTMEETUPTICKET_OFFSET UNITYSDK_OFFSET(0x245A0B0)
#define UIEVENTLOBBYQUICKBUTTON_COLOADTEXTURES_OFFSET UNITYSDK_OFFSET(0x245A2E0)
#define UIEVENTLOBBYQUICKBUTTON_OPENSPECIALMINIEVENTCOLLECTIONUI_OFFSET UNITYSDK_OFFSET(0x245A390)
#define UIEVENTLOBBYQUICKBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x245A520)
#define UIEVENTLOBBYQUICKBUTTON_REFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x245A6A0)
#define UIEVENTLOBBYQUICKBUTTON_REFRESHMINIGAMESHOOTINGCOST_OFFSET UNITYSDK_OFFSET(0x2459BB0)
#define UIEVENTLOBBYQUICKBUTTON__REFRESHBUTTON_B__25_0_OFFSET UNITYSDK_OFFSET(0x245B5C0)
#define UIEVENTLOBBYQUICKBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x245B7B0)
#define UIEVENTLOBBYQUICKBUTTON_CHECKCLOSETIME_OFFSET UNITYSDK_OFFSET(0x24593B0)
#define UIEVENTLOBBYQUICKBUTTON_ONCLICKSTARTDREAMMAKER_OFFSET UNITYSDK_OFFSET(0x245B9B0)
#define UIEVENTLOBBYQUICKBUTTON_OPENFIELDLOBBY_OFFSET UNITYSDK_OFFSET(0x245BC00)
#define UIEVENTLOBBYQUICKBUTTON_ONCLICKSTARTMINIGAMEROAD_OFFSET UNITYSDK_OFFSET(0x245BCF0)
#define UIEVENTLOBBYQUICKBUTTON__REFRESHBUTTON_B__25_2_OFFSET UNITYSDK_OFFSET(0x245BD10)
#define UIEVENTLOBBYQUICKBUTTON_GETQUICKBUTTONCONTENT_OFFSET UNITYSDK_OFFSET(0x245BD40)
#define UIEVENTLOBBYQUICKBUTTON_GETQUICKBUTTONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x245B550)
#define UIEVENTLOBBYQUICKBUTTON_REFRESHMINIGAMEDEFENSECOST_OFFSET UNITYSDK_OFFSET(0x2459EC0)

	inline static constexpr unsigned int UIEventLobbyQuickButton_TypeDefinitionIndex = 5586;

	class UIEventLobbyQuickButton : public Il2CppObject
	{
	public:
		MXButton* collectionButton; // 0x18
		UITexture* collectionButtonTexture; // 0x20
		UILabel* collectionButtonLabel; // 0x28
		::UnityEngine::GameObject* collectionReddot; // 0x30
		UISprite* reddotSprite; // 0x38
		MXButton* disableButton; // 0x40
		UITexture* disableButtonTexture; // 0x48
		UILabel* disableButtonLabel; // 0x50
		::UnityEngine::GameObject* meetupTicketRoot; // 0x58
		UISprite* meetupTicketIconSprite; // 0x60
		UILabel* meetupTicketCountLabel; // 0x68
		OpenConditionButtonController* OpenConditionController; // 0x70
		Il2CppObject* quickButtonContentType; // 0x78
		::System::Action* collectionButtonDelegate; // 0x80
		::MX::Data::EventContentSeasonInfo* _SeasonInfo_k__BackingField; // 0x88

		::System::Void RefreshMiniGameDreamMakerCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_REFRESHMINIGAMEDREAMMAKERCOST_OFFSET))(nullptr);
		}

		::System::Void OpenMeetupUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_OPENMEETUPUI_OFFSET))(nullptr);
		}

		::System::Void OpenWorldRaidLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_OPENWORLDRAIDLOBBY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OpenCollectionUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_OPENCOLLECTIONUI_OFFSET))(nullptr);
		}

		::System::Void OpenCardGameLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_OPENCARDGAMELOBBY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OpenUITBGCampaign()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_OPENUITBGCAMPAIGN_OFFSET))(nullptr);
		}

		::System::Void OnClickCollectionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_ONCLICKCOLLECTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean _GetQuickButtonContent_b__23_0(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON__GETQUICKBUTTONCONTENT_B__23_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleNotificationEventContentReddotResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_HANDLENOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void RefreshMiniGameRoadCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_REFRESHMINIGAMEROADCOST_OFFSET))(nullptr);
		}

		::System::Void OnClickStartMinigameDefense()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_ONCLICKSTARTMINIGAMEDEFENSE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshEventMeetupTicket(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_REFRESHEVENTMEETUPTICKET_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoLoadTextures(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_COLOADTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Void OpenSpecialMiniEventCollectionUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_OPENSPECIALMINIEVENTCOLLECTIONUI_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_REFRESHBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshMiniGameShootingCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_REFRESHMINIGAMESHOOTINGCOST_OFFSET))(nullptr);
		}

		::System::Void _RefreshButton_b__25_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON__REFRESHBUTTON_B__25_0_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean CheckCloseTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_CHECKCLOSETIME_OFFSET))(nullptr);
		}

		::System::Void OnClickStartDreamMaker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_ONCLICKSTARTDREAMMAKER_OFFSET))(nullptr);
		}

		::System::Void OpenFieldLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_OPENFIELDLOBBY_OFFSET))(nullptr);
		}

		::System::Void OnClickStartMiniGameRoad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_ONCLICKSTARTMINIGAMEROAD_OFFSET))(nullptr);
		}

		::System::Void _RefreshButton_b__25_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON__REFRESHBUTTON_B__25_2_OFFSET))(nullptr);
		}

		::MX::Data::EventContentSeasonInfo* GetQuickButtonContent()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_GETQUICKBUTTONCONTENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetQuickButtonContentType()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_GETQUICKBUTTONCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void RefreshMiniGameDefenseCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYQUICKBUTTON_REFRESHMINIGAMEDEFENSECOST_OFFSET))(nullptr);
		}

	};

