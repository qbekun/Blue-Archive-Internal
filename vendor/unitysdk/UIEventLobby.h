#pragma once
#include "unitysdk.h"

class MXButton;
class SpineChatDialogContainerEvent;
class UIWidget;
class UITexture;
namespace UnityEngine { class Transform; }
class UILabel;
class UIEventLobbyMenuController;
class UIEventLobbyQuickButton;
namespace UnityEngine { class GameObject; }
class UISlider;
class OpenConditionButtonController;
class UIEventChangePermanent;
class UIEventLobbyContentController;
class UIAudioPlay;
namespace MX::Data { class EventContentSeasonInfo; }
namespace UnityEngine { class Coroutine; }
namespace MX::GameLogic::DBModel { class EventContentChangeDB; }
namespace MX::Data { class EventContentChangeInfo; }
class TooltipTargetParcelTracker;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::Data { class BGMPlayInfo; }
namespace FlatData { class StageDifficulty; }
namespace MX::Data { class EventContentStageInfo; }
class StageSelectListItem;
class UIEventBonusChar;
class UIEventPlayGuide;

#define UIEVENTLOBBY_TRYSHOWEVENTCONTENTGUIDE_OFFSET UNITYSDK_OFFSET(0x2422420)
#define UIEVENTLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2422610)
#define UIEVENTLOBBY_REFRESHEVENTSUBSTAGELISTINFO_OFFSET UNITYSDK_OFFSET(0x2424C90)
#define UIEVENTLOBBY_HANDLEEVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2424E60)
#define UIEVENTLOBBY_ONCLICKPLAYGUIDEBUTTON_OFFSET UNITYSDK_OFFSET(0x2422540)
#define UIEVENTLOBBY__REFRESH_B__76_0_OFFSET UNITYSDK_OFFSET(0x2425D30)
#define UIEVENTLOBBY_UPDATEMENUREDDOT_OFFSET UNITYSDK_OFFSET(0x2425DC0)
#define UIEVENTLOBBY_UPDATESUBEVENTTIMECHECK_OFFSET UNITYSDK_OFFSET(0x2425DF0)
#define UIEVENTLOBBY_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x2426120)
#define UIEVENTLOBBY__CO_EVENTCHANGECHECKREQUEST_B__70_0_OFFSET UNITYSDK_OFFSET(0x2426140)
#define UIEVENTLOBBY_SHOWSTAGESELECTINFO_OFFSET UNITYSDK_OFFSET(0x2426170)
#define UIEVENTLOBBY_REFRESHEVENTMEETUPTICKET_OFFSET UNITYSDK_OFFSET(0x24264F0)
#define UIEVENTLOBBY_SETDATA_OFFSET UNITYSDK_OFFSET(0x24222A0)
#define UIEVENTLOBBY_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x2426520)
#define UIEVENTLOBBY_REFRESH_OFFSET UNITYSDK_OFFSET(0x24265D0)
#define UIEVENTLOBBY_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x24266D0)
#define UIEVENTLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2426740)
#define UIEVENTLOBBY_HANDLEWORLDRAIDLOBBYRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2426E10)
#define UIEVENTLOBBY_SETACTIVATEDLIST_OFFSET UNITYSDK_OFFSET(0x2423D70)
#define UIEVENTLOBBY_CO_CHECKACTIVATED_OFFSET UNITYSDK_OFFSET(0x2427670)
#define UIEVENTLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2427700)
#define UIEVENTLOBBY__ONEVENTCONTENTSTAGECOMPLETED_G__REVEALEXSTAGES|74_0_OFFSET UNITYSDK_OFFSET(0x2427780)
#define UIEVENTLOBBY_ONCLICKBONUSCHARACTERBUTTON_OFFSET UNITYSDK_OFFSET(0x24277F0)
#define UIEVENTLOBBY_ONCLICKENTERMINIGAME_OFFSET UNITYSDK_OFFSET(0x24278D0)
#define UIEVENTLOBBY_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2427AC0)
#define UIEVENTLOBBY__ONOPENED_B__77_1_OFFSET UNITYSDK_OFFSET(0x2427B40)
#define UIEVENTLOBBY_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x2427D00)
#define UIEVENTLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2427D90)
#define UIEVENTLOBBY_ONEVENTCONTENTSTAGECOMPLETED_OFFSET UNITYSDK_OFFSET(0x2427E20)
#define UIEVENTLOBBY_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x2427F40)
#define UIEVENTLOBBY_REFRESHMENU_OFFSET UNITYSDK_OFFSET(0x2427F70)
#define UIEVENTLOBBY_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x2423E60)
#define UIEVENTLOBBY_EVENTCHANGEPRODUCTION_OFFSET UNITYSDK_OFFSET(0x2424BA0)
#define UIEVENTLOBBY_UPDATE_OFFSET UNITYSDK_OFFSET(0x2427FA0)
#define UIEVENTLOBBY_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24281A0)
#define UIEVENTLOBBY_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x24282D0)
#define UIEVENTLOBBY_OPENSHORTCUTTAB_OFFSET UNITYSDK_OFFSET(0x24282F0)
#define UIEVENTLOBBY_ADDSEQUENCEONSTORYSTAGECLEAR_OFFSET UNITYSDK_OFFSET(0x2428370)
#define UIEVENTLOBBY_RESETEVENTCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x2428A40)
#define UIEVENTLOBBY_OPENSHORTCUTPOPUP_OFFSET UNITYSDK_OFFSET(0x2428AA0)
#define UIEVENTLOBBY_GETSTAGELISTITEM_OFFSET UNITYSDK_OFFSET(0x2428BB0)
#define UIEVENTLOBBY_REFRESHEVENTAPCHARGEGAUGE_OFFSET UNITYSDK_OFFSET(0x2428C30)
#define UIEVENTLOBBY_SHOWPOPUPSONSTORYSTAGECLEAR_OFFSET UNITYSDK_OFFSET(0x2429100)
#define UIEVENTLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x24291D0)
#define UIEVENTLOBBY_SHOWCOMPLETESTAMP_OFFSET UNITYSDK_OFFSET(0x2427EA0)
#define UIEVENTLOBBY__ONCLICKBONUSCHARACTERBUTTON_B__57_0_OFFSET UNITYSDK_OFFSET(0x2429320)
#define UIEVENTLOBBY__ADDSEQUENCEONSTORYSTAGECLEAR_B__100_0_OFFSET UNITYSDK_OFFSET(0x2429350)
#define UIEVENTLOBBY_LOBBYEVENTCHANGE_OFFSET UNITYSDK_OFFSET(0x2429380)
#define UIEVENTLOBBY__GETCONTENTCONTROLLERRESOURCEPATH_B__73_0_OFFSET UNITYSDK_OFFSET(0x2429760)
#define UIEVENTLOBBY__ONOPENED_G__DEFAULTONOPENEDHANDLING|77_0_OFFSET UNITYSDK_OFFSET(0x2423F00)
#define UIEVENTLOBBY_GETCONTENTCONTROLLERRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x2429800)
#define UIEVENTLOBBY_HANDLEEVENTCONTENTRECEIVESTAGETOTALREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2429CA0)
#define UIEVENTLOBBY_PLAYDIALOGDELAYED_OFFSET UNITYSDK_OFFSET(0x2429790)
#define UIEVENTLOBBY_CO_EVENTCHANGECHECKREQUEST_OFFSET UNITYSDK_OFFSET(0x2429E30)
#define UIEVENTLOBBY__ONCLICKPLAYGUIDEBUTTON_B__56_0_OFFSET UNITYSDK_OFFSET(0x2429EA0)
#define UIEVENTLOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x242A090)
#define UIEVENTLOBBY_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x242A3A0)
#define UIEVENTLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x242A5F0)
#define UIEVENTLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x242A620)
#define UIEVENTLOBBY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x242A630)
#define UIEVENTLOBBY_UPDATESUBEVENTSEASONTIMECHECK_OFFSET UNITYSDK_OFFSET(0x2427FC0)
#define UIEVENTLOBBY_GETCHANGEDB_OFFSET UNITYSDK_OFFSET(0x242A900)
#define UIEVENTLOBBY_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x242A910)

	inline static constexpr unsigned int UIEventLobby_TypeDefinitionIndex = 5536;

	class UIEventLobby : public Il2CppObject
	{
	public:
		::System::Int32 OPEN_ANIMATION_CLIP_INDEX; // 0x0
		::System::Int32 MAIN_TO_SUB_ANIMATION_CLIP_INDEX; // 0x0
		::System::Int32 SUB_TO_MAIN_ANIMATION_CLIP_INDEX; // 0x0
		MXButton* backButton; // 0xD8
		MXButton* playGuideButton; // 0xE0
		MXButton* bonusCharacterButton; // 0xE8
		SpineChatDialogContainerEvent* eventCharacterSpine; // 0xF0
		UIWidget* bannerRoot; // 0xF8
		UITexture* bannerTexture; // 0x100
		::UnityEngine::Transform* periodRoot; // 0x108
		UILabel* periodLabel; // 0x110
		UITexture* bgTexture; // 0x118
		::UnityEngine::Transform* contentControllerRoot; // 0x120
		UIEventLobbyMenuController* menuController; // 0x128
		UIEventLobbyQuickButton* quickButton; // 0x130
		UITexture* completeStampTexture; // 0x138
		::UnityEngine::Transform* spineOffsetTransform; // 0x140
		::UnityEngine::Transform* dialogOffsetTransform; // 0x148
		::UnityEngine::GameObject* subEventApChargeGauge; // 0x150
		UISlider* subEventApChargeSlider; // 0x158
		UILabel* subEventApChargeLabel; // 0x160
		::UnityEngine::GameObject* subEventPlayTime; // 0x168
		UILabel* subEventPlayTimeLabel; // 0x170
		::UnityEngine::GameObject* wakamoBgFireObject; // 0x178
		OpenConditionButtonController* miniGameOpenCondition; // 0x180
		::UnityEngine::GameObject* targetTalkStartObj; // 0x188
		UIEventChangePermanent* eventChangePermanent; // 0x190
		UIEventLobbyContentController* contentController; // 0x198
		::Il2CppArray<::System::Object*>* completeStampTweeners; // 0x1A0
		UIAudioPlay* completeStampAudioPlay; // 0x1A8
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x1B0
		::UnityEngine::Coroutine* CheckActivatedCoroutine; // 0x1B8
		Il2CppObject* openAnimationClipList; // 0x1C0
		::System::Boolean comeInBanner; // 0x1C8
		::MX::Data::EventContentSeasonInfo* mainEventSeasonInfo; // 0x1D0
		::MX::GameLogic::DBModel::EventContentChangeDB* eventContentChangeDB; // 0x1D8
		::MX::Data::EventContentChangeInfo* currentSubEventChangeInfo; // 0x1E0
		::System::Boolean currentSubEvent; // 0x1E8
		::System::Boolean eventChange; // 0x1E9
		::System::Boolean subRewardPopup; // 0x1EA
		::System::Int64 apUseAmount; // 0x1F0
		::System::Int64 subRewardItemAmount; // 0x1F8
		::System::Int64 eventChangeScenarioGroupId; // 0x200
		::System::Boolean worldRaidAllCleared; // 0x208
		::System::Boolean miniEvent; // 0x209
		::System::Boolean specialMiniEvent; // 0x20A
		::System::Boolean hasDefaultClip; // 0x20B
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x210

		::System::Void TryShowEventContentGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_TRYSHOWEVENTCONTENTGUIDE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshEventSubStageListInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_REFRESHEVENTSUBSTAGELISTINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentSubEventLobbyResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_HANDLEEVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPlayGuideButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ONCLICKPLAYGUIDEBUTTON_OFFSET))(nullptr);
		}

		::System::Void _Refresh_b__76_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY__REFRESH_B__76_0_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMenuReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_UPDATEMENUREDDOT_OFFSET))(nullptr);
		}

		::System::Void UpdateSubEventTimeCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_UPDATESUBEVENTTIMECHECK_OFFSET))(nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Co_EventChangeCheckRequest_b__70_0(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY__CO_EVENTCHANGECHECKREQUEST_B__70_0_OFFSET))(arg, nullptr);
		}

		::System::Void ShowStageSelectInfo(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_SHOWSTAGESELECTINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshEventMeetupTicket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_REFRESHEVENTMEETUPTICKET_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_REFRESHCONTENT_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_REFRESH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleWorldRaidLobbyResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_HANDLEWORLDRAIDLOBBYRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActivatedList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_SETACTIVATEDLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_CheckActivated()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_CO_CHECKACTIVATED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnEventContentStageCompleted_g__RevealExStages|74_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY__ONEVENTCONTENTSTAGECOMPLETED_G__REVEALEXSTAGES|74_0_OFFSET))(nullptr);
		}

		::System::Void OnClickBonusCharacterButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ONCLICKBONUSCHARACTERBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickEnterMinigame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ONCLICKENTERMINIGAME_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentScenarioGroupHistoryUpdateResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_b__77_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY__ONOPENED_B__77_1_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnEventContentStageCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ONEVENTCONTENTSTAGECOMPLETED_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void RefreshMenu()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_REFRESHMENU_OFFSET))(nullptr);
		}

		::System::Boolean IsActivated(::MX::Data::EventContentSeasonInfo* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ISACTIVATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EventChangeProduction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_EVENTCHANGEPRODUCTION_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OpenShortcutTab(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_OPENSHORTCUTTAB_OFFSET))(arg, nullptr);
		}

		::System::Void AddSequenceOnStoryStageClear(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ADDSEQUENCEONSTORYSTAGECLEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetEventChangeInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_RESETEVENTCHANGEINFO_OFFSET))(nullptr);
		}

		::System::Void OpenShortcutPopup(::MX::Data::EventContentSeasonInfo* arg, ::MX::Data::EventContentStageInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_OPENSHORTCUTPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		StageSelectListItem* GetStageListItem(::System::Int64 arg)
		{
			return ((StageSelectListItem*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_GETSTAGELISTITEM_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshEventApChargeGauge(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_REFRESHEVENTAPCHARGEGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowPopupsOnStoryStageClear(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_SHOWPOPUPSONSTORYSTAGECLEAR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void ShowCompleteStamp(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_SHOWCOMPLETESTAMP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickBonusCharacterButton_b__57_0(UIEventBonusChar* arg)
		{
			((::System::Void(*)(UIEventBonusChar*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY__ONCLICKBONUSCHARACTERBUTTON_B__57_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _AddSequenceOnStoryStageClear_b__100_0(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY__ADDSEQUENCEONSTORYSTAGECLEAR_B__100_0_OFFSET))(arg, nullptr);
		}

		::System::Void LobbyEventChange(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_LOBBYEVENTCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetContentControllerResourcePath_b__73_0(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY__GETCONTENTCONTROLLERRESOURCEPATH_B__73_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_g__DefaultOnOpenedHandling|77_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY__ONOPENED_G__DEFAULTONOPENEDHANDLING|77_0_OFFSET))(nullptr);
		}

		::System::String* GetContentControllerResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_GETCONTENTCONTROLLERRESOURCEPATH_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentReceiveStageTotalRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_HANDLEEVENTCONTENTRECEIVESTAGETOTALREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayDialogDelayed()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_PLAYDIALOGDELAYED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_EventChangeCheckRequest()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_CO_EVENTCHANGECHECKREQUEST_OFFSET))(nullptr);
		}

		::System::Void _OnClickPlayGuideButton_b__56_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY__ONCLICKPLAYGUIDEBUTTON_B__56_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateSubEventSeasonTimeCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_UPDATESUBEVENTSEASONTIMECHECK_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentChangeDB* GetChangeDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentChangeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_GETCHANGEDB_OFFSET))(nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBY_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

	};

