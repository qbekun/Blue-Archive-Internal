#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINEPIXELPERFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2835B70)
#define CINEMACHINE_CINEMACHINEPIXELPERFECT_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x2835B80)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePixelPerfect_TypeDefinitionIndex = 34226;

	class CinemachinePixelPerfect : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPIXELPERFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPIXELPERFECT_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

