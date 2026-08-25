#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rigidbody; }
namespace MXUnderCover::Movement { class UCMovementImplement; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
class EntityCompositionData;

#define MXUNDERCOVER_UCENTITYMOVEMENT_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD87E80)
#define MXUNDERCOVER_UCENTITYMOVEMENT_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD87E90)
#define MXUNDERCOVER_UCENTITYMOVEMENT_CREATEIMPLEMENT_OFFSET UNITYSDK_OFFSET(0xD87EA0)
#define MXUNDERCOVER_UCENTITYMOVEMENT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0xD87F00)
#define MXUNDERCOVER_UCENTITYMOVEMENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD87F40)
#define MXUNDERCOVER_UCENTITYMOVEMENT_CLEAR_OFFSET UNITYSDK_OFFSET(0xD87F80)
#define MXUNDERCOVER_UCENTITYMOVEMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD87FA0)
#define MXUNDERCOVER_UCENTITYMOVEMENT_GETMAXROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0xD87FD0)
#define MXUNDERCOVER_UCENTITYMOVEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD87FE0)
#define MXUNDERCOVER_UCENTITYMOVEMENT_MOVEWITHNORMALIZEDINPUT_OFFSET UNITYSDK_OFFSET(0xD88010)
#define MXUNDERCOVER_UCENTITYMOVEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD88050)
#define MXUNDERCOVER_UCENTITYMOVEMENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xD880C0)
#define MXUNDERCOVER_UCENTITYMOVEMENT_ROTATEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD88130)
#define MXUNDERCOVER_UCENTITYMOVEMENT_REBIND_OFFSET UNITYSDK_OFFSET(0xD88170)
#define MXUNDERCOVER_UCENTITYMOVEMENT_SET_ISWALKING_OFFSET UNITYSDK_OFFSET(0xD88180)
#define MXUNDERCOVER_UCENTITYMOVEMENT_GETWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xD88190)
#define MXUNDERCOVER_UCENTITYMOVEMENT_ROTATE_OFFSET UNITYSDK_OFFSET(0xD881F0)
#define MXUNDERCOVER_UCENTITYMOVEMENT_MOVEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD88230)
#define MXUNDERCOVER_UCENTITYMOVEMENT_GETMAXMOVINGSPEED_OFFSET UNITYSDK_OFFSET(0xD88270)
#define MXUNDERCOVER_UCENTITYMOVEMENT_GETRIGIDBODY_OFFSET UNITYSDK_OFFSET(0xD882B0)
#define MXUNDERCOVER_UCENTITYMOVEMENT_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD882C0)
#define MXUNDERCOVER_UCENTITYMOVEMENT_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD882F0)
#define MXUNDERCOVER_UCENTITYMOVEMENT_GET_ISWALKING_OFFSET UNITYSDK_OFFSET(0xD88300)
#define MXUNDERCOVER_UCENTITYMOVEMENT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xD88310)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCEntityMovement_TypeDefinitionIndex = 9688;

	class UCEntityMovement : public Il2CppObject
	{
	public:
		::System::Single MaxMovingSpeed; // 0x30
		::System::Single MaxMovingSpeedInUnlinkedPath; // 0x34
		::System::Single MaxRotationSpeed; // 0x38
		::System::Single WalkStateRate; // 0x3C
		::System::Boolean _IsWalking_k__BackingField; // 0x40
		::UnityEngine::Rigidbody* rigidbody; // 0x48
		::MXUnderCover::Movement::UCMovementImplement* implement; // 0x50

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_GETTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_UNINITIALIZE_OFFSET))(nullptr);
		}

		::MXUnderCover::Movement::UCMovementImplement* CreateImplement()
		{
			return ((::MXUnderCover::Movement::UCMovementImplement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_CREATEIMPLEMENT_OFFSET))(nullptr);
		}

		::System::Void MoveToPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_MOVETOPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Single GetMaxRotationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_GETMAXROTATIONSPEED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MoveWithNormalizedInput(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_MOVEWITHNORMALIZEDINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Velocity()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_GET_VELOCITY_OFFSET))(nullptr);
		}

		::System::Void RotateImmediately(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_ROTATEIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_REBIND_OFFSET))(nullptr);
		}

		::System::Void set_IsWalking(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_SET_ISWALKING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetWorldRotation()
		{
			return ((::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_GETWORLDROTATION_OFFSET))(nullptr);
		}

		::System::Void Rotate(::UnityEngine::Vector3* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_ROTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveImmediately(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_MOVEIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Single GetMaxMovingSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_GETMAXMOVINGSPEED_OFFSET))(nullptr);
		}

		::UnityEngine::Rigidbody* GetRigidbody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_GETRIGIDBODY_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_FIXEDUPDATE_OFFSET))(nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWalking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_GET_ISWALKING_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMOVEMENT_GETWORLDPOSITION_OFFSET))(nullptr);
		}

	};
}

