#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int PipelineInstruction_TypeDefinitionIndex = 29649;

	class PipelineInstruction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		PipelineInstruction* Abort; // 0x0
		PipelineInstruction* Advance; // 0x0
		PipelineInstruction* Pause; // 0x0
		PipelineInstruction* Reread; // 0x0
		PipelineInstruction* GiveStream; // 0x0

	};

