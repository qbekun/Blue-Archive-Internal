#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BlackBoardAlarmOnReachEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Battles { class BattleBlackboard; }
namespace MX::Logic::Battles { class BlackboardKey; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_NOALARMSKILLSLOTS_OFFSET UNITYSDK_OFFSET(0x14084E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1408500)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1408560)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_UPDATEBLACKBOARDVALUE_OFFSET UNITYSDK_OFFSET(0x14088A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_ALARMVALUE_OFFSET UNITYSDK_OFFSET(0x1408810)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_BLACKBOARDKEY_OFFSET UNITYSDK_OFFSET(0x1408C90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_DOALARM_OFFSET UNITYSDK_OFFSET(0x1408AD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1408CD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_ALARMEFFECTGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1408CB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1408CF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1408D00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x1408830)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_ISNOALARMSTATE_OFFSET UNITYSDK_OFFSET(0x1408900)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1408D40)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int BlackBoardAlarmOnReachEffect_TypeDefinitionIndex = 14693;

	class BlackBoardAlarmOnReachEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BlackBoardAlarmOnReachEffectValue* _value_k__BackingField; // 0xD0
		::MX::Logic::Skills::SkillSpecification* _skillSpecification_k__BackingField; // 0xD8
		::MX::Logic::Battles::BattleBlackboard* blackBoard; // 0xE0
		::MX::Logic::Battles::BlackboardKey* blackBoardKey; // 0xE8
		::System::Boolean wasOverAlarmValue; // 0x100
		::MX::Logic::Battles::Battle* battle; // 0x108
		Il2CppObject* ability; // 0x110

		::Il2CppArray<::System::Object*>* get_NoAlarmSkillSlots()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_NOALARMSKILLSLOTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BlackBoardAlarmOnReachEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::BlackBoardAlarmOnReachEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateBlackBoardValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_UPDATEBLACKBOARDVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AlarmValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_ALARMVALUE_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::BlackboardKey* get_BlackboardKey()
		{
			return ((::MX::Logic::Battles::BlackboardKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_BLACKBOARDKEY_OFFSET))(nullptr);
		}

		::System::Void DoAlarm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_DOALARM_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AlarmEffectGroupIds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_ALARMEFFECTGROUPIDS_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_skillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_CHECKEXPIRED_OFFSET))(nullptr);
		}

		::System::Boolean IsNoAlarmState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_ISNOALARMSTATE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackBoardAlarmOnReachEffectValue* get_value()
		{
			return ((::MX::Logic::Data::BlackBoardAlarmOnReachEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

