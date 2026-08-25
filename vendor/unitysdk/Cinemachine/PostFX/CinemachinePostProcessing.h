#pragma once
#include "../../unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x2882000)
#define CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_.CTOR_OFFSET UNITYSDK_OFFSET(0x2882010)

namespace Cinemachine::PostFX
{
	inline static constexpr unsigned int CinemachinePostProcessing_TypeDefinitionIndex = 34400;

	class CinemachinePostProcessing : public Il2CppObject
	{
	public:
		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_.CTOR_OFFSET))(nullptr);
		}

	};
}

