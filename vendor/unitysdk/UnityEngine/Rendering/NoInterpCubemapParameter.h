#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Cubemap; }

#define UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE5150)
#define UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE51A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpCubemapParameter_TypeDefinitionIndex = 34129;

	class NoInterpCubemapParameter : public ::System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS
	{
	public:
		::System::Void .ctor(::UnityEngine::Cubemap* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Cubemap*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

