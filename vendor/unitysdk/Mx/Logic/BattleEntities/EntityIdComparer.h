#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_ENTITYIDCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x118E4D0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYIDCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x118E5F0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYIDCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x118E600)
#define MX_LOGIC_BATTLEENTITIES_ENTITYIDCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x118E710)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EntityIdComparer_TypeDefinitionIndex = 13268;

	class EntityIdComparer : public Il2CppObject
	{
	public:
		::System::Int32 Compare(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYIDCOMPARER_COMPARE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYIDCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYIDCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYIDCOMPARER_EQUALS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

