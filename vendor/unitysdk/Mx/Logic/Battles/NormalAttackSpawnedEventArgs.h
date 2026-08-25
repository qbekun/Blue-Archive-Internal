#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class NormalAttackDeliverer; }

#define MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126F210)
#define MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_PROJECTILEID_OFFSET UNITYSDK_OFFSET(0x126F220)
#define MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x126F230)
#define MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12680C0)
#define MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x126F240)
#define MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_TARGETDELAY_OFFSET UNITYSDK_OFFSET(0x126F250)
#define MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126F260)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int NormalAttackSpawnedEventArgs_TypeDefinitionIndex = 14014;

	class NormalAttackSpawnedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x10
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::EntityId* _ProjectileId_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x24
		::System::Int32 _TargetDelay_k__BackingField; // 0x28
		::System::String* _SkillEntityName_k__BackingField; // 0x30

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_ProjectileId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_PROJECTILEID_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::NormalAttackDeliverer* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::NormalAttackDeliverer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_TARGETDELAY_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKSPAWNEDEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

	};
}

