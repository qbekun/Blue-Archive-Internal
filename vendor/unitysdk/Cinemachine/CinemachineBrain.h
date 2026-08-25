#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Cinemachine { class CinemachineBlendDefinition; }
namespace Cinemachine { class CinemachineBlenderSettings; }
namespace UnityEngine { class Camera; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class WaitForFixedUpdate; }
namespace Cinemachine { class CinemachineBlend; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace Cinemachine { class CameraState; }
namespace Cinemachine { class CameraState&; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::SceneManagement { class Scene; }
namespace UnityEngine { class Color; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace Cinemachine { class CinemachineBlend&; }

#define CINEMACHINE_CINEMACHINEBRAIN_GET_OUTPUTCAMERA_OFFSET UNITYSDK_OFFSET(0x281EC00)
#define CINEMACHINE_CINEMACHINEBRAIN_PUSHSTATETOUNITYCAMERA_OFFSET UNITYSDK_OFFSET(0x2820440)
#define CINEMACHINE_CINEMACHINEBRAIN_PROCESSACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x2820770)
#define CINEMACHINE_CINEMACHINEBRAIN_START_OFFSET UNITYSDK_OFFSET(0x2821350)
#define CINEMACHINE_CINEMACHINEBRAIN_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x28216F0)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_SOLOCAMERA_OFFSET UNITYSDK_OFFSET(0x28225F0)
#define CINEMACHINE_CINEMACHINEBRAIN_RELEASECAMERAOVERRIDE_OFFSET UNITYSDK_OFFSET(0x281C780)
#define CINEMACHINE_CINEMACHINEBRAIN_ISLIVE_OFFSET UNITYSDK_OFFSET(0x281E870)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_DEFAULTWORLDUP_OFFSET UNITYSDK_OFFSET(0x2821140)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_CURRENTCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2822640)
#define CINEMACHINE_CINEMACHINEBRAIN_ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x2822670)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x2821200)
#define CINEMACHINE_CINEMACHINEBRAIN_LOOKUPBLEND_OFFSET UNITYSDK_OFFSET(0x28226D0)
#define CINEMACHINE_CINEMACHINEBRAIN_UPDATEFRAME0_OFFSET UNITYSDK_OFFSET(0x2821B10)
#define CINEMACHINE_CINEMACHINEBRAIN_GETSOLOGUICOLOR_OFFSET UNITYSDK_OFFSET(0x2822C30)
#define CINEMACHINE_CINEMACHINEBRAIN_ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x2822C40)
#define CINEMACHINE_CINEMACHINEBRAIN_AFTERPHYSICS_OFFSET UNITYSDK_OFFSET(0x2822CA0)
#define CINEMACHINE_CINEMACHINEBRAIN_DEEPCAMBFROMBLEND_OFFSET UNITYSDK_OFFSET(0x2822D30)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_ACTIVEBLEND_OFFSET UNITYSDK_OFFSET(0x2821220)
#define CINEMACHINE_CINEMACHINEBRAIN_UPDATEVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x2821370)
#define CINEMACHINE_CINEMACHINEBRAIN_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x2822E30)
#define CINEMACHINE_CINEMACHINEBRAIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x2823210)
#define CINEMACHINE_CINEMACHINEBRAIN_SETCAMERAOVERRIDE_OFFSET UNITYSDK_OFFSET(0x281D1B0)
#define CINEMACHINE_CINEMACHINEBRAIN_GETBRAINFRAME_OFFSET UNITYSDK_OFFSET(0x2823220)
#define CINEMACHINE_CINEMACHINEBRAIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2823380)
#define CINEMACHINE_CINEMACHINEBRAIN_ISLIVEINBLEND_OFFSET UNITYSDK_OFFSET(0x28235E0)
#define CINEMACHINE_CINEMACHINEBRAIN_TOPCAMERAFROMPRIORITYQUEUE_OFFSET UNITYSDK_OFFSET(0x2822AA0)
#define CINEMACHINE_CINEMACHINEBRAIN_SET_SOLOCAMERA_OFFSET UNITYSDK_OFFSET(0x28237D0)
#define CINEMACHINE_CINEMACHINEBRAIN_COMPUTECURRENTBLEND_OFFSET UNITYSDK_OFFSET(0x28220B0)
#define CINEMACHINE_CINEMACHINEBRAIN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x28239A0)
#define CINEMACHINE_CINEMACHINEBRAIN_GET_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x2820FB0)
#define CINEMACHINE_CINEMACHINEBRAIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2823A10)
#define CINEMACHINE_CINEMACHINEBRAIN_GETEFFECTIVEDELTATIME_OFFSET UNITYSDK_OFFSET(0x2821910)
#define CINEMACHINE_CINEMACHINEBRAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2823E40)
#define CINEMACHINE_CINEMACHINEBRAIN_SET_CURRENTCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x28240F0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_TypeDefinitionIndex = 34200;

