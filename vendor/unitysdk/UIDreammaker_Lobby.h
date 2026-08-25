#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UISprite;
class UILabel;
namespace MX::Data { class EventContentSeasonInfo; }
class UIPopup_DreamMaker_Start;
class UIDreammaker_ReplayList;
class UIPopup_Dreammaker_NewgameCaution;
class UIPopup_DreamMaker_RewardInfo;
class UIEventPlayGuide;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIMinigameMission;

#define UIDREAMMAKER_LOBBY__OPENCONTINUEPOPUPUI_B__21_0_OFFSET UNITYSDK_OFFSET(0xB9C730)
#define UIDREAMMAKER_LOBBY_OPENMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0xB9C760)
#define UIDREAMMAKER_LOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB9C830)
#define UIDREAMMAKER_LOBBY__OPENREPLAYLIST_B__18_0_OFFSET UNITYSDK_OFFSET(0xB9C940)
#define UIDREAMMAKER_LOBBY_OPENDREAMMAKERENTERLOBBY_OFFSET UNITYSDK_OFFSET(0xB9CA30)
#define UIDREAMMAKER_LOBBY__OPENNEWSTARTPOPUPUI_B__20_0_OFFSET UNITYSDK_OFFSET(0xB9CD60)
#define UIDREAMMAKER_LOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB9CD90)
#define UIDREAMMAKER_LOBBY_GET_SHOULDPLAYBGM2ND_OFFSET UNITYSDK_OFFSET(0xB9D1C0)
#define UIDREAMMAKER_LOBBY_REFRESHMISSIONREDDOT_OFFSET UNITYSDK_OFFSET(0xB9D0A0)
#define UIDREAMMAKER_LOBBY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB9D340)
#define UIDREAMMAKER_LOBBY_OPENREWARDLIST_OFFSET UNITYSDK_OFFSET(0xB9D450)
#define UIDREAMMAKER_LOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0xB9D530)
#define UIDREAMMAKER_LOBBY_OPENCONTINUEPOPUPUI_OFFSET UNITYSDK_OFFSET(0xB9D540)
#define UIDREAMMAKER_LOBBY__OPENREWARDLIST_B__19_0_OFFSET UNITYSDK_OFFSET(0xB9D7E0)
#define UIDREAMMAKER_LOBBY_OPENNEWSTARTPOPUPUI_OFFSET UNITYSDK_OFFSET(0xB9D810)
#define UIDREAMMAKER_LOBBY__OPENPLAYGUIDE_B__16_0_OFFSET UNITYSDK_OFFSET(0xB9DA10)
#define UIDREAMMAKER_LOBBY_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0xB9DAD0)
#define UIDREAMMAKER_LOBBY_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xB9DB60)
#define UIDREAMMAKER_LOBBY_OPENREPLAYLIST_OFFSET UNITYSDK_OFFSET(0xB9DB70)
#define UIDREAMMAKER_LOBBY__OPENMINIGAMEMISSION_B__17_0_OFFSET UNITYSDK_OFFSET(0xB9DC40)
#define UIDREAMMAKER_LOBBY_REFRESHUISTATE_OFFSET UNITYSDK_OFFSET(0xB9CDC0)
#define UIDREAMMAKER_LOBBY_ONCLICKMINIGAMEREPLAYSCENARIOBUTTON_OFFSET UNITYSDK_OFFSET(0xB9DD00)
#define UIDREAMMAKER_LOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xB9DE40)
#define UIDREAMMAKER_LOBBY_SETDATA_OFFSET UNITYSDK_OFFSET(0xB9DF90)
#define UIDREAMMAKER_LOBBY__OPENNEWSTARTPOPUPUI_B__20_1_OFFSET UNITYSDK_OFFSET(0xB9DFB0)
#define UIDREAMMAKER_LOBBY_OPENPLAYGUIDE_OFFSET UNITYSDK_OFFSET(0xB9DFE0)
#define UIDREAMMAKER_LOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB9E0B0)

	inline static constexpr unsigned int UIDreammaker_Lobby_TypeDefinitionIndex = 596;

	class UIDreammaker_Lobby : public Il2CppObject
	{
	public:
		MXButton* rewardListButton; // 0xD8
		MXButton* playGuideButton; // 0xE0
		MXButton* startButton; // 0xE8
		MXButton* continueButton; // 0xF0
		MXButton* missionButton; // 0xF8
		MXButton* replayButton; // 0x100
		::UnityEngine::GameObject* continueButtonDisabled; // 0x108
		UISprite* eventCostSprite; // 0x110
		UILabel* eventCostStackText; // 0x118
		::UnityEngine::GameObject* RedDot; // 0x120
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x128

		::System::Void _OpenContinuePopupUI_b__21_0(UIPopup_DreamMaker_Start* arg)
		{
			((::System::Void(*)(UIPopup_DreamMaker_Start*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY__OPENCONTINUEPOPUPUI_B__21_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenMinigameMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_OPENMINIGAMEMISSION_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void _OpenReplayList_b__18_0(UIDreammaker_ReplayList* arg)
		{
			((::System::Void(*)(UIDreammaker_ReplayList*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY__OPENREPLAYLIST_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenDreamMakerEnterLobby(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_OPENDREAMMAKERENTERLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenNewStartPopupUI_b__20_0(UIPopup_Dreammaker_NewgameCaution* arg)
		{
			((::System::Void(*)(UIPopup_Dreammaker_NewgameCaution*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY__OPENNEWSTARTPOPUPUI_B__20_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShouldPlayBGM2nd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_GET_SHOULDPLAYBGM2ND_OFFSET))(nullptr);
		}

		::System::Void RefreshMissionReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_REFRESHMISSIONREDDOT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OpenRewardList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_OPENREWARDLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OpenContinuePopupUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_OPENCONTINUEPOPUPUI_OFFSET))(nullptr);
		}

		::System::Void _OpenRewardList_b__19_0(UIPopup_DreamMaker_RewardInfo* arg)
		{
			((::System::Void(*)(UIPopup_DreamMaker_RewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY__OPENREWARDLIST_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenNewStartPopupUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_OPENNEWSTARTPOPUPUI_OFFSET))(nullptr);
		}

		::System::Void _OpenPlayGuide_b__16_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY__OPENPLAYGUIDE_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Boolean HandleReddotChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenReplayList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_OPENREPLAYLIST_OFFSET))(nullptr);
		}

		::System::Void _OpenMinigameMission_b__17_0(UIMinigameMission* arg)
		{
			((::System::Void(*)(UIMinigameMission*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY__OPENMINIGAMEMISSION_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshUIState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_REFRESHUISTATE_OFFSET))(nullptr);
		}

		::System::Void OnClickMinigameReplayScenarioButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_ONCLICKMINIGAMEREPLAYSCENARIOBUTTON_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenNewStartPopupUI_b__20_1(UIPopup_DreamMaker_Start* arg)
		{
			((::System::Void(*)(UIPopup_DreamMaker_Start*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY__OPENNEWSTARTPOPUPUI_B__20_1_OFFSET))(arg, nullptr);
		}

		::System::Void OpenPlayGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_OPENPLAYGUIDE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOBBY_AWAKE_OFFSET))(nullptr);
		}

	};

