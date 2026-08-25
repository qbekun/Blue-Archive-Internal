#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112DD40)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_GET_HASIMMUNE_OFFSET UNITYSDK_OFFSET(0x112DDB0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x112DDC0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112DDD0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_SET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x112DDE0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StatusResistEventArgs_TypeDefinitionIndex = 13050;

	class StatusResistEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::System::Boolean _HasImmune_k__BackingField; // 0x14
		::System::Boolean _ForceFloaterHide_k__BackingField; // 0x15

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean get_HasImmune()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_GET_HASIMMUNE_OFFSET))(nullptr);
		}

		::System::Boolean get_ForceFloaterHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_ForceFloaterHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESISTEVENTARGS_SET_FORCEFLOATERHIDE_OFFSET))(arg, nullptr);
		}

	};
}

