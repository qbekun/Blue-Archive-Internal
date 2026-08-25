#pragma once
#include "unitysdk.h"

#define BIGNUMBERBUFFER_CREATE_OFFSET UNITYSDK_OFFSET(0x98338D0)

	inline static constexpr unsigned int BigNumberBuffer_TypeDefinitionIndex = 37095;

	class BigNumberBuffer : public Il2CppObject
	{
	public:
		::System::Text::StringBuilder* digits; // 0x10
		::System::Int32 precision; // 0x18
		::System::Int32 scale; // 0x1C
		::System::Boolean sign; // 0x20

		BigNumberBuffer* Create()
		{
			return (return (BigNumberBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGNUMBERBUFFER_CREATE_OFFSET))(nullptr);
		}

	};

