#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class TargetProjectileEntityValue; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_PROCESSHIT_OFFSET UNITYSDK_OFFSET(0x11BD740)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11BDBB0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_MOVEBYFRAME_OFFSET UNITYSDK_OFFSET(0x11BEAA0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x11BEBA0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x11BEBF0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11BB8A0)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11BEC00)
#define MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_FINDEXTRAHITTARGETS_OFFSET UNITYSDK_OFFSET(0x11BE720)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TargetCharacterProjectile_TypeDefinitionIndex = 13339;

	class TargetCharacterProjectile : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* _Target_k__BackingField; // 0xB8
		::MX::Logic::Skills::TargetSideId* extraHitCheckTargetSide; // 0xC0
		::MX::Logic::Skills::TargetEntityType* extraHitCheckTargetEntityType; // 0xC4
		::System::Boolean piercing; // 0xC8
		::System::Int32 currentExtraHitCount; // 0xCC
		::System::Int32 maxExtraHitCount; // 0xD0
		::System::Single reduceDamageRatePerHit; // 0xD4
		::System::Single maxReducedDamageRatePerHit; // 0xD8
		::MX::Logic::Skills::TargetCandidateRule* extraHitTargetRule; // 0xE0
		::MX::Logic::Skills::TargetSortRule* extraHitSortRule; // 0x1A0
		Il2CppObject* extraHitTargets; // 0x1C8

		::System::Void ProcessHit(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_PROCESSHIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveByFrame(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_MOVEBYFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpired(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_ISEXPIRED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Target()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Data::TargetProjectileEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, ::MX::Logic::Skills::IEntitySpawnable* arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::TargetProjectileEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void InitTransform(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_INITTRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindExtraHitTargets(::MX::Logic::Battles::Battle* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETCHARACTERPROJECTILE_FINDEXTRAHITTARGETS_OFFSET))(arg, nullptr);
		}

	};
}

