#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Cinemachine { class CameraState; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x2856770)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x28567A0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x28567D0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x28567E0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x28567F0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x2856800)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2856820)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2856830)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x2856840)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x2856850)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SETSTATE_OFFSET UNITYSDK_OFFSET(0x2856860)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x2856890)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x28568A0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x28568B0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x28568C0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x28568D0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x28568E0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x28568F0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x2856950)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x2856960)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x2856970)

namespace Cinemachine
{
	inline static constexpr unsigned int StaticPointVirtualCamera_TypeDefinitionIndex = 34283;

	class StaticPointVirtualCamera : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _Priority_k__BackingField; // 0x18
		::UnityEngine::Transform* _LookAt_k__BackingField; // 0x20
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x28
		::Cinemachine::CameraState* _State_k__BackingField; // 0x30

		::System::Void set_State(::Cinemachine::CameraState* arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_NAME_OFFSET))(str, nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_ParentCamera()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET))(nullptr);
		}

		::System::Void SetState(::Cinemachine::CameraState* arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_ISLIVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Void set_Priority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_LOOKAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Cinemachine::CameraState* arg, ::System::String* str)
		{
			((::System::Void(*)(::Cinemachine::CameraState*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* get_VirtualCameraGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_NAME_OFFSET))(nullptr);
		}

	};
}

