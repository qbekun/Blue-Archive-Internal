#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SRPLensFlareBlendMode; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SRPLensFlareBlendMode_TypeDefinitionIndex = 33996;

	class SRPLensFlareBlendMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::SRPLensFlareBlendMode* Additive; // 0x0
		::UnityEngine::Rendering::SRPLensFlareBlendMode* Screen; // 0x0
		::UnityEngine::Rendering::SRPLensFlareBlendMode* Premultiply; // 0x0
		::UnityEngine::Rendering::SRPLensFlareBlendMode* Lerp; // 0x0

	};
}

