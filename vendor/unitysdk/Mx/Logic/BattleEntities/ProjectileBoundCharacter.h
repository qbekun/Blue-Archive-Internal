#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class NonTargetBounceDestructibleProjectile; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
namespace MX::Logic::Data { class CostumeSetting; }
namespace MX::Logic::Battles { class ProjectileEventArgs; }

#define MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1140420)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_SETPROJECTILE_OFFSET UNITYSDK_OFFSET(0x1140580)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_BUILDDEFAULTBEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x1140620)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1140850)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_SET_PROJECTILEBOUND_OFFSET UNITYSDK_OFFSET(0x11409C0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_PROJECTILE_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11409E0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_GET_PROJECTILEBOUND_OFFSET UNITYSDK_OFFSET(0x1140AA0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ProjectileBoundCharacter_TypeDefinitionIndex = 13111;

	class ProjectileBoundCharacter : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::NonTargetBounceDestructibleProjectile* _ProjectileBound_k__BackingField; // 0x488

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Data::Excel::CharacterExcel* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterAIExcel* arg5, ::MX::Logic::Data::WeaponSetting* arg6, ::MX::Logic::Data::GearSetting* arg7, ::MX::Logic::Data::CostumeSetting* arg8)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterAIExcel*, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void SetProjectile(::MX::Logic::BattleEntities::NonTargetBounceDestructibleProjectile* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::NonTargetBounceDestructibleProjectile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_SETPROJECTILE_OFFSET))(arg, nullptr);
		}

		::System::Void BuildDefaultBehaviorTree()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_BUILDDEFAULTBEHAVIORTREE_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProjectileBound(::MX::Logic::BattleEntities::NonTargetBounceDestructibleProjectile* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::NonTargetBounceDestructibleProjectile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_SET_PROJECTILEBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void Projectile_Expired(::System::Object* arg, ::MX::Logic::Battles::ProjectileEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ProjectileEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_PROJECTILE_EXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::NonTargetBounceDestructibleProjectile* get_ProjectileBound()
		{
			return ((::MX::Logic::BattleEntities::NonTargetBounceDestructibleProjectile*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILEBOUNDCHARACTER_GET_PROJECTILEBOUND_OFFSET))(nullptr);
		}

	};
}

