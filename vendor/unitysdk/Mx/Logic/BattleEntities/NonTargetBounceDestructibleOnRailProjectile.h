#pragma once
#include "../../../unitysdk.h"

class MoveProjectileDelegate;
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class LevelNontargetDestructibleOnRailsProjectileEntityValue; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A8580)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_INITIALMOVEONRAILS_OFFSET UNITYSDK_OFFSET(0x11A8830)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_SETPATH_OFFSET UNITYSDK_OFFSET(0x11A8B40)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_MOVEONEMPTYRAILS_OFFSET UNITYSDK_OFFSET(0x11A8B80)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_RESETPATH_OFFSET UNITYSDK_OFFSET(0x11A8B90)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11A8D20)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_MOVEBYFRAME_OFFSET UNITYSDK_OFFSET(0x11A9120)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_MOVEONRAILS_OFFSET UNITYSDK_OFFSET(0x11A9390)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_CHECKANDREMOVEHITHEROS_OFFSET UNITYSDK_OFFSET(0x11A96F0)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11A97F0)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x11A98A0)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_MOVEBYSPEED_OFFSET UNITYSDK_OFFSET(0x11A98C0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int NonTargetBounceDestructibleOnRailProjectile_TypeDefinitionIndex = 13315;

	class NonTargetBounceDestructibleOnRailProjectile : public Il2CppObject
	{
	public:
		MoveProjectileDelegate* originalMoveProjectileDelegate; // 0x110
		Il2CppObject* movePointList; // 0x118
		Il2CppObject* movePointCommandIdList; // 0x120
		::System::Int32 currentMovePointIndex; // 0x128
		::System::Boolean repeatMove; // 0x12C
		::System::Boolean allowDuplicateHit; // 0x12D
		::MX::Core::Physics2D::Bodies::Body2D* HitExitChecker; // 0x130

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Data::LevelNontargetDestructibleOnRailsProjectileEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::MX::Logic::Skills::IEntitySpawnable* arg6, ::System::Int64 arg7)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::LevelNontargetDestructibleOnRailsProjectileEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void InitialMoveOnRails(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_INITIALMOVEONRAILS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPath(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_SETPATH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void MoveOnEmptyRails(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_MOVEONEMPTYRAILS_OFFSET))(arg, nullptr);
		}

		::System::Void ResetPath()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_RESETPATH_OFFSET))(nullptr);
		}

		::System::Void InitTransform(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_INITTRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveByFrame(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_MOVEBYFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void MoveOnRails(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_MOVEONRAILS_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAndRemoveHitHeros(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_CHECKANDREMOVEHITHEROS_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpired(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_ISEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void MoveBySpeed(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETBOUNCEDESTRUCTIBLEONRAILPROJECTILE_MOVEBYSPEED_OFFSET))(arg, nullptr);
		}

	};
}

