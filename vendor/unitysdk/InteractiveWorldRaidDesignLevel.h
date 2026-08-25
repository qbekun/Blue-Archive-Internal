#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineBlendDefinition; }
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }

#define INTERACTIVEWORLDRAIDDESIGNLEVEL_GET_DESIGNLEVELCAMERA_OFFSET UNITYSDK_OFFSET(0x25A2E20)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_GET_ISCAMERABLENDING_OFFSET UNITYSDK_OFFSET(0x25A2E30)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_GET_DEFAULTBLENDDEFINITION_OFFSET UNITYSDK_OFFSET(0x25A2E50)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x25A2E60)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x25A2F00)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_ENTERED_OFFSET UNITYSDK_OFFSET(0x259DAB0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_ENTERED_OFFSET UNITYSDK_OFFSET(0x25A2FA0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_VOICEFADEOUTREQUESTED_OFFSET UNITYSDK_OFFSET(0x259DBF0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_VOICEFADEOUTREQUESTED_OFFSET UNITYSDK_OFFSET(0x25A3040)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_LEAVED_OFFSET UNITYSDK_OFFSET(0x259DB50)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_LEAVED_OFFSET UNITYSDK_OFFSET(0x25A30E0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_CAMERACHANGED_OFFSET UNITYSDK_OFFSET(0x25A3180)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_CAMERACHANGED_OFFSET UNITYSDK_OFFSET(0x25A3220)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x25A32C0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x25A32D0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x25A32E0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_SETARTLEVELLIGHT_OFFSET UNITYSDK_OFFSET(0x25A3490)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25A3520)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_ENTER_OFFSET UNITYSDK_OFFSET(0x25A3540)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_GETCANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x25A3600)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_CHANGECAMERA_OFFSET UNITYSDK_OFFSET(0x2599F30)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_CHANGECAMERA_OFFSET UNITYSDK_OFFSET(0x2599BD0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_CHANGECAMERATOPREVIOUS_OFFSET UNITYSDK_OFFSET(0x2599DA0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_SENDCAMERACHANGEDSIGNAL_OFFSET UNITYSDK_OFFSET(0x25A3630)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_FADEOUTCHARACTERVOICE_OFFSET UNITYSDK_OFFSET(0x259C7D0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_LEAVE_OFFSET UNITYSDK_OFFSET(0x25A36C0)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x25A3900)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_CAMERACHANGED_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x25A3940)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A3D30)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL__SENDCAMERACHANGEDSIGNAL_B__43_0_OFFSET UNITYSDK_OFFSET(0x25A3D40)
#define INTERACTIVEWORLDRAIDDESIGNLEVEL__SENDCAMERACHANGEDSIGNAL_B__43_1_OFFSET UNITYSDK_OFFSET(0x25A3D60)

	inline static constexpr unsigned int InteractiveWorldRaidDesignLevel_TypeDefinitionIndex = 331;

	class InteractiveWorldRaidDesignLevel : public Il2CppObject
	{
	public:
		::System::Action* Initialized; // 0x18
		::System::Action* Entered; // 0x20
		::System::Action* VoiceFadeOutRequested; // 0x28
		::System::Action* Leaved; // 0x30
		Il2CppObject* CameraChanged; // 0x38
		::UnityEngine::Camera* designLevelCamera; // 0x40
		::System::Boolean autoFindCameraTransforms; // 0x48
		::Il2CppArray<::System::Object*>* cameraTransforms; // 0x50
		::UnityEngine::Light* _artLevelLight; // 0x58
		::Cinemachine::CinemachineBrain* _cameraBrain; // 0x60
		::Cinemachine::CinemachineVirtualCamera* _activeCameraTransform; // 0x68
		::Cinemachine::CinemachineVirtualCamera* _prevCameraTransform; // 0x70
		::Cinemachine::CinemachineBlendDefinition* _defaultBlendDefinition; // 0x78
		::System::Int32 _cameraIndex; // 0x88
		::System::Threading::CancellationTokenSource* _cancelTokenSource; // 0x90
		::System::Threading::CancellationTokenSource* _cameraCancelTokenSource; // 0x98
		::Il2CppArray<::System::Object*>* _allCameraTransforms; // 0xA0
		Il2CppObject* _moveableDpadMap; // 0xA8

		::UnityEngine::Camera* get_DesignLevelCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_GET_DESIGNLEVELCAMERA_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCameraBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_GET_ISCAMERABLENDING_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineBlendDefinition* get_DefaultBlendDefinition()
		{
			return ((::Cinemachine::CinemachineBlendDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_GET_DEFAULTBLENDDEFINITION_OFFSET))(nullptr);
		}

		::System::Void add_Initialized(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Initialized(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Entered(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_ENTERED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Entered(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_ENTERED_OFFSET))(arg, nullptr);
		}

		::System::Void add_VoiceFadeOutRequested(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_VOICEFADEOUTREQUESTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_VoiceFadeOutRequested(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_VOICEFADEOUTREQUESTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Leaved(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_LEAVED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Leaved(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_LEAVED_OFFSET))(arg, nullptr);
		}

		::System::Void add_CameraChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_ADD_CAMERACHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CameraChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_REMOVE_CAMERACHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetArtLevelLight(::UnityEngine::Light* arg)
		{
			((::System::Void(*)(::UnityEngine::Light*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_SETARTLEVELLIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_ENTER_OFFSET))(nullptr);
		}

		::System::Threading::CancellationToken* GetCancellationToken()
		{
			return ((::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_GETCANCELLATIONTOKEN_OFFSET))(nullptr);
		}

		::System::Void ChangeCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_CHANGECAMERA_OFFSET))(nullptr);
		}

		::System::Void ChangeCamera(::Cinemachine::CinemachineVirtualCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_CHANGECAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeCameraToPrevious()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_CHANGECAMERATOPREVIOUS_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* SendCameraChangedSignal()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_SENDCAMERACHANGEDSIGNAL_OFFSET))(nullptr);
		}

		::System::Void FadeOutCharacterVoice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_FADEOUTCHARACTERVOICE_OFFSET))(nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_LEAVE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void CameraChanged_Controller()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_CAMERACHANGED_CONTROLLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SendCameraChangedSignal_b__43_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL__SENDCAMERACHANGEDSIGNAL_B__43_0_OFFSET))(nullptr);
		}

		::System::Boolean _SendCameraChangedSignal_b__43_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDDESIGNLEVEL__SENDCAMERACHANGEDSIGNAL_B__43_1_OFFSET))(nullptr);
		}

	};

