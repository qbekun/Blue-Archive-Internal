#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_CHARACTERBULLETCOUNTCHANGEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F980)
#define MX_LOGIC_BATTLES_CHARACTERBULLETCOUNTCHANGEDEVENTARGS_GET_PREVIOUSCOUNT_OFFSET UNITYSDK_OFFSET(0x126F990)
#define MX_LOGIC_BATTLES_CHARACTERBULLETCOUNTCHANGEDEVENTARGS_GET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x126F9A0)
#define MX_LOGIC_BATTLES_CHARACTERBULLETCOUNTCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126F9B0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterBulletCountChangedEventArgs_TypeDefinitionIndex = 14026;

	class CharacterBulletCountChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::System::Int64 _PreviousCount_k__BackingField; // 0x18
		::System::Int64 _CurrentCount_k__BackingField; // 0x20

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERBULLETCOUNTCHANGEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Int64 get_PreviousCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERBULLETCOUNTCHANGEDEVENTARGS_GET_PREVIOUSCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERBULLETCOUNTCHANGEDEVENTARGS_GET_CURRENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERBULLETCOUNTCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

