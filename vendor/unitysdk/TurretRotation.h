#pragma once
#include "unitysdk.h"

namespace FlatData { class EffectBone; }
namespace UnityEngine { class Transform; }
namespace MX::Visual::Battles { class ForwardVector; }
class CharacterVisual;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define TURRETROTATION_SETTURRET_OFFSET UNITYSDK_OFFSET(0x159DC90)
#define TURRETROTATION_SETTURRET_OFFSET UNITYSDK_OFFSET(0x159E570)
#define TURRETROTATION_DISABLETURRETROTATION_OFFSET UNITYSDK_OFFSET(0x159E640)
#define TURRETROTATION_ENABLETURRETROTATION_OFFSET UNITYSDK_OFFSET(0x159E650)
#define TURRETROTATION_SETVERTICALROTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x159E410)
#define TURRETROTATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x159E660)
#define TURRETROTATION_ROTATETURRET_OFFSET UNITYSDK_OFFSET(0x159E960)
#define TURRETROTATION_ROTATEVERTICAL_OFFSET UNITYSDK_OFFSET(0x159FD10)
#define TURRETROTATION_ROTATEHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x159F670)
#define TURRETROTATION_GETINITIALFORWARD_OFFSET UNITYSDK_OFFSET(0x159DD10)
#define TURRETROTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A0120)
#define TURRETROTATION__ROTATETURRET_B__18_0_OFFSET UNITYSDK_OFFSET(0x15A0130)

	inline static constexpr unsigned int TurretRotation_TypeDefinitionIndex = 1077;

	class TurretRotation : public Il2CppObject
	{
	public:
		::FlatData::EffectBone* TargetBone; // 0x18
		::UnityEngine::Transform* TurretHorizontal; // 0x20
		::UnityEngine::Transform* TurretVertical; // 0x28
		::MX::Visual::Battles::ForwardVector* TurretHorizontalForward; // 0x30
		::MX::Visual::Battles::ForwardVector* TurretVerticalForward; // 0x34
		CharacterVisual* Visual; // 0x38
		::MX::Visual::Battles::BattleActorComponent* battleActor; // 0x40
		::UnityEngine::Vector3* lastDirectionHorizontal; // 0x48
		::UnityEngine::Vector3* lastDirectionVertical; // 0x54
		::System::Boolean stopRotation; // 0x60
		::UnityEngine::Quaternion* initRotation; // 0x64

		::System::Void SetTurret(::MX::Visual::Battles::BattleActorComponent* arg, CharacterVisual* arg2)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_SETTURRET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTurret(::MX::Visual::Battles::BattleActorComponent* arg, CharacterVisual* arg2, ::UnityEngine::Transform* arg3, ::UnityEngine::Transform* arg4, ::MX::Visual::Battles::ForwardVector* arg5, ::MX::Visual::Battles::ForwardVector* arg6)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, CharacterVisual*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::MX::Visual::Battles::ForwardVector*, ::MX::Visual::Battles::ForwardVector*, ::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_SETTURRET_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void DisableTurretRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_DISABLETURRETROTATION_OFFSET))(nullptr);
		}

		::System::Void EnableTurretRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_ENABLETURRETROTATION_OFFSET))(nullptr);
		}

		::System::Void SetVerticalRotationAxis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_SETVERTICALROTATIONAXIS_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void RotateTurret()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_ROTATETURRET_OFFSET))(nullptr);
		}

		::System::Void RotateVertical(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_ROTATEVERTICAL_OFFSET))(arg, nullptr);
		}

		::System::Void RotateHorizontal(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_ROTATEHORIZONTAL_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* GetInitialForward(::MX::Visual::Battles::ForwardVector* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Visual::Battles::ForwardVector*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_GETINITIALFORWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RotateTurret_b__18_0(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TURRETROTATION__ROTATETURRET_B__18_0_OFFSET))(arg, nullptr);
		}

	};

