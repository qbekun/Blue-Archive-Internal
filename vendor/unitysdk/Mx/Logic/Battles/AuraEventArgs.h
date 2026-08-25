#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class Aura; }

#define MX_LOGIC_BATTLES_AURAEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x126ED30)
#define MX_LOGIC_BATTLES_AURAEVENTARGS_GET_AURA_OFFSET UNITYSDK_OFFSET(0x126ED40)
#define MX_LOGIC_BATTLES_AURAEVENTARGS_GET_AURAID_OFFSET UNITYSDK_OFFSET(0x126ED50)
#define MX_LOGIC_BATTLES_AURAEVENTARGS_GET_HITENTITYID_OFFSET UNITYSDK_OFFSET(0x126ED60)
#define MX_LOGIC_BATTLES_AURAEVENTARGS_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x126ED70)
#define MX_LOGIC_BATTLES_AURAEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12683E0)
#define MX_LOGIC_BATTLES_AURAEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126ED80)
#define MX_LOGIC_BATTLES_AURAEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126ED90)
#define MX_LOGIC_BATTLES_AURAEVENTARGS_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x126EDA0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int AuraEventArgs_TypeDefinitionIndex = 14011;

	class AuraEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _AuraId_k__BackingField; // 0x14
		::MX::Logic::BattleEntities::EntityId* _HitEntityId_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x1C
		::UnityEngine::Vector2* _TargetPosition_k__BackingField; // 0x20
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x28
		::System::String* _SkillEntityName_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::Aura* _Aura_k__BackingField; // 0x38

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_AURAEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::Aura* get_Aura()
		{
			return ((::MX::Logic::BattleEntities::Aura*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_AURAEVENTARGS_GET_AURA_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_AuraId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_AURAEVENTARGS_GET_AURAID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_HitEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_AURAEVENTARGS_GET_HITENTITYID_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_AURAEVENTARGS_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::Aura* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Aura*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_AURAEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_AURAEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_AURAEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_TargetPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_AURAEVENTARGS_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

	};
}

