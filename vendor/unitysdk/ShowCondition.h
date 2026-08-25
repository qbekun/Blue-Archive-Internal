#pragma once
#include "unitysdk.h"

class ShowCondition;

	inline static constexpr unsigned int ShowCondition_TypeDefinitionIndex = 70;

	class ShowCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ShowCondition* Always; // 0x0
		ShowCondition* OnlyIfNeeded; // 0x0
		ShowCondition* WhenDragging; // 0x0

	};

