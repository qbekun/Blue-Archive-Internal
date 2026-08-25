#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DepthOfFieldMode; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELDMODEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA063D80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthOfFieldModeParameter_TypeDefinitionIndex = 32674;

	class DepthOfFieldModeParameter : public ::System::Net::NetworkInformation::Win32_SOCKADDR
	{
	public:
		::System::Void .ctor(::UnityEngine::Rendering::Universal::DepthOfFieldMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DepthOfFieldMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELDMODEPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

