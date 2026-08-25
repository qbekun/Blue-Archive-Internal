#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SynchronisationStageFlags; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SynchronisationStageFlags_TypeDefinitionIndex = 31524;

	class SynchronisationStageFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::SynchronisationStageFlags* VertexProcessing; // 0x0
		::UnityEngine::Rendering::SynchronisationStageFlags* PixelProcessing; // 0x0
		::UnityEngine::Rendering::SynchronisationStageFlags* ComputeProcessing; // 0x0
		::UnityEngine::Rendering::SynchronisationStageFlags* AllGPUOperations; // 0x0

	};
}

