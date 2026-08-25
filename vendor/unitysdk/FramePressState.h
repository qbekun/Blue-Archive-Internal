#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int FramePressState_TypeDefinitionIndex = 34892;

	class FramePressState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		FramePressState* Pressed; // 0x0
		FramePressState* Released; // 0x0
		FramePressState* PressedAndReleased; // 0x0
		FramePressState* NotChanged; // 0x0

	};

