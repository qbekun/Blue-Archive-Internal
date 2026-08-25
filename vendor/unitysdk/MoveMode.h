#pragma once
#include "unitysdk.h"

class MoveMode;

	inline static constexpr unsigned int MoveMode_TypeDefinitionIndex = 280;

	class MoveMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		MoveMode* Target; // 0x0
		MoveMode* Previous; // 0x0
		MoveMode* NextIndex; // 0x0
		MoveMode* SkipCurrentBlend; // 0x0

	};

