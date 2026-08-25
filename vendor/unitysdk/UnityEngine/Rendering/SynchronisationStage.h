#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SynchronisationStage; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SynchronisationStage_TypeDefinitionIndex = 31479;

	class SynchronisationStage : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::SynchronisationStage* VertexProcessing; // 0x0
		::UnityEngine::Rendering::SynchronisationStage* PixelProcessing; // 0x0

	};
}

