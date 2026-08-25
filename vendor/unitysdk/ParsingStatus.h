#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int ParsingStatus_TypeDefinitionIndex = 34663;

	class ParsingStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ParsingStatus* OK; // 0x0
		ParsingStatus* Failed; // 0x0
		ParsingStatus* Overflow; // 0x0

	};

