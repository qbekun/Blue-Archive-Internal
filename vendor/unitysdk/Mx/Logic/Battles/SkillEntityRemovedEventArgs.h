#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_SKILLENTITYREMOVEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F340)
#define MX_LOGIC_BATTLES_SKILLENTITYREMOVEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126AB80)
#define MX_LOGIC_BATTLES_SKILLENTITYREMOVEDEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F350)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SkillEntityRemovedEventArgs_TypeDefinitionIndex = 14019;

	class SkillEntityRemovedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLENTITYREMOVEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLENTITYREMOVEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLENTITYREMOVEDEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

	};
}

