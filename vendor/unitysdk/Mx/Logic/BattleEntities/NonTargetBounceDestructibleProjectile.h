#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class NontargetProjectileEntityValue; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::BattleEntities { class StatusAddedEventArgs; }

#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_MOVEBYSPEED_OFFSET UNITYSDK_OFFSET(0x11A9D00)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A86D0)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_CHARACTER_STATUSADDED_OFFSET UNITYSDK_OFFSET(0x11A9F40)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_GET_TOTALMOVEDISTANCE_OFFSET UNITYSDK_OFFSET(0x11AA400)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_SETCHARACTERFORSTAT_OFFSET UNITYSDK_OFFSET(0x11AA410)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11A9890)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_EXPIREPROJECTILE_OFFSET UNITYSDK_OFFSET(0x11AAA50)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int NonTargetBounceDestructibleProjectile_TypeDefinitionIndex = 13316;

	class NonTargetBounceDestructibleProjectile : public Il2CppObject
	{
	public:
		::System::Boolean isDestroyed; // 0xF8
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* characterForStat; // 0x100
		::System::Single totalMoveDistance; // 0x108

		::System::Void MoveBySpeed(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_MOVEBYSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Data::NontargetProjectileEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::MX::Logic::Skills::IEntitySpawnable* arg6, ::System::Int64 arg7)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::NontargetProjectileEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void Character_StatusAdded(::System::Object* arg, ::MX::Logic::BattleEntities::StatusAddedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::StatusAddedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_CHARACTER_STATUSADDED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_TotalMoveDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_GET_TOTALMOVEDISTANCE_OFFSET))(nullptr);
		}

		::System::Void SetCharacterForStat(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_SETCHARACTERFORSTAT_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ExpireProjectile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEPROJECTILE_EXPIREPROJECTILE_OFFSET))(nullptr);
		}

	};
}

