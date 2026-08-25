#pragma once
#include "unitysdk.h"

class CommandMode;

	inline static constexpr unsigned int CommandMode_TypeDefinitionIndex = 10065;

	class CommandMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		CommandMode* MoveImmediately; // 0x0
		CommandMode* MovePosition; // 0x0
		CommandMode* MovePositionDelta; // 0x0
		CommandMode* RotateImmediately; // 0x0

	};

