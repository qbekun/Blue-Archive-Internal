#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CameraState; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class Transform; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x28338F0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x28339E0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x2833AE0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x2833EC0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x2834000)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x2834010)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x2834030)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x2834060)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x2834070)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x2834090)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x28340A0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x28340C0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x2834180)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2834260)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x2834330)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2834390)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x28344C0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x28345D0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x28342D0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_VALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x2833C10)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x28345F0)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2834A60)
#define CINEMACHINE_CINEMACHINEMIXINGCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2834D70)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineMixingCamera_TypeDefinitionIndex = 34222;

	class CinemachineMixingCamera : public Il2CppObject
	{
	public:
		::System::Int32 MaxCameras; // 0x0
		::System::Single m_Weight0; // 0xA0
		::System::Single m_Weight1; // 0xA4
		::System::Single m_Weight2; // 0xA8
		::System::Single m_Weight3; // 0xAC
		::System::Single m_Weight4; // 0xB0
		::System::Single m_Weight5; // 0xB4
		::System::Single m_Weight6; // 0xB8
		::System::Single m_Weight7; // 0xBC
		::Cinemachine::CameraState* m_State; // 0xC0
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0x1A8
		::UnityEngine::Transform* _LookAt_k__BackingField; // 0x1B0
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x1B8
		::Il2CppArray<::System::Object*>* m_ChildCameras; // 0x1C0
		Il2CppObject* m_indexMap; // 0x1C8

		::System::Single GetWeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetWeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetWeight(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			return (return (::System::Single(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GETWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetWeight(::Cinemachine::CinemachineVirtualCameraBase* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SETWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LIVECHILD_OFFSET))(nullptr);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LIVECHILD_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_STATE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_LOOKAT_OFFSET))(nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnTransformChildrenChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ISLIVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChildCameras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_GET_CHILDCAMERAS_OFFSET))(nullptr);
		}

		::System::Void InvalidateListOfChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_INVALIDATELISTOFCHILDREN_OFFSET))(nullptr);
		}

		::System::Void ValidateListOfChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_VALIDATELISTOFCHILDREN_OFFSET))(nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEMIXINGCAMERA_.CTOR_OFFSET))(nullptr);
		}

	};
}

