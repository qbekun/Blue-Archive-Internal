#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Cinemachine { class CinemachineBlendDefinition; }
namespace Cinemachine { class CinemachineBlenderSettings; }
namespace Cinemachine { class ICinemachineCamera; }
namespace Cinemachine { class CameraState; }
namespace Cinemachine { class CinemachineBlend; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_CINEMACHINECLEARSHOT_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x28242A0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x2824300)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x2824320)
#define CINEMACHINE_CINEMACHINECLEARSHOT_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x2824330)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x2824350)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x2824380)
#define CINEMACHINE_CINEMACHINECLEARSHOT_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x28244E0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x2824820)
#define CINEMACHINE_CINEMACHINECLEARSHOT_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x2824920)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x2824940)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x2824A90)
#define CINEMACHINE_CINEMACHINECLEARSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2824AA0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_CHOOSECURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x2824B60)
#define CINEMACHINE_CINEMACHINECLEARSHOT_RESETRANDOMIZATION_OFFSET UNITYSDK_OFFSET(0x2825780)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x28257B0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x28257E0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_UPDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x28245C0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x2825840)
#define CINEMACHINE_CINEMACHINECLEARSHOT_LOOKUPBLEND_OFFSET UNITYSDK_OFFSET(0x2825900)
#define CINEMACHINE_CINEMACHINECLEARSHOT_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2825BB0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_RANDOMIZE_OFFSET UNITYSDK_OFFSET(0x2825490)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2826050)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x28262A0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x28262C0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x28262D0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x28262E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineClearShot_TypeDefinitionIndex = 34203;

	class CinemachineClearShot : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0xA0
		::UnityEngine::Transform* m_Follow; // 0xA8
		::System::Boolean m_ShowDebugText; // 0xB0
		::Il2CppArray<::System::Object*>* m_ChildCameras; // 0xB8
		::System::Single m_ActivateAfter; // 0xC0
		::System::Single m_MinDuration; // 0xC4
		::System::Boolean m_RandomizeChoice; // 0xC8
		::Cinemachine::CinemachineBlendDefinition* m_DefaultBlend; // 0xD0
		::Cinemachine::CinemachineBlenderSettings* m_CustomBlends; // 0xE0
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0xE8
		::Cinemachine::CameraState* m_State; // 0xF0
		::System::Single mActivationTime; // 0x1D8
		::System::Single mPendingActivationTime; // 0x1DC
		::Cinemachine::ICinemachineCamera* mPendingCamera; // 0x1E0
		::Cinemachine::CinemachineBlend* mActiveBlend; // 0x1E8
		::System::Boolean mRandomizeNow; // 0x1F0
		::Il2CppArray<::System::Object*>* m_RandomizedChilden; // 0x1F8
		::Cinemachine::ICinemachineCamera* m_TransitioningFrom; // 0x200

		::System::Void InvalidateListOfChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_INVALIDATELISTOFCHILDREN_OFFSET))(nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBlending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_ISBLENDING_OFFSET))(nullptr);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_SET_LIVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ISLIVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnGuiHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONGUIHANDLER_OFFSET))(nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_.CTOR_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineCamera* ChooseCurrentCamera(::UnityEngine::Vector3* arg)
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_CHOOSECURRENTCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void ResetRandomization()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_RESETRANDOMIZATION_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void OnTransformChildrenChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONTRANSFORMCHILDRENCHANGED_OFFSET))(nullptr);
		}

		::System::Void UpdateListOfChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_UPDATELISTOFCHILDREN_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::Cinemachine::CinemachineBlendDefinition* LookupBlend(::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::Cinemachine::CinemachineBlendDefinition*(*)(::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_LOOKUPBLEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Randomize(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_RANDOMIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONENABLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChildCameras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_CHILDCAMERAS_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_LOOKAT_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_GET_LIVECHILD_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

