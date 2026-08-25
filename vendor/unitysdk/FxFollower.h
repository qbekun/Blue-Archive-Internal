#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define FXFOLLOWER_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x20B7CA0)
#define FXFOLLOWER_CLAMPLOCALPOS_OFFSET UNITYSDK_OFFSET(0x20B7EA0)
#define FXFOLLOWER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B7F30)
#define FXFOLLOWER_SETTOTARGETIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x20B7FD0)
#define FXFOLLOWER_UPDATEROTATIONFIXEDY_OFFSET UNITYSDK_OFFSET(0x20B8210)
#define FXFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20B8460)
#define FXFOLLOWER_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x20B84E0)
#define FXFOLLOWER_START_OFFSET UNITYSDK_OFFSET(0x20B8670)
#define FXFOLLOWER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B8680)

	inline static constexpr unsigned int FxFollower_TypeDefinitionIndex = 3604;

	class FxFollower : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* FollowTarget; // 0x18
		::UnityEngine::Vector3* TargetRelativePosition; // 0x20
		::UnityEngine::Quaternion* TargetRelativeRotation; // 0x2C
		::UnityEngine::Vector3* ClampMinOffset; // 0x3C
		::UnityEngine::Vector3* ClampMaxOffset; // 0x48
		::System::Single FollowPositionPower; // 0x54
		::System::Single FollowRotationPower; // 0x58
		::System::Boolean FixYRotation; // 0x5C
		::UnityEngine::Vector3* LocalForward; // 0x60
		::UnityEngine::Quaternion* InitialRotation; // 0x6C
		::UnityEngine::Vector3* prevPosition; // 0x7C
		::UnityEngine::Quaternion* prevRotation; // 0x88

		::System::Void UpdatePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXFOLLOWER_UPDATEPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* ClampLocalPos(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + FXFOLLOWER_CLAMPLOCALPOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXFOLLOWER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetToTargetImmediately()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXFOLLOWER_SETTOTARGETIMMEDIATELY_OFFSET))(nullptr);
		}

		::System::Void UpdateRotationFixedY()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXFOLLOWER_UPDATEROTATIONFIXEDY_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXFOLLOWER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXFOLLOWER_UPDATEROTATION_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXFOLLOWER_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXFOLLOWER_ONENABLE_OFFSET))(nullptr);
		}

	};

