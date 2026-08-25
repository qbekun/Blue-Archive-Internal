#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_GET_ISINTERACT_OFFSET UNITYSDK_OFFSET(0x126F460)
#define MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126F470)
#define MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_GET_TSSENTITYID_OFFSET UNITYSDK_OFFSET(0x126F4D0)
#define MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_SET_ISINTERACT_OFFSET UNITYSDK_OFFSET(0x126F4E0)
#define MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F4F0)
#define MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F500)
#define MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_SET_TSSENTITYID_OFFSET UNITYSDK_OFFSET(0x126F510)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterInteractWithTSSEventArgs_TypeDefinitionIndex = 14021;

	class CharacterInteractWithTSSEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _TSSEntityId_k__BackingField; // 0x14
		::System::Boolean _IsInteract_k__BackingField; // 0x18

		::System::Boolean get_IsInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_GET_ISINTERACT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TSSEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_GET_TSSENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_IsInteract(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_SET_ISINTERACT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TSSEntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERINTERACTWITHTSSEVENTARGS_SET_TSSENTITYID_OFFSET))(arg, nullptr);
		}

	};
}

