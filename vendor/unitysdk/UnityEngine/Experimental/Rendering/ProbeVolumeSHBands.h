#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeVolumeSHBands; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeVolumeSHBands_TypeDefinitionIndex = 33794;

	class ProbeVolumeSHBands : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* SphericalHarmonicsL1; // 0x0
		::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* SphericalHarmonicsL2; // 0x0

	};
}

