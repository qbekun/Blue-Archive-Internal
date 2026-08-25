#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Cinemachine { class ICinemachineCamera; }
namespace Cinemachine { class CameraState; }
namespace Cinemachine { class CinemachineBlend; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x281ECF0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x281EF90)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x281EFA0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x281EFC0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x281EFE0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x281F2D0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x281F410)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_VALIDATEINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x281F430)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x281F5D0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_RESET_OFFSET UNITYSDK_OFFSET(0x281F600)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x281EF40)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x281F680)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x281F7A0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x281F7B0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x281F840)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x281F870)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x281F880)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x2820050)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x2820110)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x2820160)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x2820170)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x2820190)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_UPDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x281F0C0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x28202E0)
#define CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ADVANCECURRENTINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x281FE70)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendListCamera_TypeDefinitionIndex = 34193;

	class CinemachineBlendListCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0xA0
		::UnityEngine::Transform* m_Follow; // 0xA8
		::System::Boolean m_ShowDebugText; // 0xB0
		::System::Boolean m_Loop; // 0xB1
		::Il2CppArray<::System::Object*>* m_ChildCameras; // 0xB8
		::Il2CppArray<::System::Object*>* m_Instructions; // 0xC0
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0xC8
		::Cinemachine::ICinemachineCamera* m_TransitioningFrom; // 0xD0
		::Cinemachine::CameraState* m_State; // 0xD8
		::System::Single mActivationTime; // 0x1C0
		::System::Int32 mCurrentInstruction; // 0x1C4
		::Cinemachine::CinemachineBlend* mActiveBlend; // 0x1C8

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LOOKAT_OFFSET))(nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_SET_LIVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateInstructions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_VALIDATEINSTRUCTIONS_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_RESET_OFFSET))(nullptr);
		}

		::System::Void InvalidateListOfChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INVALIDATELISTOFCHILDREN_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBlending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_ISBLENDING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ISLIVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTransformChildrenChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_LIVECHILD_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChildCameras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_CHILDCAMERAS_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void UpdateListOfChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_UPDATELISTOFCHILDREN_OFFSET))(nullptr);
		}

		::System::Void OnGuiHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ONGUIHANDLER_OFFSET))(nullptr);
		}

		::System::Void AdvanceCurrentInstruction(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDLISTCAMERA_ADVANCECURRENTINSTRUCTION_OFFSET))(arg, nullptr);
		}

	};
}

