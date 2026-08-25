#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SRPLensFlareDistribution; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SRPLensFlareDistribution_TypeDefinitionIndex = 33997;

	class SRPLensFlareDistribution : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::SRPLensFlareDistribution* Uniform; // 0x0
		::UnityEngine::Rendering::SRPLensFlareDistribution* Curve; // 0x0
		::UnityEngine::Rendering::SRPLensFlareDistribution* Random; // 0x0

	};
}

