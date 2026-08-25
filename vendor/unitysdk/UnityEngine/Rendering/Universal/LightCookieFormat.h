#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class LightCookieFormat; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightCookieFormat_TypeDefinitionIndex = 32511;

	class LightCookieFormat : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::LightCookieFormat* GrayscaleLow; // 0x0
		::UnityEngine::Rendering::Universal::LightCookieFormat* GrayscaleHigh; // 0x0
		::UnityEngine::Rendering::Universal::LightCookieFormat* ColorLow; // 0x0
		::UnityEngine::Rendering::Universal::LightCookieFormat* ColorHigh; // 0x0
		::UnityEngine::Rendering::Universal::LightCookieFormat* ColorHDR; // 0x0

	};
}

