#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_ENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x118E2A0)
#define MX_LOGIC_BATTLEENTITIES_ENTITY_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x118E360)
#define MX_LOGIC_BATTLEENTITIES_ENTITY_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x118E370)
#define MX_LOGIC_BATTLEENTITIES_ENTITY_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x118E380)
#define MX_LOGIC_BATTLEENTITIES_ENTITY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x118E390)
#define MX_LOGIC_BATTLEENTITIES_ENTITY_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x118E3A0)
#define MX_LOGIC_BATTLEENTITIES_ENTITY_TOOLSETENTITYID_OFFSET UNITYSDK_OFFSET(0x118E3B0)
#define MX_LOGIC_BATTLEENTITIES_ENTITY_INITCONDITIONCOMMAND_OFFSET UNITYSDK_OFFSET(0x118E3C0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 13266;

	class Entity : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::System::Boolean _Active_k__BackingField; // 0x14
		Il2CppObject* ConditionIdList; // 0x18
		Il2CppObject* CommandIdList; // 0x20

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITY_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Active(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITY_SET_ACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITY_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITY_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITY_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Void ToolSetEntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITY_TOOLSETENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void InitConditionCommand(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITY_INITCONDITIONCOMMAND_OFFSET))(arg, arg2, nullptr);
		}

	};
}

