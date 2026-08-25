#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_SET_OWNERID_OFFSET UNITYSDK_OFFSET(0x112DB00)
#define MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112DB10)
#define MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x112DB70)
#define MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_GET_OWNERID_OFFSET UNITYSDK_OFFSET(0x112DB80)
#define MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x112DB90)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillDestChangedEventArgs_TypeDefinitionIndex = 13047;

	class SkillDestChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _OwnerId_k__BackingField; // 0x10
		::UnityEngine::Vector2* _Destination_k__BackingField; // 0x14

		::System::Void set_OwnerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_SET_OWNERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* get_Destination()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_GET_DESTINATION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_OwnerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_GET_OWNERID_OFFSET))(nullptr);
		}

		::System::Void set_Destination(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLDESTCHANGEDEVENTARGS_SET_DESTINATION_OFFSET))(arg, nullptr);
		}

	};
}

