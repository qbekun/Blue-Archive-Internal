#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
namespace Cinemachine { class ICinemachineCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }
namespace Cinemachine { class CinemachineBrain; }

#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_COMPUTELOOKATPOINT_OFFSET UNITYSDK_OFFSET(0x281DD80)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x281E090)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_GET_AIMTARGET_OFFSET UNITYSDK_OFFSET(0x281E1C0)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x281E1E0)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_SET_AIMTARGET_OFFSET UNITYSDK_OFFSET(0x281E200)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x281E210)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_RESET_OFFSET UNITYSDK_OFFSET(0x281E630)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_COMPUTEAIMTARGET_OFFSET UNITYSDK_OFFSET(0x281E440)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_DRAWRETICLE_OFFSET UNITYSDK_OFFSET(0x281E6B0)
#define CINEMACHINE_CINEMACHINE3RDPERSONAIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x281EC90)

namespace Cinemachine
{
	inline static constexpr unsigned int Cinemachine3rdPersonAim_TypeDefinitionIndex = 34191;

	class Cinemachine3rdPersonAim : public Il2CppObject
	{
	public:
		::UnityEngine::LayerMask* AimCollisionFilter; // 0x28
		::System::String* IgnoreTag; // 0x30
		::System::Single AimDistance; // 0x38
		::UnityEngine::RectTransform* AimTargetReticle; // 0x40
		::UnityEngine::Vector3* _AimTarget_k__BackingField; // 0x48

		::UnityEngine::Vector3* ComputeLookAtPoint(::UnityEngine::Vector3* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_COMPUTELOOKATPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_AimTarget()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_GET_AIMTARGET_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void set_AimTarget(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_SET_AIMTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_RESET_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* ComputeAimTarget(::UnityEngine::Vector3* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_COMPUTEAIMTARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawReticle(::Cinemachine::CinemachineBrain* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_DRAWRETICLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONAIM_.CTOR_OFFSET))(nullptr);
		}

	};
}

