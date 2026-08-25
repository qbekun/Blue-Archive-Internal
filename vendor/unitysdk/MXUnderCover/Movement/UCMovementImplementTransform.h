#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace MXUnderCover::Movement { class IUCMovementImplementOwner; }

#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDD22E0)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_ROTATEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xDD2390)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xDD2460)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0xDD2490)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_GETWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xDD24D0)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_MOVEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xDD2500)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_MOVEWITHNORMALIZEDINPUT_OFFSET UNITYSDK_OFFSET(0xDD2590)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xDD26F0)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_CLEAR_OFFSET UNITYSDK_OFFSET(0xDD2710)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD2720)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_ROTATE_OFFSET UNITYSDK_OFFSET(0xDD28C0)

namespace MXUnderCover::Movement
{
	inline static constexpr unsigned int UCMovementImplementTransform_TypeDefinitionIndex = 10068;

	class UCMovementImplementTransform : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* transform; // 0x18
		::UnityEngine::Vector3* velocity; // 0x20
		::UnityEngine::Vector3* prevPosition; // 0x2C

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void RotateImmediately(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_ROTATEIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_GETWORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Void MoveToPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_MOVETOPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetWorldRotation()
		{
			return ((::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_GETWORLDROTATION_OFFSET))(nullptr);
		}

		::System::Void MoveImmediately(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_MOVEIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Void MoveWithNormalizedInput(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_MOVEWITHNORMALIZEDINPUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Velocity()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_GET_VELOCITY_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXUnderCover::Movement::IUCMovementImplementOwner* arg)
		{
			((::System::Void(*)(::MXUnderCover::Movement::IUCMovementImplementOwner*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Rotate(::UnityEngine::Vector3* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENTTRANSFORM_ROTATE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

