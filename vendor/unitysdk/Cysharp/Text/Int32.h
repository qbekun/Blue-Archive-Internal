#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_INT32_ISNUMBER_OFFSET UNITYSDK_OFFSET(0xA4CDFC0)
#define CYSHARP_TEXT_INT32_PARSE_OFFSET UNITYSDK_OFFSET(0xA4CDFE0)

namespace Cysharp::Text
{
	inline static constexpr unsigned int Int32_TypeDefinitionIndex = 34715;

	class Int32 : public Il2CppObject
	{
	public:
		::System::Boolean IsNumber(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_INT32_ISNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int32 Parse(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_INT32_PARSE_OFFSET))(arg, nullptr);
		}

	};
}

