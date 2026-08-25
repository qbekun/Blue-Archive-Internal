#pragma once
#include "unitysdk.h"

class Direction;

	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 14899;

	class Direction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		Direction* Right; // 0x0
		Direction* RightTop; // 0x0
		Direction* LeftTop; // 0x0
		Direction* Left; // 0x0
		Direction* LeftBottom; // 0x0
		Direction* RightBottom; // 0x0

	};

