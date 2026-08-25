#pragma once
#include "../unitysdk.h"

#define NPA_PERCENT_ENCODE_OFFSET UNITYSDK_OFFSET(0x9BBCEF0)
#define NPA_PERCENT_DECODE_OFFSET UNITYSDK_OFFSET(0x9BBCF40)
#define NPA_PERCENT_ISDECODABLE_OFFSET UNITYSDK_OFFSET(0x9BBCF90)
#define NPA_PERCENT_ISHEX_OFFSET UNITYSDK_OFFSET(0x9BBD0D0)

namespace NPA
{
	inline static constexpr unsigned int Percent_TypeDefinitionIndex = 25527;

	class Percent : public Il2CppObject
	{
	public:
		::System::String* Encode(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PERCENT_ENCODE_OFFSET))(str, nullptr);
		}

		::System::String* Decode(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PERCENT_DECODE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsDecodable(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PERCENT_ISDECODABLE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsHex(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PERCENT_ISHEX_OFFSET))(arg, nullptr);
		}

	};
}

