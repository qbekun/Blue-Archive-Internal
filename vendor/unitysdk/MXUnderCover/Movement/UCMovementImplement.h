#pragma once
#include "../../unitysdk.h"

namespace MXUnderCover::Movement { class IUCMovementImplementOwner; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xDD1230)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD1240)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_GETWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_MOVEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_MOVEWITHNORMALIZEDINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_ROTATEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_ROTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD1270)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDD1280)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xDD1290)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_CALCULATEROTATION_OFFSET UNITYSDK_OFFSET(0xDD12A0)
#define MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_CALCULATEROTATION_OFFSET UNITYSDK_OFFSET(0xDD1320)

namespace MXUnderCover::Movement
{
	inline static constexpr unsigned int UCMovementImplement_TypeDefinitionIndex = 10064;

	class UCMovementImplement : public Il2CppObject
	{
	public:
		::MXUnderCover::Movement::IUCMovementImplementOwner* _Owner_k__BackingField; // 0x10

		::UnityEngine::Vector3* get_Velocity()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_GET_VELOCITY_OFFSET))(nullptr);
		}

		::MXUnderCover::Movement::IUCMovementImplementOwner* get_Owner()
		{
			return ((::MXUnderCover::Movement::IUCMovementImplementOwner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXUnderCover::Movement::IUCMovementImplementOwner* arg)
		{
			((::System::Void(*)(::MXUnderCover::Movement::IUCMovementImplementOwner*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_GETWORLDPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* GetWorldRotation()
		{
			return ((::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_GETWORLDROTATION_OFFSET))(nullptr);
		}

		::System::Void MoveImmediately(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_MOVEIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_MOVETOPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void MoveWithNormalizedInput(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_MOVEWITHNORMALIZEDINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void RotateImmediately(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_ROTATEIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Void Rotate(::UnityEngine::Vector3* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_ROTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* CalculateRotation(::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3, ::System::Single arg4, ::System::Single arg5)
		{
			return ((::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, Il2CppObject*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_CALCULATEROTATION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::UnityEngine::Quaternion* CalculateRotation(::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3, ::System::Single arg4, ::System::Single arg5, bool&* arg6)
		{
			return ((::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, Il2CppObject*, ::System::Single, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_UCMOVEMENTIMPLEMENT_CALCULATEROTATION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

