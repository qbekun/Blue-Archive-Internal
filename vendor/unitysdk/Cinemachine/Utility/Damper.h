#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define CINEMACHINE_UTILITY_DAMPER_DECAYCONSTANT_OFFSET UNITYSDK_OFFSET(0x2884A80)
#define CINEMACHINE_UTILITY_DAMPER_DECAYEDREMAINDER_OFFSET UNITYSDK_OFFSET(0x2884AB0)
#define CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET UNITYSDK_OFFSET(0x2884AE0)
#define CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET UNITYSDK_OFFSET(0x2884B70)
#define CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET UNITYSDK_OFFSET(0x2884DA0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int Damper_TypeDefinitionIndex = 34411;

	class Damper : public Il2CppObject
	{
	public:
		::System::Single Epsilon; // 0x0
		::System::Single kNegligibleResidual; // 0x0
		::System::Single kLogNegligibleResidual; // 0x0

		::System::Single DecayConstant(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DECAYCONSTANT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single DecayedRemainder(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DECAYEDREMAINDER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Damp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Damp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Damp(::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

