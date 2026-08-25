#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class IntTabController;
namespace UnityEngine { class Animation; }
class UIAdmissionDisplay;
namespace MX::MinigameShooting { class MGSGameMode; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data { class MiniGameShootingStageInfo; }
namespace MX::GameLogic::DBModel { class MiniGameShootingHistoryDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIEventPlayGuide;
class UIMiniGameShootingCharSelect;
class UIMinigameShootingMission;

#define UIMINIGAMESHOOTINGLOBBY_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x2065650)
#define UIMINIGAMESHOOTINGLOBBY_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x2065780)
#define UIMINIGAMESHOOTINGLOBBY_ONCLICKREWARDINFO_OFFSET UNITYSDK_OFFSET(0x2065F80)
#define UIMINIGAMESHOOTINGLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2066150)
#define UIMINIGAMESHOOTINGLOBBY__ONCLICKGUIDE_B__37_0_OFFSET UNITYSDK_OFFSET(0x20661E0)
#define UIMINIGAMESHOOTINGLOBBY_REFRESHMISSIONREDDOT_OFFSET UNITYSDK_OFFSET(0x2065660)
#define UIMINIGAMESHOOTINGLOBBY_TRYSHOWEVENTCONTENTGUIDE_OFFSET UNITYSDK_OFFSET(0x20663D0)
#define UIMINIGAMESHOOTINGLOBBY_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x2065C90)
#define UIMINIGAMESHOOTINGLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x20665C0)
#define UIMINIGAMESHOOTINGLOBBY_ONCLICKSTART_OFFSET UNITYSDK_OFFSET(0x20665D0)
#define UIMINIGAMESHOOTINGLOBBY_ONCLICKMISSION_OFFSET UNITYSDK_OFFSET(0x2066890)
#define UIMINIGAMESHOOTINGLOBBY_ONCLICKGUIDE_OFFSET UNITYSDK_OFFSET(0x20664F0)
#define UIMINIGAMESHOOTINGLOBBY__ONCLICKSTART_B__35_1_OFFSET UNITYSDK_OFFSET(0x2066960)
#define UIMINIGAMESHOOTINGLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x20669A0)
#define UIMINIGAMESHOOTINGLOBBY_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x20669B0)
#define UIMINIGAMESHOOTINGLOBBY__ONCLICKMISSION_B__36_0_OFFSET UNITYSDK_OFFSET(0x2066D60)
#define UIMINIGAMESHOOTINGLOBBY_OPEN_OFFSET UNITYSDK_OFFSET(0x2066E20)
#define UIMINIGAMESHOOTINGLOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2067040)
#define UIMINIGAMESHOOTINGLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x20671D0)
#define UIMINIGAMESHOOTINGLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x2067620)
#define UIMINIGAMESHOOTINGLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2067770)
#define UIMINIGAMESHOOTINGLOBBY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2067870)
#define UIMINIGAMESHOOTINGLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2067A50)
#define UIMINIGAMESHOOTINGLOBBY_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x2067F20)
#define UIMINIGAMESHOOTINGLOBBY_SETDATA_OFFSET UNITYSDK_OFFSET(0x2067FB0)
#define UIMINIGAMESHOOTINGLOBBY_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0x2067FD0)
#define UIMINIGAMESHOOTINGLOBBY_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2068260)
#define UIMINIGAMESHOOTINGLOBBY_CANSTARTNEWGAME_OFFSET UNITYSDK_OFFSET(0x20683F0)

	inline static constexpr unsigned int UIMiniGameShootingLobby_TypeDefinitionIndex = 3422;

	class UIMiniGameShootingLobby : public Il2CppObject
	{
	public:
		MXButton* RewardInfo; // 0xD8
		MXButton* Skip; // 0xE0
		MXButton* Start; // 0xE8
		MXButton* Mission; // 0xF0
		MXButton* GuideButton; // 0xF8
		::UnityEngine::GameObject* RedDot; // 0x100
		::UnityEngine::GameObject* Lock; // 0x108
		IntTabController* TabController; // 0x110
		::UnityEngine::Animation* HardAnimation; // 0x118
		::UnityEngine::Animation* FreeAnimation; // 0x120
		UIAdmissionDisplay* Cost; // 0x128
		::MX::MinigameShooting::MGSGameMode* curGameMode; // 0x130
		::MX::Data::EventContentSeasonInfo* eventContentInfo; // 0x138
		::MX::Data::MiniGameShootingStageInfo* StageInfo; // 0x140
		::MX::GameLogic::DBModel::MiniGameShootingHistoryDB* normalHistory; // 0x148
		::MX::GameLogic::DBModel::MiniGameShootingHistoryDB* hardHistory; // 0x150

		::System::Boolean HandleReddotChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggleChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONCLICKREWARDINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void _OnClickGuide_b__37_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY__ONCLICKGUIDE_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMissionReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_REFRESHMISSIONREDDOT_OFFSET))(nullptr);
		}

		::System::Void TryShowEventContentGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_TRYSHOWEVENTCONTENTGUIDE_OFFSET))(nullptr);
		}

		::System::Void RefreshInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_REFRESHINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONCLICKSTART_OFFSET))(nullptr);
		}

		::System::Void OnClickMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONCLICKMISSION_OFFSET))(nullptr);
		}

		::System::Void OnClickGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONCLICKGUIDE_OFFSET))(nullptr);
		}

		::System::Void _OnClickStart_b__35_1(UIMiniGameShootingCharSelect* arg)
		{
			((::System::Void(*)(UIMiniGameShootingCharSelect*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY__ONCLICKSTART_B__35_1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void _OnClickMission_b__36_0(UIMinigameShootingMission* arg)
		{
			((::System::Void(*)(UIMinigameShootingMission*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY__ONCLICKMISSION_B__36_0_OFFSET))(arg, nullptr);
		}

		::System::Void Open(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_OPEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanStartNewGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_CANSTARTNEWGAME_OFFSET))(nullptr);
		}

	};

