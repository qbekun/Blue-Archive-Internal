#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class CameraState; }

#define CINEMACHINE_ICINEMACHINECAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINECAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cinemachine
{
	inline static constexpr unsigned int ICinemachineCamera_TypeDefinitionIndex = 34325;

	class ICinemachineCamera : public Il2CppObject
	{
	public:
		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_ISLIVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* get_VirtualCameraGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_GET_ISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_GET_LOOKAT_OFFSET))(nullptr);
		}

		::System::Int32 get_Priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::System::Void set_Priority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_UPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_ParentCamera()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_GET_PARENTCAMERA_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINECAMERA_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

	};
}

