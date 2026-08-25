#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TargetBounceProjectileEntityValue; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11BB850)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE__ADDTOHITHERO_B__4_0_OFFSET UNITYSDK_OFFSET(0x11BBB60)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11BBBB0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_ADDTOHITHERO_OFFSET UNITYSDK_OFFSET(0x11BC2D0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x11BC3C0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_COPROCESSBOUNCEPROJECTILE_OFFSET UNITYSDK_OFFSET(0x11BC240)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TargetCharacterBounceProjectile_TypeDefinitionIndex = 13338;

	class TargetCharacterBounceProjectile : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TargetBounceProjectileEntityValue* entityData; // 0x1D0
		::System::Boolean isBlockedByObstacle; // 0x1D8

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Data::TargetBounceProjectileEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, ::MX::Logic::Skills::IEntitySpawnable* arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::TargetBounceProjectileEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void _AddToHitHero_b__4_0(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE__ADDTOHITHERO_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void AddToHitHero(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_ADDTOHITHERO_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpired(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_ISEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoProcessBounceProjectile(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERBOUNCEPROJECTILE_COPROCESSBOUNCEPROJECTILE_OFFSET))(arg, nullptr);
		}

	};
}