	class CinemachineBrain : public Il2CppObject
	{
	public:
		::System::Boolean m_ShowDebugText; // 0x18
		::System::Boolean m_ShowCameraFrustum; // 0x19
		::System::Boolean m_IgnoreTimeScale; // 0x1A
		::UnityEngine::Transform* m_WorldUpOverride; // 0x20
		UpdateMethod* m_UpdateMethod; // 0x28
		BrainUpdateMethod* m_BlendUpdateMethod; // 0x2C
		::Cinemachine::CinemachineBlendDefinition* m_DefaultBlend; // 0x30
		::Cinemachine::CinemachineBlenderSettings* m_CustomBlends; // 0x40
		::UnityEngine::Camera* m_OutputCamera; // 0x48
		BrainEvent* m_CameraCutEvent; // 0x50
		VcamActivatedEvent* m_CameraActivatedEvent; // 0x58
		::Cinemachine::ICinemachineCamera* mSoloCamera; // 0x0
		::UnityEngine::Coroutine* mPhysicsCoroutine; // 0x60
		::System::Int32 m_LastFrameUpdated; // 0x68
		::UnityEngine::WaitForFixedUpdate* mWaitForFixedUpdate; // 0x70
		Il2CppObject* mFrameStack; // 0x78
		::System::Int32 mNextFrameId; // 0x80
		::Cinemachine::CinemachineBlend* mCurrentLiveCameras; // 0x88
		::UnityEngine::AnimationCurve* mDefaultLinearAnimationCurve; // 0x8
		::Cinemachine::ICinemachineCamera* mActiveCameraPreviousFrame; // 0x90
		::UnityEngine::GameObject* mActiveCameraPreviousFrameGameObject; // 0x98
		::Cinemachine::CameraState* _CurrentCameraState_k__BackingField; // 0xA0

		::UnityEngine::Camera* get_OutputCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_OUTPUTCAMERA_OFFSET))(nullptr);
		}

		::System::Void PushStateToUnityCamera(::Cinemachine::CameraState&* arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_PUSHSTATETOUNITYCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessActiveCamera(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_PROCESSACTIVECAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_START_OFFSET))(nullptr);
		}

		::System::Void ManualUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_MANUALUPDATE_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_SoloCamera()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_SOLOCAMERA_OFFSET))(nullptr);
		}

		::System::Void ReleaseCameraOverride(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_RELEASECAMERAOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLive(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ISLIVE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_DefaultWorldUp()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_DEFAULTWORLDUP_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* get_CurrentCameraState()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_CURRENTCAMERASTATE_OFFSET))(nullptr);
		}

		::System::Void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONSCENEUNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBlending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_ISBLENDING_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineBlendDefinition* LookupBlend(::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::Cinemachine::CinemachineBlendDefinition*(*)(::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_LOOKUPBLEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateFrame0(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_UPDATEFRAME0_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetSoloGUIColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GETSOLOGUICOLOR_OFFSET))(nullptr);
		}

		::System::Void OnSceneLoaded(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONSCENELOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* AfterPhysics()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_AFTERPHYSICS_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineCamera* DeepCamBFromBlend(::Cinemachine::CinemachineBlend* arg)
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::Cinemachine::CinemachineBlend*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_DEEPCAMBFROMBLEND_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CinemachineBlend* get_ActiveBlend()
		{
			return (return (::Cinemachine::CinemachineBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_ACTIVEBLEND_OFFSET))(nullptr);
		}

		::System::Void UpdateVirtualCameras(UpdateFilter* arg, ::System::Single arg)
		{
			((::System::Void(*)(UpdateFilter*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_UPDATEVIRTUALCAMERAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnGuiHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONGUIHANDLER_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Int32 SetCameraOverride(::System::Int32 arg, ::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::ICinemachineCamera* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_SETCAMERAOVERRIDE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBrainFrame(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GETBRAINFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsLiveInBlend(::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ISLIVEINBLEND_OFFSET))(arg, nullptr);
		}

		::Cinemachine::ICinemachineCamera* TopCameraFromPriorityQueue()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_TOPCAMERAFROMPRIORITYQUEUE_OFFSET))(nullptr);
		}

		::System::Void set_SoloCamera(::Cinemachine::ICinemachineCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_SET_SOLOCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void ComputeCurrentBlend(::Cinemachine::CinemachineBlend&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBlend&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_COMPUTECURRENTBLEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_.CCTOR_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_ActiveVirtualCamera()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GET_ACTIVEVIRTUALCAMERA_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_ONENABLE_OFFSET))(nullptr);
		}

		::System::Single GetEffectiveDeltaTime(::System::Boolean arg)
		{
			return (return (::System::Single(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_GETEFFECTIVEDELTATIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCameraState(::Cinemachine::CameraState* arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_SET_CURRENTCAMERASTATE_OFFSET))(arg, nullptr);
		}

	};
}

