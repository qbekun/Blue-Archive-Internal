#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineImpulseDefinition; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define LEGACYSIGNALSOURCE_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x2869940)
#define LEGACYSIGNALSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2869D50)
#define LEGACYSIGNALSOURCE_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x2869CF0)

	inline static constexpr unsigned int LegacySignalSource_TypeDefinitionIndex = 34359;

	class LegacySignalSource : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineImpulseDefinition* m_Def; // 0x10
		::UnityEngine::Vector3* m_Velocity; // 0x18
		::System::Single m_StartTimeOffset; // 0x24

		::System::Void GetSignal(::System::Single arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + LEGACYSIGNALSOURCE_GETSIGNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Cinemachine::CinemachineImpulseDefinition* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineImpulseDefinition*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + LEGACYSIGNALSOURCE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_SignalDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYSIGNALSOURCE_GET_SIGNALDURATION_OFFSET))(nullptr);
		}

	};

