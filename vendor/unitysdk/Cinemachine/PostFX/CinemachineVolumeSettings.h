#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class VolumeProfile; }
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_APPLYPOSTFX_OFFSET UNITYSDK_OFFSET(0x2882020)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_INVALIDATECACHEDPROFILE_OFFSET UNITYSDK_OFFSET(0x28829F0)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2882B30)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_ONCAMERACUT_OFFSET UNITYSDK_OFFSET(0x2882C10)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x2882C20)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2883390)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x28833B0)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2883030)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x28833C0)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_GETDYNAMICBRAINVOLUMES_OFFSET UNITYSDK_OFFSET(0x2882370)
#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x28835A0)

namespace Cinemachine::PostFX
{
	inline static constexpr unsigned int CinemachineVolumeSettings_TypeDefinitionIndex = 34403;

	class CinemachineVolumeSettings : public Il2CppObject
	{
	public:
		::System::Single s_VolumePriority; // 0x0
		::System::Boolean m_FocusTracksTarget; // 0x28
		FocusTrackingMode* m_FocusTracking; // 0x2C
		::UnityEngine::Transform* m_FocusTarget; // 0x30
		::System::Single m_FocusOffset; // 0x38
		::UnityEngine::Rendering::VolumeProfile* m_Profile; // 0x40
		::System::String* sVolumeOwnerName; // 0x8
		Il2CppObject* sVolumes; // 0x10

		::System::Void ApplyPostFX(::Cinemachine::CinemachineBrain* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_APPLYPOSTFX_OFFSET))(arg, nullptr);
		}

		::System::Void InvalidateCachedProfile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_INVALIDATECACHEDPROFILE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnCameraCut(::Cinemachine::CinemachineBrain* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_ONCAMERACUT_OFFSET))(arg, nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void InitializeModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_INITIALIZEMODULE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDynamicBrainVolumes(::Cinemachine::CinemachineBrain* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Cinemachine::CinemachineBrain*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_GETDYNAMICBRAINVOLUMES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS_ONENABLE_OFFSET))(nullptr);
		}

	};
}

