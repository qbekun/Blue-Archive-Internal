#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class NontargetProjectileEntityValue; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class IEntitySpawnable; }

#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEPROJECTILE_COCHECKBOUNCE_OFFSET UNITYSDK_OFFSET(0x11AABC0)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A9DE0)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEPROJECTILE_EXPIREPROJECTILE_OFFSET UNITYSDK_OFFSET(0x11AAB40)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEPROJECTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11AA4B0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int NonTargetBounceProjectile_TypeDefinitionIndex = 13319;

	class NonTargetBounceProjectile : public Il2CppObject
	{
	public:
		::MX::Logic::Data::NontargetProjectileEntityValue* nontargetProjectileEntityValue; // 0xD8
		Il2CppObject* checkBounceBattleEntityList; // 0xE0
		::MX::GameData::DAO::Battle::SkillEntityDAO* bounceEntity; // 0xE8
		::System::Boolean isBounced; // 0xF0

		::System::Collections::IEnumerator* CoCheckBounce(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEPROJECTILE_COCHECKBOUNCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Data::NontargetProjectileEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::UnityEngine::Vector2* arg4, ::MX::Logic::Skills::IEntitySpawnable* arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::NontargetProjectileEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEPROJECTILE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void ExpireProjectile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEPROJECTILE_EXPIREPROJECTILE_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEPROJECTILE_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

