#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x112DA60)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112DA70)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_SET_OWNERID_OFFSET UNITYSDK_OFFSET(0x112DAD0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_GET_OWNERID_OFFSET UNITYSDK_OFFSET(0x112DAE0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x112DAF0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TargetChangedEventArgs_TypeDefinitionIndex = 13046;

	class TargetChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _OwnerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x14

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_OwnerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_SET_OWNERID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_OwnerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_GET_OWNERID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHANGEDEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

	};
}

