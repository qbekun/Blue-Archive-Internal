#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int ParseFailureKind_TypeDefinitionIndex = 24976;

	class ParseFailureKind : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		ParseFailureKind* None; // 0x0
		ParseFailureKind* ArgumentNull; // 0x0
		ParseFailureKind* Format; // 0x0
		ParseFailureKind* FormatWithParameter; // 0x0
		ParseFailureKind* Overflow; // 0x0

	};

