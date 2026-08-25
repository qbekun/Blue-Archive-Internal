#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Rigidbody; }
namespace MXUnderCover::Movement { class IUCMovementImplementOwner; }
namespace UnityEngine { class Quaternion; }

#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_MOVEWITHNORMALIZEDINPUT_OFFSET UNITYSDK_OFFSET(0xDD16C0)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_CLEAR_OFFSET UNITYSDK_OFFSET(0xDD1810)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_MOVEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xDD18B0)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_ROTATE_OFFSET UNITYSDK_OFFSET(0xDD1920)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD1A20)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_ROTATEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xDD1B40)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0xDD1C40)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xDD1CB0)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xDD1CD0)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_GETWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xDD2140)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xDD2170)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDD21A0)

namespace MXUnderCover::Movement
{
	inline static constexpr unsigned int UCMovementImplementRigidbody_TypeDefinitionIndex = 10067;

	class UCMovementImplementRigidbody : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* velocity; // 0x18
		Il2CppObject* prevPosition; // 0x24
		::System::Single deltaTime; // 0x34
		::System::Boolean updateVelocity; // 0x38
		::UnityEngine::Rigidbody* rigidbody; // 0x40
		Il2CppObject* commandQueue; // 0x48
		Il2CppObject* targetForward; // 0x50
		Il2CppObject* rotationClockwise; // 0x60

		::System::Void MoveWithNormalizedInput(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_MOVEWITHNORMALIZEDINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_CLEAR_OFFSET))(nullptr);
		}

		::System::Void MoveImmediately(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_MOVEIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Void Rotate(::UnityEngine::Vector3* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_ROTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MXUnderCover::Movement::IUCMovementImplementOwner* arg)
		{
			((::System::Void(*)(::MXUnderCover::Movement::IUCMovementImplementOwner*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RotateImmediately(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_ROTATEIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_MOVETOPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Velocity()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_GET_VELOCITY_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* GetWorldRotation()
		{
			return ((::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_GETWORLDROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_GETWORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTRIGIDBODY_LATEUPDATE_OFFSET))(nullptr);
		}

	};
}

