#pragma once
#include "unitysdk.h"

class UIWorldRaidBossInfo;
namespace UnityEngine { class GameObject; }
class MXButton;
class UIBossSkillViewer;
class UILabel;
namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace MX::Data { class WorldRaidBossGroupInfo; }
namespace MX::Data { class WorldRaidStageInfo; }
class UIPopup_WorldRaid_FormationInfo;

#define UIPOPUP_WORLDRAIDSCENARIOENTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBECA30)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_SETINFO_OFFSET UNITYSDK_OFFSET(0xBECA40)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBECA80)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBECAD0)
#define UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_G__RAIDENTERINTERNAL|23_3_OFFSET UNITYSDK_OFFSET(0xBED8E0)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_SETUI_OFFSET UNITYSDK_OFFSET(0xBECAF0)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xBEDDB0)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xBEDFD0)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_ONBACK_OFFSET UNITYSDK_OFFSET(0xBEDFE0)
#define UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKECHELONCONSTRAINTBUTTON_B__22_0_OFFSET UNITYSDK_OFFSET(0xBEDFF0)
#define UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_B__23_1_OFFSET UNITYSDK_OFFSET(0xBEE030)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_ONCLICKECHELONCONSTRAINTBUTTON_OFFSET UNITYSDK_OFFSET(0xBEE040)
#define UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_B__23_0_OFFSET UNITYSDK_OFFSET(0xBEE120)
#define UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_B__23_2_OFFSET UNITYSDK_OFFSET(0xBEE1B0)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xBEE290)
#define UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_G__RAIDENTERFAIL|23_4_OFFSET UNITYSDK_OFFSET(0xBEE1C0)
#define UIPOPUP_WORLDRAIDSCENARIOENTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xBEE4D0)

	inline static constexpr unsigned int UIPopup_WorldRaidScenarioEnter_TypeDefinitionIndex = 8735;

	class UIPopup_WorldRaidScenarioEnter : public Il2CppObject
	{
	public:
		UIWorldRaidBossInfo* uIWorldRaidBossInfo; // 0xD8
		::UnityEngine::GameObject* LastBossTag; // 0xE0
		::UnityEngine::GameObject* ClearTag; // 0xE8
		::UnityEngine::GameObject* AvailableFormationObject; // 0xF0
		MXButton* AvailableFormationButton; // 0xF8
		MXButton* AvailableFormationDisabledButton; // 0x100
		UIBossSkillViewer* SkillViewer; // 0x108
		::Il2CppArray<::System::Object*>* RewardCards; // 0x110
		UILabel* rewardEmptyLabel; // 0x118
		MXButton* EnterButton; // 0x120
		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* bossDB; // 0x128
		::MX::Data::WorldRaidSeasonInfo* seasonInfo; // 0x130
		::MX::Data::WorldRaidBossGroupInfo* groupInfo; // 0x138
		::MX::Data::WorldRaidStageInfo* currentStepstageInfo; // 0x140

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetInfo(::MX::Data::WorldRaidSeasonInfo* arg, ::MX::Data::WorldRaidBossGroupInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::MX::Data::WorldRaidBossGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_SETINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEnter_g__RaidEnterInternal|23_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_G__RAIDENTERINTERNAL|23_3_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_ONBACK_OFFSET))(nullptr);
		}

		::System::Void _OnClickEchelonConstraintButton_b__22_0(UIPopup_WorldRaid_FormationInfo* arg)
		{
			((::System::Void(*)(UIPopup_WorldRaid_FormationInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKECHELONCONSTRAINTBUTTON_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEnter_b__23_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_B__23_1_OFFSET))(nullptr);
		}

		::System::Void OnClickEchelonConstraintButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_ONCLICKECHELONCONSTRAINTBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnter_b__23_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_B__23_0_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnter_b__23_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_B__23_2_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnter_g__RaidEnterFail|23_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER__ONCLICKENTER_G__RAIDENTERFAIL|23_4_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDSCENARIOENTER_.CTOR_OFFSET))(nullptr);
		}

	};

