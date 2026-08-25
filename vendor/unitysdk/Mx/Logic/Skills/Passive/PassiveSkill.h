#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Data { class PassiveTriggerEvent; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class EchelonConstraint; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills::Passive { class PassiveSkillTargetType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::GameData::DAO::Battle { class PassiveSkillDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1403760)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1403770)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_MAXEXECUTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1403780)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_STARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0x14037F0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_REUSECOOLTIME_OFFSET UNITYSDK_OFFSET(0x1403800)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1403810)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x1403820)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGEREXPRESSIONTEXT_OFFSET UNITYSDK_OFFSET(0x1403830)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGERPARAMETERSTEXT_OFFSET UNITYSDK_OFFSET(0x1403840)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGERRATE_OFFSET UNITYSDK_OFFSET(0x1403850)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_ECHELONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1403860)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_MAXTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1403880)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRYCOUNT_OFFSET UNITYSDK_OFFSET(0x1403890)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_COOLTIMENOTTRIGGER_OFFSET UNITYSDK_OFFSET(0x14038A0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_RESETTRYCOUNTUSESKILL_OFFSET UNITYSDK_OFFSET(0x14038B0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_CURRENTTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x14038C0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_CURRENTTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x14038D0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_CURRENTTRYCOUNT_OFFSET UNITYSDK_OFFSET(0x14038E0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_CURRENTTRYCOUNT_OFFSET UNITYSDK_OFFSET(0x14038F0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_CURRENTCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1403900)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_CURRENTCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1403910)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_LASTTRIGGERFRAME_OFFSET UNITYSDK_OFFSET(0x1403920)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_LASTTRIGGERFRAME_OFFSET UNITYSDK_OFFSET(0x1403930)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1403940)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1403950)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TARGETSIDE_OFFSET UNITYSDK_OFFSET(0x1403960)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGERSOURCESORTRULE_OFFSET UNITYSDK_OFFSET(0x14039B0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGERSOURCECANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x14039E0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_REMAINEDCOOLTIMENOTTRIGGERFRAME_OFFSET UNITYSDK_OFFSET(0x1403A10)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_REMAINEDCOOLTIMENOTTRIGGERFRAME_OFFSET UNITYSDK_OFFSET(0x1403A20)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TIMELINEDURATION_OFFSET UNITYSDK_OFFSET(0x1403A30)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_SKILLTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1403A40)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_ENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x1403A50)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1403A60)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SETTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1403490)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_INCREASETRYCOUNT_OFFSET UNITYSDK_OFFSET(0x1403480)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1404190)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_ENABLE_OFFSET UNITYSDK_OFFSET(0x1404210)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_FINDTRIGGERSOURCES_OFFSET UNITYSDK_OFFSET(0x1404240)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1404430)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_EQUALS_OFFSET UNITYSDK_OFFSET(0x14044D0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1404530)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int PassiveSkill_TypeDefinitionIndex = 14668;

	class PassiveSkill : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* _Owner_k__BackingField; // 0x18
		::System::Int32 _StartCooltime_k__BackingField; // 0x20
		::System::Int32 _ReuseCooltime_k__BackingField; // 0x24
		::System::Int32 _Duration_k__BackingField; // 0x28
		::MX::Logic::Data::PassiveTriggerEvent* _TriggerEvent_k__BackingField; // 0x2C
		::System::String* _TriggerExpressionText_k__BackingField; // 0x30
		::System::String* _TriggerParametersText_k__BackingField; // 0x38
		::MX::Core::Math::BasisPoint* _TriggerRate_k__BackingField; // 0x40
		::MX::Logic::Data::EchelonConstraint* _EchelonConstraint_k__BackingField; // 0x48
		::System::Int32 _MaxTriggerCount_k__BackingField; // 0x60
		::System::Int32 _TryCount_k__BackingField; // 0x64
		::System::Int64 _CoolTimeNotTrigger_k__BackingField; // 0x68
		::System::Boolean _ResetTryCountUseSkill_k__BackingField; // 0x70
		::System::Int32 _CurrentTriggerCount_k__BackingField; // 0x74
		::System::Int32 _CurrentTryCount_k__BackingField; // 0x78
		::System::Int32 _CurrentCooltime_k__BackingField; // 0x7C
		::System::Int32 _LastTriggerFrame_k__BackingField; // 0x80
		::System::Int32 _Elapsed_k__BackingField; // 0x84
		::System::Boolean isTriggered; // 0x88
		::MX::Logic::Skills::TargetSortRule* _TriggerSourceSortRule_k__BackingField; // 0x90
		::MX::Logic::Skills::TargetCandidateRule* _TriggerSourceCandidateRule_k__BackingField; // 0xB8
		::System::Int64 _RemainedCoolTimeNotTriggerFrame_k__BackingField; // 0x178
		::System::Int32 _TimelineDuration_k__BackingField; // 0x180
		::MX::Logic::Skills::Passive::PassiveSkillTargetType* _SkillTargetType_k__BackingField; // 0x184
		Il2CppObject* _EntityTimeline_k__BackingField; // 0x188

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxExecutionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_MAXEXECUTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StartCooltime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_STARTCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_ReuseCooltime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_REUSECOOLTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_DURATION_OFFSET))(nullptr);
		}

		::MX::Logic::Data::PassiveTriggerEvent* get_TriggerEvent()
		{
			return ((::MX::Logic::Data::PassiveTriggerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGEREVENT_OFFSET))(nullptr);
		}

		::System::String* get_TriggerExpressionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGEREXPRESSIONTEXT_OFFSET))(nullptr);
		}

		::System::String* get_TriggerParametersText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGERPARAMETERSTEXT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_TriggerRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGERRATE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::EchelonConstraint* get_EchelonConstraint()
		{
			return ((::MX::Logic::Data::EchelonConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_ECHELONCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_MAXTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRYCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CoolTimeNotTrigger()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_COOLTIMENOTTRIGGER_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetTryCountUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_RESETTRYCOUNTUSESKILL_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_CURRENTTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentTriggerCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_CURRENTTRIGGERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentTryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_CURRENTTRYCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentTryCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_CURRENTTRYCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentCooltime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_CURRENTCOOLTIME_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCooltime(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_CURRENTCOOLTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LastTriggerFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_LASTTRIGGERFRAME_OFFSET))(nullptr);
		}

		::System::Void set_LastTriggerFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_LASTTRIGGERFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Void set_Elapsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::TargetSideId* get_TargetSide()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TARGETSIDE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_TriggerSourceSortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGERSOURCESORTRULE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_TriggerSourceCandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TRIGGERSOURCECANDIDATERULE_OFFSET))(nullptr);
		}

		::System::Int64 get_RemainedCoolTimeNotTriggerFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_REMAINEDCOOLTIMENOTTRIGGERFRAME_OFFSET))(nullptr);
		}

		::System::Void set_RemainedCoolTimeNotTriggerFrame(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SET_REMAINEDCOOLTIMENOTTRIGGERFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TimelineDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_TIMELINEDURATION_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::Passive::PassiveSkillTargetType* get_SkillTargetType()
		{
			return ((::MX::Logic::Skills::Passive::PassiveSkillTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_SKILLTARGETTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_EntityTimeline()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GET_ENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::GameData::DAO::Battle::PassiveSkillDAO* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::GameData::DAO::Battle::PassiveSkillDAO*, ::MX::Logic::Skills::SkillSpecification*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetTriggered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_SETTRIGGERED_OFFSET))(nullptr);
		}

		::System::Void IncreaseTryCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_INCREASETRYCOUNT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_ENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* FindTriggerSources(::MX::Logic::Battles::Battle* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_FINDTRIGGERSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::Passive::PassiveSkill* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVESKILL_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

