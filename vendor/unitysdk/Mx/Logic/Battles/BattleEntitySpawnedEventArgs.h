#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Logic::BattleEntities { class BattleItem; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Logic::BattleEntities { class BarrierObstacle; }

#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126EA70)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126EA80)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x126EA90)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x126EAA0)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_GET_CHARACTERGROUP_OFFSET UNITYSDK_OFFSET(0x126EAB0)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1263610)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126EAC0)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1268B70)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1263580)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1267680)
#define MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1267700)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleEntitySpawnedEventArgs_TypeDefinitionIndex = 14006;

	class BattleEntitySpawnedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* _Entity_k__BackingField; // 0x18
		::MX::Logic::Battles::CharacterGroup* _CharacterGroup_k__BackingField; // 0x20

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Entity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_GET_ENTITY_OFFSET))(nullptr);
		}

		::System::Void set_Entity(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_SET_ENTITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::CharacterGroup* get_CharacterGroup()
		{
			return ((::MX::Logic::Battles::CharacterGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_GET_CHARACTERGROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::SkillActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleItem* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleItem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::GroundObstacle* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BarrierObstacle* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BarrierObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSPAWNEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

