#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Core::Math { class TransitionType; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class TargetProjectileEntityValue; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class IEntitySpawnable; }

#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x11BF060)
#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11BF070)
#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11BF2E0)
#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_GET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x11BF5A0)
#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11BF5B0)
#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_PROCESSHIT_OFFSET UNITYSDK_OFFSET(0x11C0130)
#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_FINDEXTRAHITTARGETS_OFFSET UNITYSDK_OFFSET(0x11BFCF0)
#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_MOVEBYSPEED_OFFSET UNITYSDK_OFFSET(0x11C05A0)
#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_ISARRIVED_OFFSET UNITYSDK_OFFSET(0x11C0050)
#define MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x11C0650)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TargetPositionProjectile_TypeDefinitionIndex = 13340;

	class TargetPositionProjectile : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* _Destination_k__BackingField; // 0xB8
		::MX::Core::Math::TransitionType* _Transition_k__BackingField; // 0xC0
		::System::Boolean isExpired; // 0xC4
		::MX::Core::Physics2D::Bodies::Body2D* virtualBody; // 0xC8
		::MX::Logic::Skills::TargetSideId* extraHitCheckTargetSide; // 0xD0
		::MX::Logic::Skills::TargetEntityType* extraHitCheckTargetEntityType; // 0xD4
		::System::Boolean piercing; // 0xD8
		::System::Int32 currentExtraHitCount; // 0xDC
		::System::Int32 maxExtraHitCount; // 0xE0
		::System::Single reduceDamageRatePerHit; // 0xE4
		::System::Single maxReducedDamageRatePerHit; // 0xE8
		::MX::Logic::Skills::TargetCandidateRule* extraHitTargetRule; // 0xF0
		::MX::Logic::Skills::TargetSortRule* extraHitSortRule; // 0x1B0
		Il2CppObject* extraHitTargets; // 0x1D8

		::UnityEngine::Vector2* get_Destination()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_GET_DESTINATION_OFFSET))(nullptr);
		}

		::System::Void InitTransform(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_INITTRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Data::TargetProjectileEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::UnityEngine::Vector2* arg4, ::MX::Logic::Skills::IEntitySpawnable* arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::TargetProjectileEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Core::Math::TransitionType* get_Transition()
		{
			return ((::MX::Core::Math::TransitionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_GET_TRANSITION_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessHit(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_PROCESSHIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* FindExtraHitTargets(::MX::Logic::Battles::Battle* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_FINDEXTRAHITTARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void MoveBySpeed(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_MOVEBYSPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsArrived(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_ISARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpired(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETPOSITIONPROJECTILE_ISEXPIRED_OFFSET))(arg, nullptr);
		}

	};
}

