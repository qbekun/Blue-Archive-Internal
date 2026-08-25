#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int UNICODE_STRING_TypeDefinitionIndex = 23550;

	class UNICODE_STRING : public Il2CppObject
	{
	public:
		::System::UInt16 Length; // 0x10
		::System::UInt16 MaximumLength; // 0x12
		::System::Int32 Buffer; // 0x18

	};

