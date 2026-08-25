#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
class UIGrid;
class AccountLevelExpIndicator;
class UIEventTrigger;
class UIVictory_TimeAttack;
class UIVictory_BottomUI;
class UIPanel;
class UIVictoryHandler;
class PopupType;
namespace FlatData { class ContentType; }
namespace UnityEngine { class BoxCollider; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace UnityEngine { class Coroutine; }
namespace MX::Visual::Battles { class BattleResultSkipType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace UnityEngine { class Animation; }
class UIPopup_BattleSummary;
namespace UnityEngine::Playables { class PlayableDirector; }
class UIRewardPopup;
class UILevelUpPopup;
class UIStageMissionPopup;
class UIBase;
class UIPopup_BattleSummary_EchelonExtension;
class UIPopup_ArenaSummary;
class UITacticClearRankPopup;

#define UIVICTORY_PLAYVICTORYTIMELINE_OFFSET UNITYSDK_OFFSET(0xBAF400)
#define UIVICTORY_CREATEMAINADVENTUREPOPUPLIST_OFFSET UNITYSDK_OFFSET(0xBAF870)
#define UIVICTORY_ONCLICKSHOWRESULT_OFFSET UNITYSDK_OFFSET(0xBAFA40)
#define UIVICTORY_SETWORLDRAIDDAMAGELABEL_OFFSET UNITYSDK_OFFSET(0xBB1040)
#define UIVICTORY_RETRYBATTLETEST_OFFSET UNITYSDK_OFFSET(0xBB1280)
#define UIVICTORY_COCLOSE_OFFSET UNITYSDK_OFFSET(0xBB16B0)
#define UIVICTORY_SETSKIPTYPE_OFFSET UNITYSDK_OFFSET(0xBB1760)
#define UIVICTORY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xBB1770)
#define UIVICTORY_GET_ISCAMPAIGNSTAGECLEAR_OFFSET UNITYSDK_OFFSET(0xBA79B0)
#define UIVICTORY_CHECKMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xBB1800)
#define UIVICTORY_GETOPENANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xBB1830)
#define UIVICTORY_GET_ISCAMPAIGNMAINSTAGESTRATEGYSKIP_OFFSET UNITYSDK_OFFSET(0xBB1900)
#define UIVICTORY_CHECKSTAGECLEAR_OFFSET UNITYSDK_OFFSET(0xBAF990)
#define UIVICTORY_CREATEPOPUPLIST_OFFSET UNITYSDK_OFFSET(0xBB0550)
#define UIVICTORY_SET_BATTLERESULTSKIPTYPE_OFFSET UNITYSDK_OFFSET(0xBB1B40)
#define UIVICTORY_CHECKSHOWREWARDPOPUP_OFFSET UNITYSDK_OFFSET(0xBB19C0)
#define UIVICTORY_CAMPAIGNTACTICRESULTCUSTOMACTION_OFFSET UNITYSDK_OFFSET(0xBB1CA0)
#define UIVICTORY_ONSUMMARYBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xBB1E60)
#define UIVICTORY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBB2110)
#define UIVICTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBB2130)
#define UIVICTORY_SET_STAGECONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBB2450)
#define UIVICTORY_COOPENPOPUPS_OFFSET UNITYSDK_OFFSET(0xBB2460)
#define UIVICTORY_CHECKSHOWRANKPOPUP_OFFSET UNITYSDK_OFFSET(0xBAF8E0)
#define UIVICTORY_ACTIVATEBACKBUTTONS_OFFSET UNITYSDK_OFFSET(0xBB2500)
#define UIVICTORY_SKIPTOSHOWRESULT_OFFSET UNITYSDK_OFFSET(0xBB2CC0)
#define UIVICTORY_PLAY_OFFSET UNITYSDK_OFFSET(0xBB2DF0)
#define UIVICTORY_ONLOBBYBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xBB2EB0)
#define UIVICTORY_SETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBB3000)
#define UIVICTORY_ONNEXTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xBB3010)
#define UIVICTORY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xBB3390)
#define UIVICTORY__ONSUMMARYBUTTONCLICKED_B__123_2_OFFSET UNITYSDK_OFFSET(0xBB3670)
#define UIVICTORY_SETHANDLER_OFFSET UNITYSDK_OFFSET(0xBB36B0)
#define UIVICTORY_ANIMEVENTTRIGGER_INTROFINISH_OFFSET UNITYSDK_OFFSET(0xBB36D0)
#define UIVICTORY__PLAYVICTORYTIMELINE_B__83_0_OFFSET UNITYSDK_OFFSET(0xBB36E0)
#define UIVICTORY__ONENDOPENANIMATION_G__SHOWFRIENDAPPLICANTPOPUP|135_0_OFFSET UNITYSDK_OFFSET(0xBB40E0)
#define UIVICTORY__SKIPTOSHOWRESULT_G__COSKIP|129_0_OFFSET UNITYSDK_OFFSET(0xBB2D80)
#define UIVICTORY__ONSKIPBUTTONCLICKED_B__130_1_OFFSET UNITYSDK_OFFSET(0xBB4190)
#define UIVICTORY_GET_ISLEVELUP_OFFSET UNITYSDK_OFFSET(0xBB4200)
#define UIVICTORY__SHOWPOPUP_B__94_7_OFFSET UNITYSDK_OFFSET(0xBB4230)
#define UIVICTORY_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0xBA5C70)
#define UIVICTORY_HIDESUMMARYBUTTON_OFFSET UNITYSDK_OFFSET(0xBB44D0)
#define UIVICTORY_ACTIVATESKIPBUTTON_OFFSET UNITYSDK_OFFSET(0xBB4510)
#define UIVICTORY_GET_RESULTBOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0xBB4330)
#define UIVICTORY__CAMPAIGNTACTICRESULTCUSTOMACTION_G__PROCESS|90_1_OFFSET UNITYSDK_OFFSET(0xBB4810)
#define UIVICTORY__ONCLICKSHOWRESULT_G__AFTERCREATEPOPUPLIST|113_0_OFFSET UNITYSDK_OFFSET(0xBB0600)
#define UIVICTORY_SHOWPOPUP_OFFSET UNITYSDK_OFFSET(0xBB3310)
#define UIVICTORY_REQUESTTUTORIALADVENTURERESULT_OFFSET UNITYSDK_OFFSET(0xBB48C0)
#define UIVICTORY_CLOSE_OFFSET UNITYSDK_OFFSET(0xBB1560)
#define UIVICTORY_ANIMEVENTTRIGGER_SKIPREENABLE_OFFSET UNITYSDK_OFFSET(0xBB4A30)
#define UIVICTORY_RAIDREWARDCUSTOMACTION_OFFSET UNITYSDK_OFFSET(0xBB4A40)
#define UIVICTORY_ONCONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xBB4A70)
#define UIVICTORY_STARTCOOPENPOPUPS_OFFSET UNITYSDK_OFFSET(0xBA68C0)
#define UIVICTORY_ONFULLSCREENBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xBB4BC0)
#define UIVICTORY_CHECKSHOWLEVELUPPOPUP_OFFSET UNITYSDK_OFFSET(0xBB1910)
#define UIVICTORY_GET_VICTORYHANDLER_OFFSET UNITYSDK_OFFSET(0xBB4C70)
#define UIVICTORY_SETPOINTINFOLABEL_OFFSET UNITYSDK_OFFSET(0xBB4C80)
#define UIVICTORY_SETTIMEATTACKUI_OFFSET UNITYSDK_OFFSET(0xBAC9A0)
#define UIVICTORY_INITCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xBB38B0)
#define UIVICTORY_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0xBB1B50)
#define UIVICTORY_REQUESTSCENARIOTACTICRESULT_OFFSET UNITYSDK_OFFSET(0xBA58A0)
#define UIVICTORY_ONPREVBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xBB57E0)
#define UIVICTORY__SHOWPOPUP_B__94_3_OFFSET UNITYSDK_OFFSET(0xBB5A10)
#define UIVICTORY_GET_STAGECONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBB5A50)
#define UIVICTORY__COOPENPOPUPS_B__93_0_OFFSET UNITYSDK_OFFSET(0xBB5A60)
#define UIVICTORY_SET_ISCAMPAIGNMAINSTAGESTRATEGYSKIP_OFFSET UNITYSDK_OFFSET(0xBB5AD0)
#define UIVICTORY__SHOWPOPUP_B__94_5_OFFSET UNITYSDK_OFFSET(0xBB5AE0)
#define UIVICTORY_SETBATTLETIME_OFFSET UNITYSDK_OFFSET(0xBB5B30)
#define UIVICTORY_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0xBB5EB0)
#define UIVICTORY_UNLOADBATTLE_OFFSET UNITYSDK_OFFSET(0xBB1640)
#define UIVICTORY_REORDERFRONTPANEL_OFFSET UNITYSDK_OFFSET(0xBB5EE0)
#define UIVICTORY_INITPLAYERINFO_OFFSET UNITYSDK_OFFSET(0xBB2380)
#define UIVICTORY__ONCLICKSHOWRESULT_B__113_3_OFFSET UNITYSDK_OFFSET(0xBB5FE0)
#define UIVICTORY_SETREWARDDATA_OFFSET UNITYSDK_OFFSET(0xBA5C20)
#define UIVICTORY_ANIMEVENTTRIGGER_RESULTFINISH_OFFSET UNITYSDK_OFFSET(0xBB60F0)
#define UIVICTORY_HIDEPOPUP_OFFSET UNITYSDK_OFFSET(0xBB3260)
#define UIVICTORY_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xBB6100)
#define UIVICTORY_INITRAIDDATA_OFFSET UNITYSDK_OFFSET(0xBAABF0)
#define UIVICTORY_COSHOWREWARDCONFIRMONSKIP_OFFSET UNITYSDK_OFFSET(0xBB61C0)
#define UIVICTORY_ONCLICKRAIDRESULTSKIP_OFFSET UNITYSDK_OFFSET(0xBB6270)
#define UIVICTORY_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0xBB62F0)
#define UIVICTORY__ONSUMMARYBUTTONCLICKED_B__123_1_OFFSET UNITYSDK_OFFSET(0xBB6370)
#define UIVICTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB63B0)
#define UIVICTORY__ONSUMMARYBUTTONCLICKED_B__123_0_OFFSET UNITYSDK_OFFSET(0xBB6530)
#define UIVICTORY_GET_SUMMARYBOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0xBB4400)
#define UIVICTORY_POPUPLISTANDROIDBACKBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB6610)
#define UIVICTORY__SHOWPOPUP_B__94_1_OFFSET UNITYSDK_OFFSET(0xBB6630)
#define UIVICTORY_ONSKIPBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xBB6660)
#define UIVICTORY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBB6B20)
#define UIVICTORY_AWAKE_OFFSET UNITYSDK_OFFSET(0xBB6C70)
#define UIVICTORY_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0xBB7480)
#define UIVICTORY__ONSKIPBUTTONCLICKED_G__ONSKIPPED|130_0_OFFSET UNITYSDK_OFFSET(0xBB6810)
#define UIVICTORY_GET_BATTLERESULTSKIPTYPE_OFFSET UNITYSDK_OFFSET(0xBB7530)
#define UIVICTORY_SET_VICTORYHANDLER_OFFSET UNITYSDK_OFFSET(0xBB7540)
#define UIVICTORY_INITWORLDRAIDDATA_OFFSET UNITYSDK_OFFSET(0xBADA90)

