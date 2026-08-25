#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class MaxHpOverHealEffect; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_REDUCEAMOUNT_OFFSET UNITYSDK_OFFSET(0x115A930)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x115A940)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_CODURATIONCHECK_OFFSET UNITYSDK_OFFSET(0x115A950)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_STOP_OFFSET UNITYSDK_OFFSET(0x115A9E0)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x115AAD0)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x115AB20)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_OVERHEALEFFECT_OFFSET UNITYSDK_OFFSET(0x115AB30)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x115AB40)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_REDUCEHP_OFFSET UNITYSDK_OFFSET(0x115AD80)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_DOTABILITY_OFFSET UNITYSDK_OFFSET(0x115AE20)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_REDUCEPERIOD_OFFSET UNITYSDK_OFFSET(0x115AE30)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x115AE40)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x115AE50)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TemporaryHpInfo_TypeDefinitionIndex = 13141;

	class TemporaryHpInfo : public Il2CppObject
	{
	public:
		::System::Int64 _CurrentHP_k__BackingField; // 0x10
		::System::Int32 _ReducePeriod_k__BackingField; // 0x18
		::System::Int64 _ReduceAmount_k__BackingField; // 0x20
		Il2CppObject* _DotAbility_k__BackingField; // 0x28
		::MX::Logic::Skills::LogicEffects::MaxHpOverHealEffect* _OverHealEffect_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _owner_k__BackingField; // 0x38
		::System::Collections::IEnumerator* conditionChecker; // 0x40
		::System::Int32 elapsed; // 0x48

		::System::Int64 get_ReduceAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_REDUCEAMOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_owner()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDurationCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_CODURATIONCHECK_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_STOP_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentHP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_CURRENTHP_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::MaxHpOverHealEffect* get_OverHealEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::MaxHpOverHealEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_OVERHEALEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, Il2CppObject* arg2, ::MX::Logic::Skills::LogicEffects::MaxHpOverHealEffect* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::MaxHpOverHealEffect*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* ReduceHP(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_REDUCEHP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DotAbility()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_DOTABILITY_OFFSET))(nullptr);
		}

		::System::Int32 get_ReducePeriod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_REDUCEPERIOD_OFFSET))(nullptr);
		}

		::System::Void set_CurrentHP(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_SET_CURRENTHP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYHPINFO_GET_CHANNEL_OFFSET))(nullptr);
		}

	};
}

