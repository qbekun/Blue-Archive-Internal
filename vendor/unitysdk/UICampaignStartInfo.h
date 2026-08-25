#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace MX::Data { class CampaignStageInfo; }
class CampaignMissionDisplay;
class UIScrollView;
class UIGrid;
class UISmallParcelCard;
class UIEnemyInfoPopup;
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
class UIPopup_ChallengeMission;
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define UICAMPAIGNSTARTINFO_ONCLICKCHALLENGELIST_OFFSET UNITYSDK_OFFSET(0x22AA6D0)
#define UICAMPAIGNSTARTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x22AA7B0)
#define UICAMPAIGNSTARTINFO__ONCLICKENEMYINFO_B__35_0_OFFSET UNITYSDK_OFFSET(0x22AA830)
#define UICAMPAIGNSTARTINFO_ONCLICKRETREAT_OFFSET UNITYSDK_OFFSET(0x22AA860)
#define UICAMPAIGNSTARTINFO_OPENCAMPAIGNINFO_OFFSET UNITYSDK_OFFSET(0x22AAAD0)
#define UICAMPAIGNSTARTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x22AB5A0)
#define UICAMPAIGNSTARTINFO_ONCLICKENEMYINFO_OFFSET UNITYSDK_OFFSET(0x22ABBE0)
#define UICAMPAIGNSTARTINFO_CLOSE_OFFSET UNITYSDK_OFFSET(0x22AA9E0)
#define UICAMPAIGNSTARTINFO__ONCLICKCHALLENGELIST_B__37_0_OFFSET UNITYSDK_OFFSET(0x22ABCC0)
#define UICAMPAIGNSTARTINFO_SETREWARD_OFFSET UNITYSDK_OFFSET(0x22AB2E0)
#define UICAMPAIGNSTARTINFO_ONCLICKRANKINFO_OFFSET UNITYSDK_OFFSET(0x22ABCF0)
#define UICAMPAIGNSTARTINFO_ONCLICKRESTART_OFFSET UNITYSDK_OFFSET(0x22ABE50)

	inline static constexpr unsigned int UICampaignStartInfo_TypeDefinitionIndex = 4756;

	class UICampaignStartInfo : public Il2CppObject
	{
	public:
		UILabel* StageName; // 0x18
		UILabel* StageNumber; // 0x20
		UISprite* StageThemeIcon; // 0x28
		UILabel* RecommandLevel; // 0x30
		::Il2CppArray<::System::Object*>* ClearConditions; // 0x38
		::Il2CppArray<::System::Object*>* FailConditions; // 0x40
		::Il2CppArray<::System::Object*>* Turns; // 0x48
		::Il2CppArray<::System::Object*>* SquadCounts; // 0x50
		::UnityEngine::GameObject* NormalInfoRoot; // 0x58
		::UnityEngine::GameObject* ScenarioInfoRoot; // 0x60
		MXButton* ButtonX; // 0x68
		MXButton* ButtonOk; // 0x70
		::UnityEngine::GameObject* ButtonDisable; // 0x78
		MXButton* ButtonRetreat; // 0x80
		MXButton* rankInfoButton; // 0x88
		MXButton* enemyInfoButton; // 0x90
		MXButton* restartButton; // 0x98
		::UnityEngine::GameObject* restartDisable; // 0xA0
		::System::Int32 HideTurn; // 0x0
		::System::Boolean TacticStart; // 0xA8
		::MX::Data::CampaignStageInfo* stageInfo; // 0xB0
		CampaignMissionDisplay* missionDisplay_Cleared; // 0xB8
		CampaignMissionDisplay* missionDisplay_WinCount; // 0xC0
		CampaignMissionDisplay* missionDisplay_TurnCount; // 0xC8
		MXButton* challengeListButton; // 0xD0
		UIScrollView* rewardListScrollView; // 0xD8
		UIGrid* rewardListGrid; // 0xE0
		UISmallParcelCard* rewardListItemPrefab; // 0xE8
		Il2CppObject* rewardListItmeList; // 0xF0

		::System::Void OnClickChallengeList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_ONCLICKCHALLENGELIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfo_b__35_0(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO__ONCLICKENEMYINFO_B__35_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRetreat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_ONCLICKRETREAT_OFFSET))(nullptr);
		}

		::System::Void OpenCampaignInfo(::MX::Data::CampaignStageInfo* arg, ::System::Boolean arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Boolean, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_OPENCAMPAIGNINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickEnemyInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_ONCLICKENEMYINFO_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _OnClickChallengeList_b__37_0(UIPopup_ChallengeMission* arg)
		{
			((::System::Void(*)(UIPopup_ChallengeMission*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO__ONCLICKCHALLENGELIST_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetReward(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_SETREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickRankInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_ONCLICKRANKINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickRestart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSTARTINFO_ONCLICKRESTART_OFFSET))(nullptr);
		}

	};

