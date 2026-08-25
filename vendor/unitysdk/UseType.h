#pragma once
#include "unitysdk.h"

class UseType;

	inline static constexpr unsigned int UseType_TypeDefinitionIndex = 4467;

	class UseType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		UseType* CanUse; // 0x0
		UseType* CanNotUse; // 0x0
		UseType* NotEnoughCost; // 0x0
		UseType* InvalidStatus; // 0x0
		UseType* OnTSS; // 0x0

	};

