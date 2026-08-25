#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class Beam; }

#define MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x126ECC0)
#define MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x126ECD0)
#define MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126ECE0)
#define MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_BEAMID_OFFSET UNITYSDK_OFFSET(0x126ECF0)
#define MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_HITENTITYID_OFFSET UNITYSDK_OFFSET(0x126ED00)
#define MX_LOGIC_BATTLES_BEAMEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12687B0)
#define MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126ED10)
#define MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x126ED20)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BeamEventArgs_TypeDefinitionIndex = 14010;

	class BeamEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _BeamId_k__BackingField; // 0x14
		::MX::Logic::BattleEntities::EntityId* _HitEntityId_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x1C
		::UnityEngine::Vector2* _TargetPosition_k__BackingField; // 0x20
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x28
		::System::String* _SkillEntityName_k__BackingField; // 0x30

		::UnityEngine::Vector2* get_TargetPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_BeamId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_BEAMID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_HitEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_HITENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::Beam* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Beam*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BEAMEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BEAMEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

	};
}

