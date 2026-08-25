#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace FlatData { class ScenarioModeTypes; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::AssetBundles { class LoadedSceneHandle; }
namespace MX::SaveData { class ScenarioModeContinueSaveDataV2; }
namespace MX::Data::Excel { class ScenarioModeExcel; }

#define SCENARIOMODETASK_GET_BATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x202C920)
#define SCENARIOMODETASK_SET_MODEID_OFFSET UNITYSDK_OFFSET(0x202C930)
#define SCENARIOMODETASK_GET_HASMODEID_OFFSET UNITYSDK_OFFSET(0x202C940)
#define SCENARIOMODETASK_GET_HASNARRATIVEFIELD_OFFSET UNITYSDK_OFFSET(0x202C950)
#define SCENARIOMODETASK_EXITONLOBBY_OFFSET UNITYSDK_OFFSET(0x202C960)
#define SCENARIOMODETASK_SET_STRATEGYID_OFFSET UNITYSDK_OFFSET(0x202CBE0)
#define SCENARIOMODETASK__ONFINISHFRONTSCENARIOS_G__FIELDLOADPROCESS|75_0_OFFSET UNITYSDK_OFFSET(0x202CBF0)
#define SCENARIOMODETASK_GET_FRONTFINISHED_OFFSET UNITYSDK_OFFSET(0x202CD70)
#define SCENARIOMODETASK_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x202CD80)
#define SCENARIOMODETASK_OPENERROREXIT_OFFSET UNITYSDK_OFFSET(0x202CD90)
#define SCENARIOMODETASK_SET_BACKFINISHED_OFFSET UNITYSDK_OFFSET(0x202CE80)
#define SCENARIOMODETASK_SHOULDSENDCLEARREQUEST_OFFSET UNITYSDK_OFFSET(0x202CE90)
#define SCENARIOMODETASK_ONFINISHBACKSCENARIOS_OFFSET UNITYSDK_OFFSET(0x202CEA0)
#define SCENARIOMODETASK_SET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x202D290)
#define SCENARIOMODETASK_SET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x202D2A0)
#define SCENARIOMODETASK_ONNARRATIVEFIELDEND_OFFSET UNITYSDK_OFFSET(0x202D2B0)
#define SCENARIOMODETASK_SET_CANCONTINUE_OFFSET UNITYSDK_OFFSET(0x202D430)
#define SCENARIOMODETASK_ONFINISHSCENARIOMIDCONTENT_OFFSET UNITYSDK_OFFSET(0x202D2C0)
#define SCENARIOMODETASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x202D6D0)
#define SCENARIOMODETASK_SET_BATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x202D6F0)
#define SCENARIOMODETASK_GETSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x202D700)
#define SCENARIOMODETASK_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x202D710)
#define SCENARIOMODETASK_SET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x202D9B0)
#define SCENARIOMODETASK_CLEARMODEINFO_OFFSET UNITYSDK_OFFSET(0x202CAF0)
#define SCENARIOMODETASK_GET_STRATEGYID_OFFSET UNITYSDK_OFFSET(0x202D9C0)
#define SCENARIOMODETASK_ONFINISHFRONTSCENARIOS_OFFSET UNITYSDK_OFFSET(0x202D9D0)
#define SCENARIOMODETASK_SET_FIELDFINISHED_OFFSET UNITYSDK_OFFSET(0x202E140)
#define SCENARIOMODETASK__ONFINISHFRONTSCENARIOS_B__75_5_OFFSET UNITYSDK_OFFSET(0x202E150)
#define SCENARIOMODETASK_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x202E170)
#define SCENARIOMODETASK_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x202E180)
#define SCENARIOMODETASK_GET_FIELDDATEID_OFFSET UNITYSDK_OFFSET(0x202E190)
#define SCENARIOMODETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x202E1A0)
#define SCENARIOMODETASK_SET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x202E290)
#define SCENARIOMODETASK_GET_BACKFINISHED_OFFSET UNITYSDK_OFFSET(0x202E2A0)
#define SCENARIOMODETASK_GET_CANCONTINUE_OFFSET UNITYSDK_OFFSET(0x202E2B0)
#define SCENARIOMODETASK__ONFINISHFRONTSCENARIOS_B__75_6_OFFSET UNITYSDK_OFFSET(0x202E2C0)
#define SCENARIOMODETASK_STARTSCENARIOMODEBYCONTINUEDATA_OFFSET UNITYSDK_OFFSET(0x201DCE0)
#define SCENARIOMODETASK_SET_FIELDDATEID_OFFSET UNITYSDK_OFFSET(0x202EBC0)
#define SCENARIOMODETASK_ONCACHEINFO_OFFSET UNITYSDK_OFFSET(0x202E5A0)
#define SCENARIOMODETASK_SET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x202EBD0)
#define SCENARIOMODETASK_SET_ISREPLAY_OFFSET UNITYSDK_OFFSET(0x202EBE0)
#define SCENARIOMODETASK_GET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x202EBF0)
#define SCENARIOMODETASK_GET_ISREPLAY_OFFSET UNITYSDK_OFFSET(0x202EC00)
#define SCENARIOMODETASK_CACHEMODEINFO_OFFSET UNITYSDK_OFFSET(0x202E390)
#define SCENARIOMODETASK_SET_HASMODEID_OFFSET UNITYSDK_OFFSET(0x202EC10)
#define SCENARIOMODETASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x202EC20)
#define SCENARIOMODETASK__ONFINISHFRONTSCENARIOS_G__ENTERFIELDINTERNAL|75_7_OFFSET UNITYSDK_OFFSET(0x202E320)
#define SCENARIOMODETASK_ENTERSTORYSTRATEGY_OFFSET UNITYSDK_OFFSET(0x202B1A0)
#define SCENARIOMODETASK_ONBATTLEVICTORY_OFFSET UNITYSDK_OFFSET(0x2029DD0)
#define SCENARIOMODETASK_ONBATTLEDEFEAT_OFFSET UNITYSDK_OFFSET(0x202EC30)
#define SCENARIOMODETASK_SET_FRONTFINISHED_OFFSET UNITYSDK_OFFSET(0x202ED80)
#define SCENARIOMODETASK_CLEARPROGRESS_OFFSET UNITYSDK_OFFSET(0x202C9F0)
#define SCENARIOMODETASK_STARTSCENARIOMODEFROMSTORYSTRATEGYCONTINUE_OFFSET UNITYSDK_OFFSET(0x201C2E0)
#define SCENARIOMODETASK_TUTORIALFINISHSCENARIOBATTLE_OFFSET UNITYSDK_OFFSET(0x202ED90)
#define SCENARIOMODETASK_GET_MODEID_OFFSET UNITYSDK_OFFSET(0x202EF90)
#define SCENARIOMODETASK_GET_FIELDFINISHED_OFFSET UNITYSDK_OFFSET(0x202EFA0)
#define SCENARIOMODETASK_TUTORIALSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x202EFB0)
#define SCENARIOMODETASK_RECORDPROGRESS_OFFSET UNITYSDK_OFFSET(0x202D440)
#define SCENARIOMODETASK_STARTSCENARIOMODE_OFFSET UNITYSDK_OFFSET(0x202F110)
#define SCENARIOMODETASK_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x202F1F0)

	inline static constexpr unsigned int ScenarioModeTask_TypeDefinitionIndex = 3210;

	class ScenarioModeTask : public Il2CppObject
	{
	public:
		::System::Boolean _HasModeId_k__BackingField; // 0x10
		::System::Int64 _ModeId_k__BackingField; // 0x18
		::System::Boolean _IsReplay_k__BackingField; // 0x20
		Il2CppObject* FrontGroups; // 0x28
		::System::Int64 _GroundId_k__BackingField; // 0x30
		::System::Int64 _StrategyId_k__BackingField; // 0x38
		::System::Int64 _BattleDuration_k__BackingField; // 0x40
		Il2CppObject* BackGroups; // 0x48
		::System::String* CompleteReportEventName; // 0x50
		::MX::Logic::Battles::Summary::BattleSummary* LastBattleSummary; // 0x58
		::System::Int64 _FixedEchelonId_k__BackingField; // 0x60
		::System::Boolean _IsDefeatBattle_k__BackingField; // 0x68
		::System::Boolean _FrontFinished_k__BackingField; // 0x69
		::System::Boolean _BattleFinished_k__BackingField; // 0x6A
		::System::Boolean _BackFinished_k__BackingField; // 0x6B
		::FlatData::ScenarioModeTypes* _ModeType_k__BackingField; // 0x6C
		::System::Boolean _CanContinue_k__BackingField; // 0x70
		::System::Int64 _FieldDateId_k__BackingField; // 0x78
		::System::Boolean _FieldFinished_k__BackingField; // 0x80
		::System::String* FirstClearFunnelMessage; // 0x88

		::System::Boolean get_BattleFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_BATTLEFINISHED_OFFSET))(nullptr);
		}

		::System::Void set_ModeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_MODEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasModeId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_HASMODEID_OFFSET))(nullptr);
		}

		::System::Boolean get_HasNarrativeField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_HASNARRATIVEFIELD_OFFSET))(nullptr);
		}

		::System::Void ExitOnLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_EXITONLOBBY_OFFSET))(nullptr);
		}

		::System::Void set_StrategyId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_STRATEGYID_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* _OnFinishFrontScenarios_g__FieldLoadProcess|75_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK__ONFINISHFRONTSCENARIOS_G__FIELDLOADPROCESS|75_0_OFFSET))(nullptr);
		}

		::System::Boolean get_FrontFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_FRONTFINISHED_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_ModeType()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_MODETYPE_OFFSET))(nullptr);
		}

		::System::Void OpenErrorExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_OPENERROREXIT_OFFSET))(nullptr);
		}

		::System::Void set_BackFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_BACKFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSendClearRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SHOULDSENDCLEARREQUEST_OFFSET))(nullptr);
		}

		::System::Void OnFinishBackScenarios()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_ONFINISHBACKSCENARIOS_OFFSET))(nullptr);
		}

		::System::Void set_BattleDuration(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_BATTLEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_FixedEchelonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_FIXEDECHELONID_OFFSET))(arg, nullptr);
		}

		::System::Void OnNarrativeFieldEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_ONNARRATIVEFIELDEND_OFFSET))(nullptr);
		}

		::System::Void set_CanContinue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_CANCONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnFinishScenarioMidContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_ONFINISHSCENARIOMIDCONTENT_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void set_BattleFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_BATTLEFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetScenarioModeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GETSCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Void StartBattle(::System::Int32 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_STARTBATTLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_IsDefeatBattle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_ISDEFEATBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearModeInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_CLEARMODEINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_StrategyId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_STRATEGYID_OFFSET))(nullptr);
		}

		::System::Void OnFinishFrontScenarios()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_ONFINISHFRONTSCENARIOS_OFFSET))(nullptr);
		}

		::System::Void set_FieldFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_FIELDFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnFinishFrontScenarios_b__75_5(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK__ONFINISHFRONTSCENARIOS_B__75_5_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_FIELDDATEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GroundId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_GROUNDID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_BackFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_BACKFINISHED_OFFSET))(nullptr);
		}

		::System::Boolean get_CanContinue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_CANCONTINUE_OFFSET))(nullptr);
		}

		::System::Void _OnFinishFrontScenarios_b__75_6(::MX::AssetBundles::LoadedSceneHandle* arg)
		{
			((::System::Void(*)(::MX::AssetBundles::LoadedSceneHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK__ONFINISHFRONTSCENARIOS_B__75_6_OFFSET))(arg, nullptr);
		}

		::System::Void StartScenarioModeByContinueData(::MX::SaveData::ScenarioModeContinueSaveDataV2* arg)
		{
			((::System::Void(*)(::MX::SaveData::ScenarioModeContinueSaveDataV2*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_STARTSCENARIOMODEBYCONTINUEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_FieldDateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_FIELDDATEID_OFFSET))(arg, nullptr);
		}

		::System::Void OnCacheInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_ONCACHEINFO_OFFSET))(nullptr);
		}

		::System::Void set_ModeType(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_MODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsReplay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_ISREPLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDefeatBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_ISDEFEATBATTLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_ISREPLAY_OFFSET))(nullptr);
		}

		::System::Void CacheModeInfo(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_CACHEMODEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasModeId(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_HASMODEID_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void _OnFinishFrontScenarios_g__EnterFieldInternal|75_7()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK__ONFINISHFRONTSCENARIOS_G__ENTERFIELDINTERNAL|75_7_OFFSET))(nullptr);
		}

		::System::Void EnterStoryStrategy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_ENTERSTORYSTRATEGY_OFFSET))(nullptr);
		}

		::System::Void OnBattleVictory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_ONBATTLEVICTORY_OFFSET))(nullptr);
		}

		::System::Void OnBattleDefeat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_ONBATTLEDEFEAT_OFFSET))(nullptr);
		}

		::System::Void set_FrontFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_SET_FRONTFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void ClearProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_CLEARPROGRESS_OFFSET))(nullptr);
		}

		::System::Void StartScenarioModeFromStoryStrategyContinue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_STARTSCENARIOMODEFROMSTORYSTRATEGYCONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Void TutorialFinishScenarioBattle(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_TUTORIALFINISHSCENARIOBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ModeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_MODEID_OFFSET))(nullptr);
		}

		::System::Boolean get_FieldFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_FIELDFINISHED_OFFSET))(nullptr);
		}

		::System::Void TutorialStartBattle(::System::Int64 arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_TUTORIALSTARTBATTLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RecordProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_RECORDPROGRESS_OFFSET))(nullptr);
		}

		::System::Void StartScenarioMode(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_STARTSCENARIOMODE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODETASK_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

	};

