#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Quaternion; }
namespace Cinemachine { class CameraState; }
namespace Cinemachine { class CinemachineTargetGroup; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class ICinemachineTargetGroup; }
namespace Cinemachine { class CameraState&; }
namespace Cinemachine { class ICinemachineCamera; }

#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x2856E50)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_REQUIRESUSERINPUT_OFFSET UNITYSDK_OFFSET(0x2857140)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x2857150)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_VCAMSTATE_OFFSET UNITYSDK_OFFSET(0x28575A0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x2857650)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_VIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x2856EE0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_BODYAPPLIESAFTERAIM_OFFSET UNITYSDK_OFFSET(0x2857700)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x2857710)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x2857720)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x2857730)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ABSTRACTFOLLOWTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x2857920)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2857940)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x2857890)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x2857A70)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x2857F20)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x28580D0)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x2858160)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2858170)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x2858180)
#define CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ABSTRACTLOOKATTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x28576E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineComponentBase_TypeDefinitionIndex = 34287;

	class CinemachineComponentBase : public Il2CppObject
	{
	public:
		::System::Single Epsilon; // 0x0
		::Cinemachine::CinemachineVirtualCameraBase* m_vcamOwner; // 0x18

		::UnityEngine::Transform* get_FollowTarget()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_RequiresUserInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_REQUIRESUSERINPUT_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_FollowTargetRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETROTATION_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* get_VcamState()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_VCAMSTATE_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineTargetGroup* get_LookAtTargetGroup()
		{
			return (return (::Cinemachine::CinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETGROUP_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineVirtualCameraBase* get_VirtualCamera()
		{
			return (return (::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_VIRTUALCAMERA_OFFSET))(nullptr);
		}

		::System::Boolean get_BodyAppliesAfterAim()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_BODYAPPLIESAFTERAIM_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* get_LookAtTargetRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETROTATION_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineTargetGroup* get_AbstractFollowTargetGroup()
		{
			return (return (::Cinemachine::ICinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ABSTRACTFOLLOWTARGETGROUP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LookAtTarget()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGET_OFFSET))(nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_LookAtTargetPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_LOOKATTARGETPOSITION_OFFSET))(nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_STAGE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_FollowTargetPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETPOSITION_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineTargetGroup* get_FollowTargetGroup()
		{
			return (return (::Cinemachine::CinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_FOLLOWTARGETGROUP_OFFSET))(nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Void PrePipelineMutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_PREPIPELINEMUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, TransitionParams&* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, TransitionParams&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Cinemachine::ICinemachineTargetGroup* get_AbstractLookAtTargetGroup()
		{
			return (return (::Cinemachine::ICinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPONENTBASE_GET_ABSTRACTLOOKATTARGETGROUP_OFFSET))(nullptr);
		}

	};
}

