#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MXVIGNETTEBLENDPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA065A30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXVignetteBlendParameter_TypeDefinitionIndex = 32701;

	class MXVignetteBlendParameter : public ::System::Net::Sockets::NetworkStream
	{
	public:
		::System::Void .ctor(eBlendOption* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(eBlendOption*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXVIGNETTEBLENDPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

