#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class SkillCardState; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class SkillActor; }

#define MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112E310)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112E320)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x112E430)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_GET_STATE_OFFSET UNITYSDK_OFFSET(0x112E440)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x112E450)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SupportSkillEventArgs_TypeDefinitionIndex = 13058;

	class SupportSkillEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::MX::Logic::Battles::SkillCardState* _State_k__BackingField; // 0x14
		::UnityEngine::Vector2* _TargetPosition_k__BackingField; // 0x18
		::System::Int64 _CharacterId_k__BackingField; // 0x20

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::SkillCardState* arg, ::MX::Logic::BattleEntities::SkillActor* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::SkillCardState*, ::MX::Logic::BattleEntities::SkillActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::SkillCardState* get_State()
		{
			return ((::MX::Logic::Battles::SkillCardState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_GET_STATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_TargetPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTSKILLEVENTARGS_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

	};
}

