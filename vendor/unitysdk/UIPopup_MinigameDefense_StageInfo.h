#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UISprite;
class CampaignMissionDisplay;
class UIAdmissionDisplay;
class UIScrollView;
class UIGrid;
class UISmallParcelCard;
class ButtonActivator;
namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace MX::GameLogic::DBModel { class MiniGameDefenseStageHistoryDB; }
namespace UnityEngine { class Coroutine; }
class UIPopup_StageTip;
class UIPopup_ChallengeMission;
class UIEnemyInfoPopup;

#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_REFRESHNAVIGATEBUTTON_OFFSET UNITYSDK_OFFSET(0xB8AF70)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_REFRESHADMISSION_OFFSET UNITYSDK_OFFSET(0xB8B140)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_GETMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xB8B2D0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKENEMYINFOBUTTON_OFFSET UNITYSDK_OFFSET(0xB8B430)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKMAX_OFFSET UNITYSDK_OFFSET(0xB8B510)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKNEXTSTAGEBUTTON_OFFSET UNITYSDK_OFFSET(0xB8B7D0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_SETREWARDS_OFFSET UNITYSDK_OFFSET(0xB8BA80)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO__ONCLICKSTAGETIPBUTTON_B__64_0_OFFSET UNITYSDK_OFFSET(0xB8C2D0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xB8C300)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_SET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xB8B540)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKMIN_OFFSET UNITYSDK_OFFSET(0xB8D210)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO__ONCLICKCHALLANGELISTBUTTON_B__63_0_OFFSET UNITYSDK_OFFSET(0xB8D230)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xB8D260)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_COONMULTIPLIERBUTTON_OFFSET UNITYSDK_OFFSET(0xB8D300)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKINCREASEONE_OFFSET UNITYSDK_OFFSET(0xB8D3A0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB8D3D0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONPRESSDECREASE_OFFSET UNITYSDK_OFFSET(0xB8D400)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_REFRESHSTARGOALDISPLAY_OFFSET UNITYSDK_OFFSET(0xB8D4A0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKSTAGETIPBUTTON_OFFSET UNITYSDK_OFFSET(0xB8DAE0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKRANKINFOBUTTON_OFFSET UNITYSDK_OFFSET(0xB8DBC0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xB8C1E0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO__SETDATA_B__57_0_OFFSET UNITYSDK_OFFSET(0xB8DD20)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_MOVETOPREVNEXTSTAGE_OFFSET UNITYSDK_OFFSET(0xB8B7E0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xB8A2F0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO__ONCLICKENEMYINFOBUTTON_B__60_0_OFFSET UNITYSDK_OFFSET(0xB8DD70)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xB8DDA0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_GET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xB8DE30)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKPREVSTAGEBUTTON_OFFSET UNITYSDK_OFFSET(0xB8DE40)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONPRESSINCREASE_OFFSET UNITYSDK_OFFSET(0xB8DE50)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKDECREASEONE_OFFSET UNITYSDK_OFFSET(0xB8DEF0)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB8DF20)
#define UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKCHALLANGELISTBUTTON_OFFSET UNITYSDK_OFFSET(0xB8E530)

	inline static constexpr unsigned int UIPopup_MinigameDefense_StageInfo_TypeDefinitionIndex = 551;

	class UIPopup_MinigameDefense_StageInfo : public Il2CppObject
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
		UILabel* recommendedLevelLabel; // 0x118
		UISprite* stageThemeIcon; // 0x120
		UISprite* warFogIcon; // 0x128
		UISprite* subStageIcon; // 0x130
		::UnityEngine::GameObject* missionDisplayRoot; // 0x138
		::UnityEngine::GameObject* emptyStarGoalDisplay; // 0x140
		CampaignMissionDisplay* missionDisplay_Cleared; // 0x148
		CampaignMissionDisplay* missionDisplay_WinCount; // 0x150
		CampaignMissionDisplay* missionDisplay_TurnCount; // 0x158
		MXButton* rankInfoButton; // 0x160
		MXButton* challengeListButton; // 0x168
		MXButton* stageTipButton; // 0x170
		UIAdmissionDisplay* admissionDisplay; // 0x178
		UIScrollView* rewardListScrollView; // 0x180
		UIGrid* rewardGrid; // 0x188
		UISmallParcelCard* rewardListItemPrefab; // 0x190
		UILabel* rewardEmptyLabel; // 0x198
		Il2CppObject* rewardParcels; // 0x1A0
		UILabel* multiplierText; // 0x1A8
		::UnityEngine::GameObject* multiplierLock; // 0x1B0
		::UnityEngine::GameObject* challengeMultiplierLock; // 0x1B8
		ButtonActivator* decreaseOne; // 0x1C0
		ButtonActivator* increaseOne; // 0x1C8
		ButtonActivator* minButton; // 0x1D0
		ButtonActivator* maxButton; // 0x1D8
		::System::Single multiplierCountAccumSpeed; // 0x1E0
		MXButton* clearDeckButton; // 0x1E8
		::MX::Data::MiniGameDefenseStageInfo* stageInfo; // 0x1F0
		::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* stageHistoryDB; // 0x1F8
		::System::Int64 multiplier; // 0x200
		::System::Int64 multiplierMax; // 0x208
		::UnityEngine::Coroutine* longPressCoroutine; // 0x210

		::System::Void RefreshNavigateButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_REFRESHNAVIGATEBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshAdmission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_REFRESHADMISSION_OFFSET))(nullptr);
		}

		::System::Int64 GetMaxSweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_GETMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnClickEnemyInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKENEMYINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKMAX_OFFSET))(nullptr);
		}

		::System::Void OnClickNextStageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKNEXTSTAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_SETREWARDS_OFFSET))(nullptr);
		}

		::System::Void _OnClickStageTipButton_b__64_0(UIPopup_StageTip* arg)
		{
			((::System::Void(*)(UIPopup_StageTip*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO__ONCLICKSTAGETIPBUTTON_B__64_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_Multiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_SET_MULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKMIN_OFFSET))(nullptr);
		}

		::System::Void _OnClickChallangeListButton_b__63_0(UIPopup_ChallengeMission* arg)
		{
			((::System::Void(*)(UIPopup_ChallengeMission*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO__ONCLICKCHALLANGELISTBUTTON_B__63_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOnMultiplierButton(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_COONMULTIPLIERBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickIncreaseOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKINCREASEONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPressDecrease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONPRESSDECREASE_OFFSET))(nullptr);
		}

		::System::Void RefreshStarGoalDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_REFRESHSTARGOALDISPLAY_OFFSET))(nullptr);
		}

		::System::Void OnClickStageTipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKSTAGETIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickRankInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKRANKINFOBUTTON_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Boolean _SetData_b__57_0(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO__SETDATA_B__57_0_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToPrevNextStage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_MOVETOPREVNEXTSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEnemyInfoButton_b__60_0(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO__ONCLICKENEMYINFOBUTTON_B__60_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Int64 get_Multiplier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_GET_MULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void OnClickPrevStageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKPREVSTAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnPressIncrease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONPRESSINCREASE_OFFSET))(nullptr);
		}

		::System::Void OnClickDecreaseOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKDECREASEONE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickChallangeListButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEDEFENSE_STAGEINFO_ONCLICKCHALLANGELISTBUTTON_OFFSET))(nullptr);
		}

	};

