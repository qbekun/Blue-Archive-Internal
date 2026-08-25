#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define CINEMACHINE_ISIGNALSOURCE6D_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ISIGNALSOURCE6D_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cinemachine
{
	inline static constexpr unsigned int ISignalSource6D_TypeDefinitionIndex = 34332;

	class ISignalSource6D : public Il2CppObject
	{
	public:
		::System::Void GetSignal(::System::Single arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ISIGNALSOURCE6D_GETSIGNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single get_SignalDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ISIGNALSOURCE6D_GET_SIGNALDURATION_OFFSET))(nullptr);
		}

	};
}

