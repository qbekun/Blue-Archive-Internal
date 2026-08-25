#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UISprite;
class CampaignMissionDisplay;
class UIGrid;
class UIAdmissionDisplay;
class UIScrollView;
class UISmallParcelCard;
class StageSweep;
class ButtonActivator;
namespace UnityEngine { class Transform; }
class BoolTabController;
namespace UnityEngine { class Animation; }
class StageInfoPopupSettings;
class CampaignMainStageStrategySkipInfo;
namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
class TooltipTargetParcelTracker;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_HardPlayCountRecover;
class UIPopup_System;
class UIEnemyInfoPopup;
class UIPopup_ChallengeMission;
class UIPopup_StageTip;

#define UIPOPUP_STAGEINFO_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x2735BB0)
#define UIPOPUP_STAGEINFO_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x2735BC0)
#define UIPOPUP_STAGEINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2735BD0)
#define UIPOPUP_STAGEINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27367A0)
#define UIPOPUP_STAGEINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2736A30)
#define UIPOPUP_STAGEINFO_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x2736D20)
#define UIPOPUP_STAGEINFO_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x2736DB0)
#define UIPOPUP_STAGEINFO_SPECIALOPERATIONEVENTFREESTAGECHECK_OFFSET UNITYSDK_OFFSET(0x2737A20)
#define UIPOPUP_STAGEINFO_ENTERSTAGE_OFFSET UNITYSDK_OFFSET(0x2737AE0)
#define UIPOPUP_STAGEINFO_ONCLICKENEMYINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x2738720)
#define UIPOPUP_STAGEINFO_ONCLICKPREVSTAGEBUTTON_OFFSET UNITYSDK_OFFSET(0x2738800)
#define UIPOPUP_STAGEINFO_MOVETOPREVNEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x2738830)
#define UIPOPUP_STAGEINFO_ONCLICKNEXTSTAGEBUTTON_OFFSET UNITYSDK_OFFSET(0x2739630)
#define UIPOPUP_STAGEINFO_ONCLICKRANKINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x2739660)
#define UIPOPUP_STAGEINFO_ONCLICKCHALLANGELISTBUTTON_OFFSET UNITYSDK_OFFSET(0x27397C0)
#define UIPOPUP_STAGEINFO_ONCLICKSTAGETIPBUTTON_OFFSET UNITYSDK_OFFSET(0x27398A0)
#define UIPOPUP_STAGEINFO_REFRESHADMISSION_OFFSET UNITYSDK_OFFSET(0x2739980)
#define UIPOPUP_STAGEINFO_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2739EC0)
#define UIPOPUP_STAGEINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x273A120)
#define UIPOPUP_STAGEINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x273A810)
#define UIPOPUP_STAGEINFO_SETDATASTRATEGYSKIP_OFFSET UNITYSDK_OFFSET(0x273A5D0)
#define UIPOPUP_STAGEINFO_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x273A8A0)
#define UIPOPUP_STAGEINFO_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0x273A980)
#define UIPOPUP_STAGEINFO_REFRESHSTARGOALDISPLAY_OFFSET UNITYSDK_OFFSET(0x273AAA0)
#define UIPOPUP_STAGEINFO_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x273B290)
#define UIPOPUP_STAGEINFO_HANDLECAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x273B2B0)
#define UIPOPUP_STAGEINFO_HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x273B3C0)
#define UIPOPUP_STAGEINFO_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x273B530)
#define UIPOPUP_STAGEINFO_COSTRATEGYSKIPUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x273B840)
#define UIPOPUP_STAGEINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0x273B8D0)
#define UIPOPUP_STAGEINFO_REFRESHSTRATEGYSKIPTAB_OFFSET UNITYSDK_OFFSET(0x273C9F0)
#define UIPOPUP_STAGEINFO_ONCHANGESTRATEGYSKIPTAB_OFFSET UNITYSDK_OFFSET(0x273CBC0)
#define UIPOPUP_STAGEINFO_REFRESHSTRATEGYSKIPTABCONTENT_OFFSET UNITYSDK_OFFSET(0x273CB90)
#define UIPOPUP_STAGEINFO_REFRESHLEFTBUTTONGRID_OFFSET UNITYSDK_OFFSET(0x273CDD0)
#define UIPOPUP_STAGEINFO_REFRESHCLEARDECKBUTTON_OFFSET UNITYSDK_OFFSET(0x273C780)
#define UIPOPUP_STAGEINFO_ONCLICKCLEARDECK_OFFSET UNITYSDK_OFFSET(0x273D2E0)
#define UIPOPUP_STAGEINFO_REFRESHNAVIGATEBUTTON_OFFSET UNITYSDK_OFFSET(0x273BF20)
#define UIPOPUP_STAGEINFO_SETREWARD_OFFSET UNITYSDK_OFFSET(0x273CFA0)
#define UIPOPUP_STAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x273D430)
#define UIPOPUP_STAGEINFO__AWAKE_B__45_0_OFFSET UNITYSDK_OFFSET(0x273D500)
#define UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_G__ONCLICKOK|49_0_OFFSET UNITYSDK_OFFSET(0x2737050)
#define UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_3_OFFSET UNITYSDK_OFFSET(0x273D510)
#define UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_5_OFFSET UNITYSDK_OFFSET(0x273D540)
#define UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_8_OFFSET UNITYSDK_OFFSET(0x273D5E0)
#define UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_6_OFFSET UNITYSDK_OFFSET(0x273D610)
#define UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_7_OFFSET UNITYSDK_OFFSET(0x273D6A0)
#define UIPOPUP_STAGEINFO__ONCLICKENEMYINFOBUTTON_B__52_0_OFFSET UNITYSDK_OFFSET(0x273D730)
#define UIPOPUP_STAGEINFO__ONCLICKCHALLANGELISTBUTTON_B__57_0_OFFSET UNITYSDK_OFFSET(0x273D770)
#define UIPOPUP_STAGEINFO__ONCLICKSTAGETIPBUTTON_B__58_0_OFFSET UNITYSDK_OFFSET(0x273D7A0)
#define UIPOPUP_STAGEINFO__HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__69_0_OFFSET UNITYSDK_OFFSET(0x273D7D0)

	inline static constexpr unsigned int UIPopup_StageInfo_TypeDefinitionIndex = 7217;

	class UIPopup_StageInfo : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* okButton; // 0xE0
		MXButton* enemyInfoButton; // 0xE8
		MXButton* prevStageButton; // 0xF0
		MXButton* nextStageButton; // 0xF8
		UILabel* stageNameLabel; // 0x100
		UILabel* stageIndexLabel; // 0x108
		::UnityEngine::GameObject* recommandedLevelRoot; // 0x110
		UILabel* recommandedLevelLabel; // 0x118
		UISprite* stageThemeIcon; // 0x120
		UISprite* warFogIcon; // 0x128
		UISprite* subStageIcon; // 0x130
		::UnityEngine::GameObject* missionDisplayRoot; // 0x138
		::UnityEngine::GameObject* emptyStarGoalDisplay; // 0x140
		CampaignMissionDisplay* missionDisplay_Cleared; // 0x148
		CampaignMissionDisplay* missionDisplay_WinCount; // 0x150
		CampaignMissionDisplay* missionDisplay_TurnCount; // 0x158
		UIGrid* leftButtonsGrid; // 0x160
		::UnityEngine::GameObject* rankInfoButtonRoot; // 0x168
		MXButton* rankInfoButton; // 0x170
		MXButton* challengeListButton; // 0x178
		UILabel* trStageNumLabel; // 0x180
		UIAdmissionDisplay* normalAdmissionDisplay; // 0x188
		UIAdmissionDisplay* hardAdmissionDisplay; // 0x190
		UIScrollView* rewardListScrollView; // 0x198
		UIGrid* rewardListGrid; // 0x1A0
		UISmallParcelCard* rewardListItemPrefab; // 0x1A8
		StageSweep* stageSweep; // 0x1B0
		::UnityEngine::GameObject* stageSweepDisableRoot; // 0x1B8
		::UnityEngine::GameObject* rewardEmptyLabel; // 0x1C0
		ButtonActivator* clearDeckButton; // 0x1C8
		MXButton* stageTipButton; // 0x1D0
		::UnityEngine::Transform* strategySkipTabRoot; // 0x1D8
		BoolTabController* strategySkipTabController; // 0x1E0
		::UnityEngine::GameObject* strategySkipLock; // 0x1E8
		::UnityEngine::Animation* strategySkipUnlockAnimation; // 0x1F0
		Il2CppObject* rewardListItmeList; // 0x1F8
		StageInfoPopupSettings* settings; // 0x200
		CampaignMainStageStrategySkipInfo* campaignMainStageStrategySkipInfo; // 0x230
		::System::Boolean needSyncBySweep; // 0x238

		::MX::Data::CampaignStageInfo* get_stageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_stageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean SpecialOperationEventFreeStageCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_SPECIALOPERATIONEVENTFREESTAGECHECK_OFFSET))(nullptr);
		}

		::System::Void EnterStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ENTERSTAGE_OFFSET))(nullptr);
		}

		::System::Void OnClickEnemyInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLICKENEMYINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickPrevStageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLICKPREVSTAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void MoveToPrevNextStage(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_MOVETOPREVNEXTSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickNextStageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLICKNEXTSTAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickRankInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLICKRANKINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickChallangeListButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLICKCHALLANGELISTBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickStageTipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLICKSTAGETIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshAdmission(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_REFRESHADMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, TooltipTargetParcelTracker* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, TooltipTargetParcelTracker*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetData(StageInfoPopupSettings* arg)
		{
			((::System::Void(*)(StageInfoPopupSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataStrategySkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_SETDATASTRATEGYSKIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleContentSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_REFRESHHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshStarGoalDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_REFRESHSTARGOALDISPLAY_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignPurchasePlayCountHardStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_HANDLECAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentPurchasePlayCountHardStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoStrategySkipUnlockAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_COSTRATEGYSKIPUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshStrategySkipTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_REFRESHSTRATEGYSKIPTAB_OFFSET))(nullptr);
		}

		::System::Void OnChangeStrategySkipTab(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCHANGESTRATEGYSKIPTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshStrategySkipTabContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_REFRESHSTRATEGYSKIPTABCONTENT_OFFSET))(nullptr);
		}

		::System::Void RefreshLeftButtonGrid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_REFRESHLEFTBUTTONGRID_OFFSET))(nullptr);
		}

		::System::Void RefreshClearDeckButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_REFRESHCLEARDECKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickClearDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_ONCLICKCLEARDECK_OFFSET))(nullptr);
		}

		::System::Void RefreshNavigateButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_REFRESHNAVIGATEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetReward(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_SETREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__45_0(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__AWAKE_B__45_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickOkButton_g__OnClickOk|49_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_G__ONCLICKOK|49_0_OFFSET))(nullptr);
		}

		::System::Void _OnClickOkButton_b__49_3(UIPopup_HardPlayCountRecover* arg)
		{
			((::System::Void(*)(UIPopup_HardPlayCountRecover*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_3_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickOkButton_b__49_5(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_5_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickOkButton_b__49_8()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_8_OFFSET))(nullptr);
		}

		::System::Void _OnClickOkButton_b__49_6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_6_OFFSET))(nullptr);
		}

		::System::Void _OnClickOkButton_b__49_7()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__ONCLICKOKBUTTON_B__49_7_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfoButton_b__52_0(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__ONCLICKENEMYINFOBUTTON_B__52_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickChallangeListButton_b__57_0(UIPopup_ChallengeMission* arg)
		{
			((::System::Void(*)(UIPopup_ChallengeMission*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__ONCLICKCHALLANGELISTBUTTON_B__57_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickStageTipButton_b__58_0(UIPopup_StageTip* arg)
		{
			((::System::Void(*)(UIPopup_StageTip*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__ONCLICKSTAGETIPBUTTON_B__58_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _HandleEventContentPurchasePlayCountHardStageResponseMessage_b__69_0(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGEINFO__HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__69_0_OFFSET))(arg, nullptr);
		}

	};

