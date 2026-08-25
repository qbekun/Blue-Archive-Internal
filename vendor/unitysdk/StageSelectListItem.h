#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
class UILabel;
class UIGrid;
namespace UnityEngine { class GameObject; }
class MXButton;
class UITexture;
class CampaignMissionDisplay;
class StageClearIconPlayer;
namespace MX::Data { class LocalizeData; }
namespace FlatData { class StageDifficulty; }

#define STAGESELECTLISTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xB0E6D0)
#define STAGESELECTLISTITEM_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xB0E950)
#define STAGESELECTLISTITEM_ONCLICKDISABLE_OFFSET UNITYSDK_OFFSET(0xB0EBC0)
#define STAGESELECTLISTITEM_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0xB10CE0)
#define STAGESELECTLISTITEM__ONCLICKDISABLE_G__GETEVENTSTAGEDIFFICULTYTEXT|34_1_OFFSET UNITYSDK_OFFSET(0xB10C10)
#define STAGESELECTLISTITEM_ONCLICKREADYMENU_OFFSET UNITYSDK_OFFSET(0xB11360)
#define STAGESELECTLISTITEM_INITCLEARICONPLAYER_OFFSET UNITYSDK_OFFSET(0xB113F0)
#define STAGESELECTLISTITEM_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB116C0)
#define STAGESELECTLISTITEM_PLAYCLEARANIMATION_OFFSET UNITYSDK_OFFSET(0xB116E0)
#define STAGESELECTLISTITEM_SETSECRETSTONETEXTURE_OFFSET UNITYSDK_OFFSET(0xB11870)
#define STAGESELECTLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xB11BA0)
#define STAGESELECTLISTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB11BB0)

	inline static constexpr unsigned int StageSelectListItem_TypeDefinitionIndex = 8213;

	class StageSelectListItem : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* stageInfo; // 0x18
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* historyDB; // 0x20
		UILabel* StageNameLabel; // 0x28
		UILabel* IndexLabel; // 0x30
		UILabel* RecommnadLevelLabel; // 0x38
		UILabel* trNameLabel; // 0x40
		UILabel* hardStagePlayCountLabel; // 0x48
		UIGrid* hardStagePlayCountGrid; // 0x50
		::UnityEngine::GameObject* hardStagePlayCountParent; // 0x58
		MXButton* EnterButton; // 0x60
		MXButton* DisableButton; // 0x68
		UITexture* SecretStoneTexture; // 0x70
		::System::Int64 hardStagePlayCount; // 0x78
		CampaignMissionDisplay* missionDisplay_Cleared; // 0x80
		CampaignMissionDisplay* missionDisplay_WinCount; // 0x88
		CampaignMissionDisplay* missionDisplay_TurnCount; // 0x90
		StageClearIconPlayer* clearIconPlayer; // 0x98
		UIGrid* stageNameGrid; // 0xA0
		::UnityEngine::GameObject* scenarioMarkRoot; // 0xA8
		::UnityEngine::GameObject* bgRoot; // 0xB0
		::UnityEngine::GameObject* bgWarningRoot; // 0xB8
		::UnityEngine::GameObject* bgWarningExRoot; // 0xC0
		CampaignMissionDisplay* missionDisplay_StoryCleared; // 0xC8
		StageClearIconPlayer* storyClearIconPlayer; // 0xD0
		StageClearIconPlayer* storyBattleClearIconPlayer; // 0xD8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void OnClickDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_ONCLICKDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_REFRESHHISTORY_OFFSET))(arg, nullptr);
		}

		::System::String* _OnClickDisable_g__GetEventStageDifficultyText|34_1(::MX::Data::LocalizeData* arg, ::FlatData::StageDifficulty* arg2)
		{
			return ((::System::String*(*)(::MX::Data::LocalizeData*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM__ONCLICKDISABLE_G__GETEVENTSTAGEDIFFICULTYTEXT|34_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickReadyMenu()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_ONCLICKREADYMENU_OFFSET))(nullptr);
		}

		::System::Void InitClearIconPlayer(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_INITCLEARICONPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Single PlayClearAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_PLAYCLEARANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetSecretStoneTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_SETSECRETSTONETEXTURE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STAGESELECTLISTITEM_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

