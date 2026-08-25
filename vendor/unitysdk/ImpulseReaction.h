#pragma once
#include "unitysdk.h"

namespace Cinemachine { class NoiseSettings; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define IMPULSEREACTION_RESEED_OFFSET UNITYSDK_OFFSET(0x286AE30)
#define IMPULSEREACTION_GETREACTION_OFFSET UNITYSDK_OFFSET(0x286A930)

	inline static constexpr unsigned int ImpulseReaction_TypeDefinitionIndex = 34361;

	class ImpulseReaction : public Il2CppObject
	{
	public:
		::Cinemachine::NoiseSettings* m_SecondaryNoise; // 0x10
		::System::Single m_AmplitudeGain; // 0x18
		::System::Single m_FrequencyGain; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Single m_CurrentAmount; // 0x24
		::System::Single m_CurrentTime; // 0x28
		::System::Single m_CurrentDamping; // 0x2C
		::System::Boolean m_Initialized; // 0x30
		::UnityEngine::Vector3* m_NoiseOffsets; // 0x34

		::System::Void ReSeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPULSEREACTION_RESEED_OFFSET))(nullptr);
		}

		::System::Boolean GetReaction(::System::Single arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + IMPULSEREACTION_GETREACTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

