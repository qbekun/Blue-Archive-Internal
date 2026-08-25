#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class NoiseSettings; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2841770)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x2842030)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2842040)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2841EE0)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_RESEED_OFFSET UNITYSDK_OFFSET(0x28420E0)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2842170)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBasicMultiChannelPerlin_TypeDefinitionIndex = 34248;

	class CinemachineBasicMultiChannelPerlin : public Il2CppObject
	{
	public:
		::Cinemachine::NoiseSettings* m_NoiseProfile; // 0x20
		::UnityEngine::Vector3* m_PivotOffset; // 0x28
		::System::Single m_AmplitudeGain; // 0x34
		::System::Single m_FrequencyGain; // 0x38
		::System::Boolean mInitialized; // 0x3C
		::System::Single mNoiseTime; // 0x40
		::UnityEngine::Vector3* mNoiseOffsets; // 0x44

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ReSeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_RESEED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_GET_ISVALID_OFFSET))(nullptr);
		}

	};
}

