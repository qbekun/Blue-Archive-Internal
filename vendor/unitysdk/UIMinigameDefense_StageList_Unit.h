#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class StageClearIconPlayer;
class StageOpenConditionController;
namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace MX::GameLogic::DBModel { class MiniGameDefenseStageHistoryDB; }
class UIScenarioMode_EpisodePopup;
class UIPopup_MinigameDefense_StageInfo;

#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xB89B60)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT__ONCLICKOPENSTAGEPOPUP_B__16_3_OFFSET UNITYSDK_OFFSET(0xB89B70)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT__ONCLICKOPENSTAGEPOPUP_B__16_0_OFFSET UNITYSDK_OFFSET(0xB89BB0)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB89550)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_ONCLICKOPENSTAGEPOPUP_OFFSET UNITYSDK_OFFSET(0xB89C30)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_PLAYCLEARANIMATION_OFFSET UNITYSDK_OFFSET(0xB8A0E0)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB8A130)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xB8A250)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_CHECKNEWSTAGEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB8A260)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB8A280)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT__ONCLICKOPENSTAGEPOPUP_B__16_1_OFFSET UNITYSDK_OFFSET(0xB8A290)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT__ONCLICKOPENSTAGEPOPUP_B__16_2_OFFSET UNITYSDK_OFFSET(0xB8A2C0)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_CHECKLOCKOBJECTACTIVATION_OFFSET UNITYSDK_OFFSET(0xB89BF0)
#define UIMINIGAMEDEFENSE_STAGELIST_UNIT_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xB8A500)

	inline static constexpr unsigned int UIMinigameDefense_StageList_Unit_TypeDefinitionIndex = 546;

	class UIMinigameDefense_StageList_Unit : public Il2CppObject
	{
	public:
		MXButton* enterButton; // 0x18
		::UnityEngine::GameObject* lockObject; // 0x20
		UILabel* stageNameLabel; // 0x28
		::UnityEngine::GameObject* starsRoot; // 0x30
		::UnityEngine::GameObject* storyRoot; // 0x38
		::UnityEngine::GameObject* storyClearMark; // 0x40
		Il2CppObject* starsOn; // 0x48
		StageClearIconPlayer* starClearIconPlayer; // 0x50
		StageClearIconPlayer* storyClearIconPlayer; // 0x58
		StageOpenConditionController* stageOpenConditionController; // 0x60
		::MX::Data::MiniGameDefenseStageInfo* StageInfo; // 0x68
		::System::Boolean _isOpen_k__BackingField; // 0x70

		::System::Boolean get_isOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickOpenStagePopup_b__16_3(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT__ONCLICKOPENSTAGEPOPUP_B__16_3_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnClickOpenStagePopup_b__16_0(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT__ONCLICKOPENSTAGEPOPUP_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenStagePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_ONCLICKOPENSTAGEPOPUP_OFFSET))(nullptr);
		}

		::System::Single PlayClearAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_PLAYCLEARANIMATION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_isOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckNewStageUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_CHECKNEWSTAGEUNLOCKED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickOpenStagePopup_b__16_1(UIScenarioMode_EpisodePopup* arg)
		{
			((::System::Void(*)(UIScenarioMode_EpisodePopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT__ONCLICKOPENSTAGEPOPUP_B__16_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickOpenStagePopup_b__16_2(UIPopup_MinigameDefense_StageInfo* arg)
		{
			((::System::Void(*)(UIPopup_MinigameDefense_StageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT__ONCLICKOPENSTAGEPOPUP_B__16_2_OFFSET))(arg, nullptr);
		}

		::System::Void CheckLockObjectActivation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_CHECKLOCKOBJECTACTIVATION_OFFSET))(nullptr);
		}

		::System::Single PlayUnlockAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_UNIT_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

	};

