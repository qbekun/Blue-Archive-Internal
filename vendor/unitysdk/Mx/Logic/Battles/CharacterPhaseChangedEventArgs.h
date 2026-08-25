#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F520)
#define MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x126F530)
#define MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F540)
#define MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x126F550)
#define MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126F560)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterPhaseChangedEventArgs_TypeDefinitionIndex = 14022;

	class CharacterPhaseChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::System::Int64 _PhaseID_k__BackingField; // 0x18

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Int64 get_PhaseID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_PhaseID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERPHASECHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

