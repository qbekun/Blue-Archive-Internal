#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2869DE0)
#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x2869DF0)
#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x286ADE0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseListener_TypeDefinitionIndex = 34362;

	class CinemachineImpulseListener : public Il2CppObject
	{
	public:
		Stage* m_ApplyAfter; // 0x28
		::System::Int32 m_ChannelMask; // 0x2C
		::System::Single m_Gain; // 0x30
		::System::Boolean m_Use2DDistance; // 0x34
		::System::Boolean m_UseCameraSpace; // 0x35
		ImpulseReaction* m_ReactionSettings; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_RESET_OFFSET))(nullptr);
		}

	};
}

