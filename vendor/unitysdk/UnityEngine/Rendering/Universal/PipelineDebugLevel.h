#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class PipelineDebugLevel; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PipelineDebugLevel_TypeDefinitionIndex = 32517;

	class PipelineDebugLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::PipelineDebugLevel* Disabled; // 0x0
		::UnityEngine::Rendering::Universal::PipelineDebugLevel* Profiling; // 0x0

	};
}

