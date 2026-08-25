#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x282E440)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x282E450)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x282E4C0)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x282E4E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFollowZoom_TypeDefinitionIndex = 34217;

	class CinemachineFollowZoom : public Il2CppObject
	{
	public:
		::System::Single m_Width; // 0x28
		::System::Single m_Damping; // 0x2C
		::System::Single m_MinFOV; // 0x30
		::System::Single m_MaxFOV; // 0x34

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

