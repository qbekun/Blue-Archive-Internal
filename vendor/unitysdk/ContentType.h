#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int ContentType_TypeDefinitionIndex = 34783;

	class ContentType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ContentType* Standard; // 0x0
		ContentType* Autocorrected; // 0x0
		ContentType* IntegerNumber; // 0x0
		ContentType* DecimalNumber; // 0x0
		ContentType* Alphanumeric; // 0x0
		ContentType* Name; // 0x0
		ContentType* EmailAddress; // 0x0
		ContentType* Password; // 0x0
		ContentType* Pin; // 0x0
		ContentType* Custom; // 0x0

	};

