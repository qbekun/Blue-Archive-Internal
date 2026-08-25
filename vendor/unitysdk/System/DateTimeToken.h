#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int DateTimeToken_TypeDefinitionIndex = 23753;

	class DateTimeToken : public Il2CppObject
	{
	public:
		DTT* dtt; // 0x10
		::System::TokenType* suffix; // 0x14
		::System::Int32 num; // 0x18

	};
}

