#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class NontargetProjectileEntityValue; }
namespace MX::Logic::Skills { class IEntitySpawnable; }

#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_PROCESSHIT_OFFSET UNITYSDK_OFFSET(0x11ACAF0)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_GET_EXPIREDISTANCE_OFFSET UNITYSDK_OFFSET(0x11AD370)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_GET_ISPIERCING_OFFSET UNITYSDK_OFFSET(0x11AD380)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11AAC70)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_GET_INITIALDIRECTION_OFFSET UNITYSDK_OFFSET(0x11AD710)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_FINDCOLLIDETARGETANDOBSTACLES_OFFSET UNITYSDK_OFFSET(0x11AAD10)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11A9060)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11ADBD0)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_MOVEBYFRAME_OFFSET UNITYSDK_OFFSET(0x11ADF20)
#define MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x11AE0D0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int NonTargetProjectile_TypeDefinitionIndex = 13320;

	class NonTargetProjectile : public Il2CppObject
	{
	public:
		::System::Boolean _IsPiercing_k__BackingField; // 0xB8
		::System::Single _ExpireDistance_k__BackingField; // 0xBC
		::UnityEngine::Vector2* _InitialDirection_k__BackingField; // 0xC0
		::System::Int32 hitCount; // 0xC8
		::System::Single reduceDamageRatePerHit; // 0xCC
		::System::Single maxReducedDamageRatePerHit; // 0xD0

		::System::Void ProcessHit(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_PROCESSHIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single get_ExpireDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_GET_EXPIREDISTANCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPiercing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_GET_ISPIERCING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Data::NontargetProjectileEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::UnityEngine::Vector2* arg4, ::MX::Logic::Skills::IEntitySpawnable* arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::NontargetProjectileEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::UnityEngine::Vector2* get_InitialDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_GET_INITIALDIRECTION_OFFSET))(nullptr);
		}

		Il2CppObject* FindCollideTargetAndObstacles(::MX::Logic::Battles::Battle* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_FINDCOLLIDETARGETANDOBSTACLES_OFFSET))(arg, nullptr);
		}

		::System::Void InitTransform(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_INITTRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveByFrame(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_MOVEBYFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpired(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NONTARGETPROJECTILE_ISEXPIRED_OFFSET))(arg, nullptr);
		}

	};
}

