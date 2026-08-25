#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_CINEMACHINEEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x285A9F0)
#define CINEMACHINE_CINEMACHINEEXTENSION_GET_VIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x285AA00)
#define CINEMACHINE_CINEMACHINEEXTENSION_GETALLEXTRASTATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEEXTENSION_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x285AA90)
#define CINEMACHINE_CINEMACHINEEXTENSION_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x285AAA0)
#define CINEMACHINE_CINEMACHINEEXTENSION_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x285AAB0)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x285AAD0)
#define CINEMACHINE_CINEMACHINEEXTENSION_GET_REQUIRESUSERINPUT_OFFSET UNITYSDK_OFFSET(0x285AAE0)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x285AAF0)
#define CINEMACHINE_CINEMACHINEEXTENSION_GETEXTRASTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEEXTENSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x285AB00)
#define CINEMACHINE_CINEMACHINEEXTENSION_ENSURESTARTED_OFFSET UNITYSDK_OFFSET(0x285AB20)
#define CINEMACHINE_CINEMACHINEEXTENSION_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x285AB40)
#define CINEMACHINE_CINEMACHINEEXTENSION_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x285AB50)
#define CINEMACHINE_CINEMACHINEEXTENSION_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x285AB80)
#define CINEMACHINE_CINEMACHINEEXTENSION_CONNECTTOVCAM_OFFSET UNITYSDK_OFFSET(0x285AB90)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineExtension_TypeDefinitionIndex = 34296;

	class CinemachineExtension : public Il2CppObject
	{
	public:
		::System::Single Epsilon; // 0x0
		::Cinemachine::CinemachineVirtualCameraBase* m_vcamOwner; // 0x18
		Il2CppObject* mExtraState; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_.CTOR_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineVirtualCameraBase* get_VirtualCamera()
		{
			return (return (::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_GET_VIRTUALCAMERA_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllExtraStates()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_GETALLEXTRASTATES_OFFSET))(nullptr);
		}

		::System::Void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_RequiresUserInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_GET_REQUIRESUSERINPUT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtraState(::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (Il2CppObject*(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_GETEXTRASTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void EnsureStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ENSURESTARTED_OFFSET))(nullptr);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InvokePostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ConnectToVcam(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTENSION_CONNECTTOVCAM_OFFSET))(arg, nullptr);
		}

	};
}

