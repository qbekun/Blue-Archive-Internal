#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineBlend; }
namespace UnityEngine { class Transform; }
namespace Cinemachine { class CameraState; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class GameObject; }
namespace Cinemachine { class ICinemachineCamera; }

#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x2856980)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_BLEND_OFFSET UNITYSDK_OFFSET(0x2856990)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_BLEND_OFFSET UNITYSDK_OFFSET(0x28569A0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x28569B0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x28569E0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x28569F0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x2856A70)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x2856A80)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x2856AD0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x2856B00)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x2856B30)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2856B40)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x2856B50)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x2856B60)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2856B70)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x2856B80)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET UNITYSDK_OFFSET(0x2856B90)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x2856BB0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x2856BD0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x2856BE0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x2856BF0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x2856C10)

namespace Cinemachine
{
	inline static constexpr unsigned int BlendSourceVirtualCamera_TypeDefinitionIndex = 34284;

	class BlendSourceVirtualCamera : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineBlend* _Blend_k__BackingField; // 0x10
		::System::Int32 _Priority_k__BackingField; // 0x18
		::UnityEngine::Transform* _LookAt_k__BackingField; // 0x20
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x28
		::Cinemachine::CameraState* _State_k__BackingField; // 0x30

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_LOOKAT_OFFSET))(nullptr);
		}

		::System::Void set_Blend(::Cinemachine::CinemachineBlend* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBlend*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_BLEND_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CinemachineBlend* get_Blend()
		{
			return (return (::Cinemachine::CinemachineBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_BLEND_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Cinemachine::CinemachineBlend* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBlend*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* get_VirtualCameraGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_State(::Cinemachine::CameraState* arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_STATE_OFFSET))(arg, nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_ParentCamera()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET))(nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int32 get_Priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PRIORITY_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* CalculateNewState(::System::Single arg)
		{
			return (return (::Cinemachine::CameraState*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ISLIVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Priority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

