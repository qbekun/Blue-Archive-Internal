#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_CHARACTERSHIELDCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126F670)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDCHANGEDEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F6C0)
#define MX_LOGIC_BATTLES_CHARACTERSHIELDCHANGEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F6D0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterShieldChangedEventArgs_TypeDefinitionIndex = 14024;

	class CharacterShieldChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDCHANGEDEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERSHIELDCHANGEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

	};
}

