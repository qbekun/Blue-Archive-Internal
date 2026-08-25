#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class AxisState; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine::Utility { class HeadingTracker; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }
namespace Cinemachine { class AxisState&; }
namespace UnityEngine { class Quaternion; }
namespace Cinemachine { class ICinemachineCamera; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2849880)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_OFFSET UNITYSDK_OFFSET(0x2849A00)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_OFFSET UNITYSDK_OFFSET(0x2849A40)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x284A5B0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x284A620)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x284A6E0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x284A880)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x284B0C0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETAXISCLOSESTVALUE_OFFSET UNITYSDK_OFFSET(0x284AAD0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x284B2C0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x284CB70)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_REQUIRESUSERINPUT_OFFSET UNITYSDK_OFFSET(0x284CDC0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETHEADING_OFFSET UNITYSDK_OFFSET(0x284A070)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x284CDD0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_TypeDefinitionIndex = 34263;

	class CinemachineOrbitalTransposer : public Il2CppObject
	{
	public:
		Heading* m_Heading; // 0x98
		Recentering* m_RecenterToTargetHeading; // 0xA4
		::Cinemachine::AxisState* m_XAxis; // 0xC0
		::System::Single m_LegacyRadius; // 0x130
		::System::Single m_LegacyHeightOffset; // 0x134
		::System::Single m_LegacyHeadingBias; // 0x138
		::System::Boolean m_HeadingIsSlave; // 0x13C
		UpdateHeadingDelegate* HeadingUpdater; // 0x140
		::UnityEngine::Vector3* m_LastTargetPosition; // 0x148
		::Cinemachine::Utility::HeadingTracker* mHeadingTracker; // 0x158
		::UnityEngine::Rigidbody* m_TargetRigidBody; // 0x160
		::UnityEngine::Transform* m_PreviousTarget; // 0x168
		::UnityEngine::Vector3* m_LastCameraPosition; // 0x170
		::System::Single m_LastHeading; // 0x17C

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Single UpdateHeading(::System::Single arg, ::UnityEngine::Vector3* arg, ::Cinemachine::AxisState&* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::UnityEngine::Vector3*, ::Cinemachine::AxisState&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single UpdateHeading(::System::Single arg, ::UnityEngine::Vector3* arg, ::Cinemachine::AxisState&* arg, Recentering&* arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::System::Single, ::UnityEngine::Vector3*, ::Cinemachine::AxisState&*, Recentering&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateInputAxisProvider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEINPUTAXISPROVIDER_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, TransitionParams&* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, TransitionParams&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single GetAxisClosestValue(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETAXISCLOSESTVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetTargetCameraPosition(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RequiresUserInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_REQUIRESUSERINPUT_OFFSET))(nullptr);
		}

		::System::Single GetTargetHeading(::System::Single arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETHEADING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_.CTOR_OFFSET))(nullptr);
		}

	};
}

