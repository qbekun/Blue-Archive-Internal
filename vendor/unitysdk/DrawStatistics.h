#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int DrawStatistics_TypeDefinitionIndex = 30769;

	class DrawStatistics : public Il2CppObject
	{
	public:
		::System::Int32 currentFrameIndex; // 0x10
		::System::UInt32 totalIndices; // 0x14
		::System::UInt32 commandCount; // 0x18
		::System::UInt32 drawCommandCount; // 0x1C
		::System::UInt32 materialSetCount; // 0x20
		::System::UInt32 drawRangeCount; // 0x24
		::System::UInt32 drawRangeCallCount; // 0x28
		::System::UInt32 immediateDraws; // 0x2C
		::System::UInt32 stencilRefChanges; // 0x30

	};

