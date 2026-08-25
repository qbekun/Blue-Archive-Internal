#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126EB40)
#define MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126EBB0)
#define MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x126EBC0)
#define MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126EBD0)
#define MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x126EBE0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleEntityRemovedEventArgs_TypeDefinitionIndex = 14007;

	class BattleEntityRemovedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* _Entity_k__BackingField; // 0x18

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Entity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_GET_ENTITY_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_Entity(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYREMOVEDEVENTARGS_SET_ENTITY_OFFSET))(arg, nullptr);
		}

	};
}

