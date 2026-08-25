#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineCore; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINECORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2858190)
#define CINEMACHINE_CINEMACHINECORE_ADDACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x28582B0)
#define CINEMACHINE_CINEMACHINECORE_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x2858360)
#define CINEMACHINE_CINEMACHINECORE_GET_BRAINCOUNT_OFFSET UNITYSDK_OFFSET(0x28584D0)
#define CINEMACHINE_CINEMACHINECORE_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x2858510)
#define CINEMACHINE_CINEMACHINECORE_ADDACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x28585A0)
#define CINEMACHINE_CINEMACHINECORE_ISLIVEINBLEND_OFFSET UNITYSDK_OFFSET(0x2858690)
#define CINEMACHINE_CINEMACHINECORE_UPDATEALLACTIVEVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x2858800)
#define CINEMACHINE_CINEMACHINECORE_FINDPOTENTIALTARGETBRAIN_OFFSET UNITYSDK_OFFSET(0x28592C0)
#define CINEMACHINE_CINEMACHINECORE_UPDATEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x2858F20)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERACUTEVENT_OFFSET UNITYSDK_OFFSET(0x28598E0)
#define CINEMACHINE_CINEMACHINECORE_ISLIVE_OFFSET UNITYSDK_OFFSET(0x2858E00)
#define CINEMACHINE_CINEMACHINECORE_CAMERADISABLED_OFFSET UNITYSDK_OFFSET(0x2859AB0)
#define CINEMACHINE_CINEMACHINECORE_CAMERAENABLED_OFFSET UNITYSDK_OFFSET(0x2859BA0)
#define CINEMACHINE_CINEMACHINECORE_CAMERADESTROYED_OFFSET UNITYSDK_OFFSET(0x2859E30)
#define CINEMACHINE_CINEMACHINECORE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2859F00)
#define CINEMACHINE_CINEMACHINECORE_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x285A1A0)
#define CINEMACHINE_CINEMACHINECORE_GETUPDATETARGET_OFFSET UNITYSDK_OFFSET(0x2859570)
#define CINEMACHINE_CINEMACHINECORE_GETVCAMUPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x285A350)
#define CINEMACHINE_CINEMACHINECORE_GET_VIRTUALCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x285A3D0)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x285A410)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERAACTIVATIONEVENT_OFFSET UNITYSDK_OFFSET(0x285A490)
#define CINEMACHINE_CINEMACHINECORE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x285A240)
#define CINEMACHINE_CINEMACHINECORE_GETACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x28587B0)
#define CINEMACHINE_CINEMACHINECORE_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x285A5D0)
#define CINEMACHINE_CINEMACHINECORE_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x2851620)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x2858640)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_TypeDefinitionIndex = 34295;

	class CinemachineCore : public Il2CppObject
	{
	public:
		::System::Int32 kStreamingVersion; // 0x0
		::System::String* kVersionString; // 0x8
		::Cinemachine::CinemachineCore* sInstance; // 0x10
		::System::Boolean sShowHiddenObjects; // 0x18
		AxisInputDelegate* GetInputAxis; // 0x20
		::System::Single UniformDeltaTimeOverride; // 0x28
		::System::Single CurrentTimeOverride; // 0x2C
		GetBlendOverrideDelegate* GetBlendOverride; // 0x30
		BrainEvent* CameraUpdatedEvent; // 0x38
		BrainEvent* CameraCutEvent; // 0x40
		Il2CppObject* mActiveBrains; // 0x10
		Il2CppObject* mActiveCameras; // 0x18
		::System::Boolean m_ActiveCamerasAreSorted; // 0x20
		::System::Int32 m_ActivationSequence; // 0x24
		Il2CppObject* mAllCameras; // 0x28
		::Cinemachine::CinemachineVirtualCameraBase* mRoundRobinVcamLastFrame; // 0x30
		::System::Single s_LastUpdateTime; // 0x48
		::System::Int32 s_FixedFrameCount; // 0x4C
		Il2CppObject* mUpdateStatus; // 0x38
		UpdateFilter* m_CurrentUpdateFilter; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ADDACTIVECAMERA_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CinemachineVirtualCameraBase* GetVirtualCamera(::System::Int32 arg)
		{
			return (return (::Cinemachine::CinemachineVirtualCameraBase*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETVIRTUALCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BrainCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_BRAINCOUNT_OFFSET))(nullptr);
		}

		::System::Single get_DeltaTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_DELTATIME_OFFSET))(nullptr);
		}

		::System::Void AddActiveBrain(::Cinemachine::CinemachineBrain* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ADDACTIVEBRAIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLiveInBlend(::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ISLIVEINBLEND_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAllActiveVirtualCameras(::System::Int32 arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_UPDATEALLACTIVEVIRTUALCAMERAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cinemachine::CinemachineBrain* FindPotentialTargetBrain(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			return (return (::Cinemachine::CinemachineBrain*(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_FINDPOTENTIALTARGETBRAIN_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateVirtualCamera(::Cinemachine::CinemachineVirtualCameraBase* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_UPDATEVIRTUALCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GenerateCameraCutEvent(::Cinemachine::ICinemachineCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GENERATECAMERACUTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLive(::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ISLIVE_OFFSET))(arg, nullptr);
		}

		::System::Void CameraDisabled(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERADISABLED_OFFSET))(arg, nullptr);
		}

		::System::Void CameraEnabled(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERAENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void CameraDestroyed(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERADESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_INITIALIZEMODULE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetUpdateTarget(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETUPDATETARGET_OFFSET))(arg, nullptr);
		}

		UpdateClock* GetVcamUpdateStatus(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			return (return (UpdateClock*(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETVCAMUPDATESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VirtualCameraCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_VIRTUALCAMERACOUNT_OFFSET))(nullptr);
		}

		::System::Void RemoveActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEACTIVECAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateCameraActivationEvent(::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::ICinemachineCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GENERATECAMERAACTIVATIONEVENT_OFFSET))(arg, arg, nullptr);
		}

		::Cinemachine::CinemachineCore* get_Instance()
		{
			return (return (::Cinemachine::CinemachineCore*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_INSTANCE_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineBrain* GetActiveBrain(::System::Int32 arg)
		{
			return (return (::Cinemachine::CinemachineBrain*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETACTIVEBRAIN_OFFSET))(arg, nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_CurrentTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_CURRENTTIME_OFFSET))(nullptr);
		}

		::System::Void RemoveActiveBrain(::Cinemachine::CinemachineBrain* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEACTIVEBRAIN_OFFSET))(arg, nullptr);
		}

	};
}

