#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeVolumeShadingParameters_TypeDefinitionIndex = 33792;

	class ProbeVolumeShadingParameters : public Il2CppObject
	{
	public:
		::System::Single normalBias; // 0x10
		::System::Single viewBias; // 0x14
		::System::Boolean scaleBiasByMinDistanceBetweenProbes; // 0x18
		::System::Single samplingNoise; // 0x1C

	};
}

