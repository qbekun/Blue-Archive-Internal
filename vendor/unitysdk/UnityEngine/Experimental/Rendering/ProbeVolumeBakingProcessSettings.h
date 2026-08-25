#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeDilationSettings; }
namespace UnityEngine::Experimental::Rendering { class VirtualOffsetSettings; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeVolumeBakingProcessSettings_TypeDefinitionIndex = 33816;

	class ProbeVolumeBakingProcessSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::ProbeDilationSettings* dilationSettings; // 0x10
		::UnityEngine::Experimental::Rendering::VirtualOffsetSettings* virtualOffsetSettings; // 0x24

	};
}

