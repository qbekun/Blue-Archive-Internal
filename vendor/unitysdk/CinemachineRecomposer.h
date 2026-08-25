#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINERECOMPOSER_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x281BFD0)
#define CINEMACHINERECOMPOSER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x281C000)
#define CINEMACHINERECOMPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x281C430)
#define CINEMACHINERECOMPOSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x281C4C0)
#define CINEMACHINERECOMPOSER_RESET_OFFSET UNITYSDK_OFFSET(0x281C4D0)

	inline static constexpr unsigned int CinemachineRecomposer_TypeDefinitionIndex = 34184;

	class CinemachineRecomposer : public Il2CppObject
	{
	public:
		Stage* m_ApplyAfter; // 0x28
		::System::Single m_Tilt; // 0x2C
		::System::Single m_Pan; // 0x30
		::System::Single m_Dutch; // 0x34
		::System::Single m_ZoomScale; // 0x38
		::System::Single m_FollowAttachment; // 0x3C
		::System::Single m_LookAtAttachment; // 0x40

		::System::Void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_RESET_OFFSET))(nullptr);
		}

	};

