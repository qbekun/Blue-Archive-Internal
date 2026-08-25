#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeVolumeTextureMemoryBudget; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeVolumeTextureMemoryBudget_TypeDefinitionIndex = 33793;

	class ProbeVolumeTextureMemoryBudget : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* MemoryBudgetLow; // 0x0
		::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* MemoryBudgetMedium; // 0x0
		::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* MemoryBudgetHigh; // 0x0

	};
}

