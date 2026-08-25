#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int ClipCounts_TypeDefinitionIndex = 30724;

	class ClipCounts : public Il2CppObject
	{
	public:
		::System::Int32 firstClippedIndex; // 0x10
		::System::Int32 firstDegenerateIndex; // 0x14
		::System::Int32 lastClippedIndex; // 0x18
		::System::Int32 clippedTriangles; // 0x1C
		::System::Int32 addedTriangles; // 0x20
		::System::Int32 degenerateTriangles; // 0x24

	};

