#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BlackBoardMultiAlarmEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Battles { class BattleBlackboard; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_DOEACHALARM_OFFSET UNITYSDK_OFFSET(0x1408FB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1409160)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1409170)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1409180)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_INITARRAYS_OFFSET UNITYSDK_OFFSET(0x14093B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_EFFECTTOSELF_OFFSET UNITYSDK_OFFSET(0x1409010)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_COMBINEDALARMCOUNT_OFFSET UNITYSDK_OFFSET(0x1409610)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_NOALARMSKILLSLOTS_OFFSET UNITYSDK_OFFSET(0x1409630)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_COMBINEDALARMEFFECTGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1409660)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_ISNOALARMSTATE_OFFSET UNITYSDK_OFFSET(0x1409680)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1409850)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_DOCOMBINEDALARM_OFFSET UNITYSDK_OFFSET(0x1409870)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_EACHALARMEFFECTGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1408FF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x14098D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_LOGICCOROUTINE_OFFSET UNITYSDK_OFFSET(0x14095A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14098F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_ALARMVALUELIST_OFFSET UNITYSDK_OFFSET(0x1409950)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_BLACKBOARDKEYS_OFFSET UNITYSDK_OFFSET(0x1409970)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int BlackBoardMultiAlarmEffect_TypeDefinitionIndex = 14697;

	class BlackBoardMultiAlarmEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BlackBoardMultiAlarmEffectValue* _value_k__BackingField; // 0xD0
		::MX::Logic::Skills::SkillSpecification* _skillSpecification_k__BackingField; // 0xD8
		::MX::Logic::Battles::BattleBlackboard* blackBoard; // 0xE0
		::Il2CppArray<::System::Object*>* blackBoardKeys; // 0xE8
		::Il2CppArray<::System::Object*>* wasOverAlarmValue; // 0xF0
		::MX::Logic::Battles::Battle* battle; // 0xF8
		Il2CppObject* ability; // 0x100

		::System::Void DoEachAlarm(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_DOEACHALARM_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_skillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackBoardMultiAlarmEffectValue* get_value()
		{
			return ((::MX::Logic::Data::BlackBoardMultiAlarmEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitArrays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_INITARRAYS_OFFSET))(nullptr);
		}

		::System::Void EffectToSelf(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_EFFECTTOSELF_OFFSET))(str, nullptr);
		}

		::System::Int32 get_CombinedAlarmCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_COMBINEDALARMCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_NoAlarmSkillSlots()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_NOALARMSKILLSLOTS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CombinedAlarmEffectGroupIdList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_COMBINEDALARMEFFECTGROUPIDLIST_OFFSET))(nullptr);
		}

		::System::Boolean IsNoAlarmState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_ISNOALARMSTATE_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void DoCombinedAlarm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_DOCOMBINEDALARM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EachAlarmEffectGroupIdList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_EACHALARMEFFECTGROUPIDLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* LogicCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_LOGICCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BlackBoardMultiAlarmEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::BlackBoardMultiAlarmEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AlarmValueList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_ALARMVALUELIST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BlackboardKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMEFFECT_GET_BLACKBOARDKEYS_OFFSET))(nullptr);
		}

	};
}

