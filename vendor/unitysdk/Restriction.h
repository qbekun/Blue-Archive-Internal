#pragma once
#include "unitysdk.h"

class Restriction;

	inline static constexpr unsigned int Restriction_TypeDefinitionIndex = 31;

	class Restriction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		Restriction* None; // 0x0
		Restriction* Horizontal; // 0x0
		Restriction* Vertical; // 0x0
		Restriction* PressAndHold; // 0x0

	};

