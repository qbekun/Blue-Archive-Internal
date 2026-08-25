#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Cinemachine { class LensSettings; }
namespace Cinemachine { class CameraState; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineComponentBase; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Quaternion; }
namespace Cinemachine { class ICinemachineCamera; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x283D380)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x283D3B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x283D3C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x283D3E0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x283D3F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x283D410)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x283DC10)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x283E660)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x283E9C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x283ED40)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x283EDC0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_RESET_OFFSET UNITYSDK_OFFSET(0x283EDE0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINE_OFFSET UNITYSDK_OFFSET(0x283EDF0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINE_OFFSET UNITYSDK_OFFSET(0x283F450)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_INVALIDATECOMPONENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x283E920)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCOMPONENTOWNER_OFFSET UNITYSDK_OFFSET(0x283F5F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCOMPONENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x283F5D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCINEMACHINECOMPONENT_OFFSET UNITYSDK_OFFSET(0x283E940)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCINEMACHINECOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ADDCINEMACHINECOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYCINEMACHINECOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_UPDATECOMPONENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x283D490)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SETFLAGSFORHIDDENCHILD_OFFSET UNITYSDK_OFFSET(0x283F610)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET UNITYSDK_OFFSET(0x283DE10)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x283F6E0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x283F880)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SETSTATERAWPOSITION_OFFSET UNITYSDK_OFFSET(0x283F9F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x283FA10)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_REQUIRESUSERINPUT_OFFSET UNITYSDK_OFFSET(0x283FE90)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x283FFE0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2840080)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_TypeDefinitionIndex = 34246;

	class CinemachineVirtualCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0xA0
		::UnityEngine::Transform* m_Follow; // 0xA8
		::Cinemachine::LensSettings* m_Lens; // 0xB0
		TransitionParams* m_Transitions; // 0xE0
		BlendHint* m_LegacyBlendHint; // 0xF0
		::System::String* PipelineName; // 0x0
		CreatePipelineDelegate* CreatePipelineOverride; // 0x0
		DestroyPipelineDelegate* DestroyPipelineOverride; // 0x8
		::System::Boolean m_UserIsDragging; // 0xF4
		::Cinemachine::CameraState* m_State; // 0xF8
		::Il2CppArray<::System::Object*>* m_ComponentPipeline; // 0x1E0
		::UnityEngine::Transform* m_ComponentOwner; // 0x1E8
		::UnityEngine::Transform* mCachedLookAtTarget; // 0x1F0
		::Cinemachine::CinemachineVirtualCameraBase* mCachedLookAtTargetVcam; // 0x1F8

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_STATE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_LOOKAT_OFFSET))(nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void OnTransformChildrenChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_RESET_OFFSET))(nullptr);
		}

		::System::Void DestroyPipeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* CreatePipeline(::Cinemachine::CinemachineVirtualCamera* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINE_OFFSET))(arg, nullptr);
		}

		::System::Void InvalidateComponentPipeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_INVALIDATECOMPONENTPIPELINE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetComponentOwner()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCOMPONENTOWNER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentPipeline()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCOMPONENTPIPELINE_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineComponentBase* GetCinemachineComponent(Stage* arg)
		{
			return (return (::Cinemachine::CinemachineComponentBase*(*)(Stage*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCINEMACHINECOMPONENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCinemachineComponent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCINEMACHINECOMPONENT_OFFSET))(nullptr);
		}

		Il2CppObject* AddCinemachineComponent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ADDCINEMACHINECOMPONENT_OFFSET))(nullptr);
		}

		::System::Void DestroyCinemachineComponent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYCINEMACHINECOMPONENT_OFFSET))(nullptr);
		}

		::System::Void UpdateComponentPipeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_UPDATECOMPONENTPIPELINE_OFFSET))(nullptr);
		}

		::System::Void SetFlagsForHiddenChild(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SETFLAGSFORHIDDENCHILD_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CameraState* CalculateNewState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::Cinemachine::CameraState*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetStateRawPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SETSTATERAWPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean RequiresUserInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_REQUIRESUSERINPUT_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_.CTOR_OFFSET))(nullptr);
		}

	};
}

