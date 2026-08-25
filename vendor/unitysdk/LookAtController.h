#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MX::Visual::Battles { class ForwardVector; }
class CharacterVisual;
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }
namespace MX::Visual::Battles { class BattleActorComponent; }

#define LOOKATCONTROLLER_ROTATEHORIZONTALLY_OFFSET UNITYSDK_OFFSET(0x13BE100)
#define LOOKATCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13BEB90)
#define LOOKATCONTROLLER_GET_RESETWHENNOTAPPLY_OFFSET UNITYSDK_OFFSET(0x13BF170)
#define LOOKATCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13BF180)
#define LOOKATCONTROLLER_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x13BE2A0)
#define LOOKATCONTROLLER_ROTATEVERTICALLY_OFFSET UNITYSDK_OFFSET(0x13BEFD0)
#define LOOKATCONTROLLER_CHECKAPPLY_OFFSET UNITYSDK_OFFSET(0x13BF270)
#define LOOKATCONTROLLER_GET_MINVERTICALROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x13BF340)
#define LOOKATCONTROLLER_GET_MAXHORIZONTALROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x13BF350)
#define LOOKATCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BF360)
#define LOOKATCONTROLLER_ROTATEBACKTOINITIALROTATION_OFFSET UNITYSDK_OFFSET(0x13BED30)
#define LOOKATCONTROLLER_GET_MAXVERTICALROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x13BF380)
#define LOOKATCONTROLLER_ROTATE_OFFSET UNITYSDK_OFFSET(0x13BE460)
#define LOOKATCONTROLLER_GET_MINHORIZONTALROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x13BF390)

	inline static constexpr unsigned int LookAtController_TypeDefinitionIndex = 1028;

	class LookAtController : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* horizontalRotationBone; // 0x18
		::UnityEngine::Transform* verticalRotationBone; // 0x20
		::MX::Visual::Battles::ForwardVector* horizontalBoneForwardDirection; // 0x28
		::MX::Visual::Battles::ForwardVector* horizontalBoneRotationAxis; // 0x2C
		::MX::Visual::Battles::ForwardVector* verticalBoneForwardDirection; // 0x30
		::MX::Visual::Battles::ForwardVector* verticalBoneRotationAxis; // 0x34
		::System::Single horizontalRotationSpeed; // 0x38
		::System::Single verticalRotationSpeed; // 0x3C
		CharacterVisual* characterVisual; // 0x40
		::UnityEngine::Quaternion* horizontalLocalRotation; // 0x48
		::UnityEngine::Quaternion* verticalLocalRotation; // 0x58
		::UnityEngine::Quaternion* horizontalInitialRotation; // 0x68
		::UnityEngine::Quaternion* verticalInitialRotation; // 0x78

		::System::Void RotateHorizontally(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_ROTATEHORIZONTALLY_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetWhenNotApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_GET_RESETWHENNOTAPPLY_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Visual::Battles::BattleActorComponent* arg, CharacterVisual* arg2)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* GetDirection(::MX::Visual::Battles::ForwardVector* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Visual::Battles::ForwardVector*, ::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_GETDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void RotateVertically(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_ROTATEVERTICALLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_CHECKAPPLY_OFFSET))(nullptr);
		}

		::System::Single get_MinVerticalRotationDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_GET_MINVERTICALROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Single get_MaxHorizontalRotationDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_GET_MAXHORIZONTALROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RotateBackToInitialRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_ROTATEBACKTOINITIALROTATION_OFFSET))(nullptr);
		}

		::System::Single get_MaxVerticalRotationDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_GET_MAXVERTICALROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Void Rotate(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::Single arg5, ::System::Single arg6, ::System::Single arg7, ::UnityEngine::Quaternion* arg8, ::UnityEngine::Quaternion&* arg9)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Quaternion*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_ROTATE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Single get_MinHorizontalRotationDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKATCONTROLLER_GET_MINHORIZONTALROTATIONDEGREE_OFFSET))(nullptr);
		}

	};

