#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class AccumulateEffect; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class AccumulateEffectProcessor; }
namespace MX::Logic::Battles { class DotEventArgs; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }
namespace MX::Logic::Battles { class AttackEventArgs; }

#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_ACCUMULATIONLIMITSTAT_OFFSET UNITYSDK_OFFSET(0x10FAE10)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_DOTABILITY_OFFSET UNITYSDK_OFFSET(0x10FAE20)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x10FAE30)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10FAE40)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_ACCUMULATEEFFECT_OFFSET UNITYSDK_OFFSET(0x10FAE50)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_LASTAMOUNT_OFFSET UNITYSDK_OFFSET(0x10FAE60)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x10FAE70)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_PROCESSACCUMULATION_OFFSET UNITYSDK_OFFSET(0x10FB1F0)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_LASTAMOUNT_OFFSET UNITYSDK_OFFSET(0x10FB640)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_ACTIVATEACCUMULATIONLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x10FB2E0)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_ACCUMULATIONAMOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x10FB650)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x10FB660)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_BATTLE_DOTABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x10FB670)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GETACCUMULATEAMOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x10FB0C0)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_ACCUMULATIONAMOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x10FB930)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET UNITYSDK_OFFSET(0x10FB940)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_ACCUMULATIONLIMITSTAT_OFFSET UNITYSDK_OFFSET(0x10FBB40)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x10FBB50)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x10FBD40)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_ADDEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x10FBD50)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_ADDEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x10FBD60)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int AccumulateEffectInfo_TypeDefinitionIndex = 13034;

	class AccumulateEffectInfo : public Il2CppObject
	{
	public:
		::System::Int32 _Channel_k__BackingField; // 0x10
		::System::String* _GroupId_k__BackingField; // 0x18
		Il2CppObject* _DotAbility_k__BackingField; // 0x20
		::MX::Logic::Skills::LogicEffects::AccumulateEffect* _AccumulateEffect_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::BattleEntity* invoker; // 0x30
		::MX::Logic::BattleEntities::BattleEntity* owner; // 0x38
		::MX::Logic::Battles::Battle* battle; // 0x40
		::MX::Logic::BattleEntities::AccumulateEffectProcessor* accumulateEffectProcessor; // 0x48
		::System::Int32 StartedFrame; // 0x50
		::System::Int64 _AccumulationAmountLimit_k__BackingField; // 0x58
		::System::Int64 _AccumulationLimitStat_k__BackingField; // 0x60
		::System::Int64 _LastAmount_k__BackingField; // 0x68
		::System::Int64 _AddedAmount_k__BackingField; // 0x70
		::System::Int64 _CurrentAmount_k__BackingField; // 0x78

		::System::Void set_AccumulationLimitStat(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_ACCUMULATIONLIMITSTAT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DotAbility()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_DOTABILITY_OFFSET))(nullptr);
		}

		::System::Void set_CurrentAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_CURRENTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* get_GroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::AccumulateEffect* get_AccumulateEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::AccumulateEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_ACCUMULATEEFFECT_OFFSET))(nullptr);
		}

		::System::Int64 get_LastAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_LASTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::AccumulateEffectProcessor* arg, ::MX::Logic::Battles::Battle* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, Il2CppObject* arg5, ::MX::Logic::Skills::LogicEffects::AccumulateEffect* arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::AccumulateEffectProcessor*, ::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::AccumulateEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void ProcessAccumulation(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_PROCESSACCUMULATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_LASTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateAccumulationLogicEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_ACTIVATEACCUMULATIONLOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Int64 get_AccumulationAmountLimit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_ACCUMULATIONAMOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void Battle_DotAbilityRemoved(::System::Object* arg, ::MX::Logic::Battles::DotEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DotEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_BATTLE_DOTABILITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetAccumulateAmountLimit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GETACCUMULATEAMOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_AccumulationAmountLimit(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_ACCUMULATIONAMOUNTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LifeGain(::System::Object* arg, ::MX::Logic::Battles::LifeGainEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_AccumulationLimitStat()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_ACCUMULATIONLIMITSTAT_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_CurrentAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_CURRENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_AddedAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_GET_ADDEDAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_AddedAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTINFO_SET_ADDEDAMOUNT_OFFSET))(arg, nullptr);
		}

	};
}