	inline static constexpr unsigned int UIVictory_TypeDefinitionIndex = 8603;

	class UIVictory : public Il2CppObject
	{
	public:
		::System::Single DELAY; // 0x0
		UILabel* timeLabel; // 0xD8
		::UnityEngine::GameObject* timeObject; // 0xE0
		UILabel* raidTimeLabel; // 0xE8
		::UnityEngine::GameObject* raidTimeObject; // 0xF0
		UILabel* giftCountLabel; // 0xF8
		::UnityEngine::GameObject* giftCountObject; // 0x100
		MXButton* summaryButton; // 0x108
		MXButton* prevButton; // 0x110
		MXButton* nextButton; // 0x118
		MXButton* skipButton; // 0x120
		MXButton* showResultButton; // 0x128
		UIGrid* bottomButtonGrid; // 0x130
		MXButton* lobbyButton; // 0x138
		MXButton* confirmButton; // 0x140
		AccountLevelExpIndicator* playerInfo; // 0x148
		::UnityEngine::GameObject* rankInfoObject; // 0x150
		::Il2CppArray<::System::Object*>* RaidPointBestRecord; // 0x158
		UILabel* RaidPointLabel; // 0x160
		UILabel* RaidResultPointLabel; // 0x168
		UILabel* RaidResultClearTimeLabel; // 0x170
		UILabel* RaidResultLifeLabel; // 0x178
		UILabel* RaidResultDifficultyLabel; // 0x180
		UILabel* WorldRaidResultDamageLabel; // 0x188
		UIEventTrigger* fullScreenButton; // 0x190
		UIEventTrigger* RaidResultSkipButton; // 0x198
		::System::Single raidResultProgressTime; // 0x1A0
		::System::Boolean animationSkipBan; // 0x1A4
		UILabel* pointInfoLabel; // 0x1A8
		UIVictory_TimeAttack* TimeAttackDisplay; // 0x1B0
		::Il2CppArray<::System::Object*>* battleCharacterInfo; // 0x1B8
		::Il2CppArray<::System::Object*>* supportCharacterInfo; // 0x1C0
		UIVictory_BottomUI* uiVictoryBottomUIforBase; // 0x1C8
		UIVictory_BottomUI* uiVictoryBottomUIforExtension; // 0x1D0
		UIPanel* widgetParentToMove; // 0x1D8
		UIPanel* backPanel; // 0x1E0
		UIVictoryHandler* _VictoryHandler_k__BackingField; // 0x1E8
		PopupType* currentPopup; // 0x1F0
		Il2CppObject* popupDict; // 0x1F8
		Il2CppObject* popupList; // 0x200
		::FlatData::ContentType* _StageContentType_k__BackingField; // 0x208
		::System::Boolean _IsCampaignMainStageStrategySkip_k__BackingField; // 0x20C
		::UnityEngine::BoxCollider* summaryBoxCollider; // 0x210
		::UnityEngine::BoxCollider* resultBoxCollider; // 0x218
		::MX::Logic::Battles::Summary::BattleSummary* summaryCache; // 0x220
		::System::Int64 tacticRank; // 0x228
		Il2CppObject* rewardParcels; // 0x230
		Il2CppObject* rewardConfirmDatas; // 0x238
		::System::Boolean isSummaryPopupOpened; // 0x240
		::UnityEngine::Coroutine* openPopupCoroutine; // 0x248
		Il2CppObject* strangerIds; // 0x250
		::MX::Visual::Battles::BattleResultSkipType* _BattleResultSkipType_k__BackingField; // 0x258
		::System::Boolean isHideSummaryButton; // 0x25C

