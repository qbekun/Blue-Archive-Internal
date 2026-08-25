#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Animator; }
namespace Cinemachine { class CinemachineBlendDefinition; }
namespace Cinemachine { class CinemachineBlenderSettings; }
namespace Cinemachine { class ICinemachineCamera; }
namespace Cinemachine { class CameraState; }
namespace Cinemachine { class CinemachineBlend; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2836C90)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x2836DB0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_LOOKUPFAKEHASH_OFFSET UNITYSDK_OFFSET(0x2836F10)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x2837250)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GETCLIPHASH_OFFSET UNITYSDK_OFFSET(0x2837310)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2837450)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x2838500)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_UPDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x28379B0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x2838840)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x2838850)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_CHOOSECURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x2837BD0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x2838520)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x2838870)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2838880)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x2838B00)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_CREATEFAKEHASH_OFFSET UNITYSDK_OFFSET(0x28371D0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x2838B10)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x2838B30)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x2838B60)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x2838BB0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x2838C90)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_LOOKUPBLEND_OFFSET UNITYSDK_OFFSET(0x2838250)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x2838CB0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x2838D70)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x2838D80)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x2838DB0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x2838AB0)
#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2838F00)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStateDrivenCamera_TypeDefinitionIndex = 34232;

	class CinemachineStateDrivenCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0xA0
		::UnityEngine::Transform* m_Follow; // 0xA8
		::UnityEngine::Animator* m_AnimatedTarget; // 0xB0
		::System::Int32 m_LayerIndex; // 0xB8
		::System::Boolean m_ShowDebugText; // 0xBC
		::Il2CppArray<::System::Object*>* m_ChildCameras; // 0xC0
		::Il2CppArray<::System::Object*>* m_Instructions; // 0xC8
		::Cinemachine::CinemachineBlendDefinition* m_DefaultBlend; // 0xD0
		::Cinemachine::CinemachineBlenderSettings* m_CustomBlends; // 0xE0
		::Il2CppArray<::System::Object*>* m_ParentHash; // 0xE8
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0xF0
		::Cinemachine::ICinemachineCamera* m_TransitioningFrom; // 0xF8
		::Cinemachine::CameraState* m_State; // 0x100
		Il2CppObject* mHashCache; // 0x1E8
		::System::Single mActivationTime; // 0x1F0
		Instruction* mActiveInstruction; // 0x1F8
		::System::Single mPendingActivationTime; // 0x210
		Instruction* mPendingInstruction; // 0x218
		::Cinemachine::CinemachineBlend* mActiveBlend; // 0x230
		Il2CppObject* mInstructionDictionary; // 0x238
		Il2CppObject* mStateParentLookup; // 0x240
		Il2CppObject* m_clipInfoList; // 0x248

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnGuiHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONGUIHANDLER_OFFSET))(nullptr);
		}

		::System::Int32 LookupFakeHash(::System::Int32 arg, ::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_LOOKUPFAKEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetClipHash(::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GETCLIPHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateListOfChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_UPDATELISTOFCHILDREN_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_LOOKAT_OFFSET))(nullptr);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CinemachineVirtualCameraBase* ChooseCurrentCamera()
		{
			return (return (::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_CHOOSECURRENTCAMERA_OFFSET))(nullptr);
		}

		::System::Void ValidateInstructions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Int32 CreateFakeHash(::System::Int32 arg, ::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_CREATEFAKEHASH_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChildCameras()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void OnTransformChildrenChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CinemachineBlendDefinition* LookupBlend(::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::Cinemachine::CinemachineBlendDefinition*(*)(::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_LOOKUPBLEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsBlending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_ISBLENDING_OFFSET))(nullptr);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_ISLIVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void InvalidateListOfChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_INVALIDATELISTOFCHILDREN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_.CTOR_OFFSET))(nullptr);
		}

	};
}

