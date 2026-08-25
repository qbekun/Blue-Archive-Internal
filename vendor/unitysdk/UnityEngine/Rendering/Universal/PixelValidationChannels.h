#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class PixelValidationChannels; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PixelValidationChannels_TypeDefinitionIndex = 38089;

	class PixelValidationChannels : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::PixelValidationChannels* RGB; // 0x0
		::UnityEngine::Rendering::Universal::PixelValidationChannels* R; // 0x0
		::UnityEngine::Rendering::Universal::PixelValidationChannels* G; // 0x0
		::UnityEngine::Rendering::Universal::PixelValidationChannels* B; // 0x0
		::UnityEngine::Rendering::Universal::PixelValidationChannels* A; // 0x0

	};
}