		::System::Void PlayVictoryTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_PLAYVICTORYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void CreateMainAdventurePopupList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CREATEMAINADVENTUREPOPUPLIST_OFFSET))(nullptr);
		}

		::System::Void OnClickShowResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONCLICKSHOWRESULT_OFFSET))(nullptr);
		}

		::System::Void SetWorldRaidDamageLabel(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SETWORLDRAIDDAMAGELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void RetryBattleTest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_RETRYBATTLETEST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoClose(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_COCLOSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSkipType(::MX::Visual::Battles::BattleResultSkipType* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleResultSkipType*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SETSKIPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCampaignStageClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GET_ISCAMPAIGNSTAGECLEAR_OFFSET))(nullptr);
		}

		::System::Void CheckMissionPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CHECKMISSIONPOPUP_OFFSET))(nullptr);
		}

		::System::String* GetOpenAnimationName(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::String*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GETOPENANIMATIONNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCampaignMainStageStrategySkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GET_ISCAMPAIGNMAINSTAGESTRATEGYSKIP_OFFSET))(nullptr);
		}

		::System::Void CheckStageClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CHECKSTAGECLEAR_OFFSET))(nullptr);
		}

		::System::Void CreatePopupList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CREATEPOPUPLIST_OFFSET))(nullptr);
		}

		::System::Void set_BattleResultSkipType(::MX::Visual::Battles::BattleResultSkipType* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleResultSkipType*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SET_BATTLERESULTSKIPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckShowRewardPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CHECKSHOWREWARDPOPUP_OFFSET))(nullptr);
		}

		::System::Boolean CampaignTacticResultCustomAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CAMPAIGNTACTICRESULTCUSTOMACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnSummaryButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONSUMMARYBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SET_STAGECONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOpenPopups(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_COOPENPOPUPS_OFFSET))(arg, nullptr);
		}

		::System::Void CheckShowRankPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CHECKSHOWRANKPOPUP_OFFSET))(nullptr);
		}

		::System::Void ActivateBackButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ACTIVATEBACKBUTTONS_OFFSET))(nullptr);
		}

		::System::Void SkipToShowResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SKIPTOSHOWRESULT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Play(::UnityEngine::Animation* arg, ::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_PLAY_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnLobbyButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONLOBBYBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void SetContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SETCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNextButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONNEXTBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void _OnSummaryButtonClicked_b__123_2(UIPopup_BattleSummary* arg)
		{
			((::System::Void(*)(UIPopup_BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__ONSUMMARYBUTTONCLICKED_B__123_2_OFFSET))(arg, nullptr);
		}

		::System::Void SetHandler(UIVictoryHandler* arg)
		{
			((::System::Void(*)(UIVictoryHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SETHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void AnimEventTrigger_IntroFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ANIMEVENTTRIGGER_INTROFINISH_OFFSET))(nullptr);
		}

		::System::Void _PlayVictoryTimeline_b__83_0(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__PLAYVICTORYTIMELINE_B__83_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnEndOpenAnimation_g__ShowFriendApplicantPopup|135_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__ONENDOPENANIMATION_G__SHOWFRIENDAPPLICANTPOPUP|135_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _SkipToShowResult_g__CoSkip|129_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__SKIPTOSHOWRESULT_G__COSKIP|129_0_OFFSET))(nullptr);
		}

		::System::Void _OnSkipButtonClicked_b__130_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__ONSKIPBUTTONCLICKED_B__130_1_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GET_ISLEVELUP_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__94_7(UIRewardPopup* arg)
		{
			((::System::Void(*)(UIRewardPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__SHOWPOPUP_B__94_7_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateInfo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_UPDATEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void HideSummaryButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_HIDESUMMARYBUTTON_OFFSET))(nullptr);
		}

		::System::Void ActivateSkipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ACTIVATESKIPBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::BoxCollider* get_ResultBoxCollider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GET_RESULTBOXCOLLIDER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _CampaignTacticResultCustomAction_g__Process|90_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__CAMPAIGNTACTICRESULTCUSTOMACTION_G__PROCESS|90_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickShowResult_g__AfterCreatePopupList|113_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__ONCLICKSHOWRESULT_G__AFTERCREATEPOPUPLIST|113_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowPopup(PopupType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(PopupType*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SHOWPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void RequestTutorialAdventureResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_REQUESTTUTORIALADVENTURERESULT_OFFSET))(nullptr);
		}

		::System::Void Close(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CLOSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AnimEventTrigger_SkipReEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ANIMEVENTTRIGGER_SKIPREENABLE_OFFSET))(nullptr);
		}

		::System::Boolean RaidRewardCustomAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_RAIDREWARDCUSTOMACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnConfirmButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONCONFIRMBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void StartCoOpenPopups()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_STARTCOOPENPOPUPS_OFFSET))(nullptr);
		}

		::System::Void OnFullScreenButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONFULLSCREENBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void CheckShowLevelupPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_CHECKSHOWLEVELUPPOPUP_OFFSET))(nullptr);
		}

		UIVictoryHandler* get_VictoryHandler()
		{
			return ((UIVictoryHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GET_VICTORYHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetPointInfoLabel(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SETPOINTINFOLABEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetTimeAttackUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SETTIMEATTACKUI_OFFSET))(nullptr);
		}

		::System::Void InitCharacterInfo(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_INITCHARACTERINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GET_HASREWARD_OFFSET))(nullptr);
		}

		::System::Void RequestScenarioTacticResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_REQUESTSCENARIOTACTICRESULT_OFFSET))(nullptr);
		}

		::System::Void OnPrevButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONPREVBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__94_3(UILevelUpPopup* arg)
		{
			((::System::Void(*)(UILevelUpPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__SHOWPOPUP_B__94_3_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_StageContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GET_STAGECONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void _CoOpenPopups_b__93_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__COOPENPOPUPS_B__93_0_OFFSET))(nullptr);
		}

		::System::Void set_IsCampaignMainStageStrategySkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SET_ISCAMPAIGNMAINSTAGESTRATEGYSKIP_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowPopup_b__94_5(UIStageMissionPopup* arg)
		{
			((::System::Void(*)(UIStageMissionPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__SHOWPOPUP_B__94_5_OFFSET))(arg, nullptr);
		}

		::System::Void SetBattleTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SETBATTLETIME_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* UnloadBattle(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_UNLOADBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void ReorderFrontPanel(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_REORDERFRONTPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void InitPlayerInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_INITPLAYERINFO_OFFSET))(nullptr);
		}

		::System::Void _OnClickShowResult_b__113_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__ONCLICKSHOWRESULT_B__113_3_OFFSET))(nullptr);
		}

		::System::Void SetRewardData(Il2CppObject* arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SETREWARDDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AnimEventTrigger_ResultFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ANIMEVENTTRIGGER_RESULTFINISH_OFFSET))(nullptr);
		}

		::System::Void HidePopup(PopupType* arg)
		{
			((::System::Void(*)(PopupType*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_HIDEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void InitRaidData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_INITRAIDDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowRewardConfirmOnSkip(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_COSHOWREWARDCONFIRMONSKIP_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRaidResultSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONCLICKRAIDRESULTSKIP_OFFSET))(nullptr);
		}

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void _OnSummaryButtonClicked_b__123_1(UIPopup_BattleSummary_EchelonExtension* arg)
		{
			((::System::Void(*)(UIPopup_BattleSummary_EchelonExtension*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__ONSUMMARYBUTTONCLICKED_B__123_1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnSummaryButtonClicked_b__123_0(UIPopup_ArenaSummary* arg)
		{
			((::System::Void(*)(UIPopup_ArenaSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__ONSUMMARYBUTTONCLICKED_B__123_0_OFFSET))(arg, nullptr);
		}

		::UnityEngine::BoxCollider* get_SummaryBoxCollider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GET_SUMMARYBOXCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void PopupListAndroidBackButtonCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_POPUPLISTANDROIDBACKBUTTONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__94_1(UITacticClearRankPopup* arg)
		{
			((::System::Void(*)(UITacticClearRankPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__SHOWPOPUP_B__94_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkipButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONSKIPBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OnSkipButtonClicked_g__OnSkipped|130_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY__ONSKIPBUTTONCLICKED_G__ONSKIPPED|130_0_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleResultSkipType* get_BattleResultSkipType()
		{
			return ((::MX::Visual::Battles::BattleResultSkipType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_GET_BATTLERESULTSKIPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_VictoryHandler(UIVictoryHandler* arg)
		{
			((::System::Void(*)(UIVictoryHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_SET_VICTORYHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void InitWorldRaidData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_INITWORLDRAIDDATA_OFFSET))(nullptr);
		}

	};

