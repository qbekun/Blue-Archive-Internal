#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineImpulseDefinition; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define SIGNALSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2869810)
#define SIGNALSOURCE_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x2869850)
#define SIGNALSOURCE_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x2869870)

	inline static constexpr unsigned int SignalSource_TypeDefinitionIndex = 34358;

	class SignalSource : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineImpulseDefinition* m_Def; // 0x10
		::UnityEngine::Vector3* m_Velocity; // 0x18

		::System::Void .ctor(::Cinemachine::CinemachineImpulseDefinition* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineImpulseDefinition*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNALSOURCE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_SignalDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNALSOURCE_GET_SIGNALDURATION_OFFSET))(nullptr);
		}

		::System::Void GetSignal(::System::Single arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNALSOURCE_GETSIGNAL_OFFSET))(arg, arg, arg, nullptr);
		}

	};

