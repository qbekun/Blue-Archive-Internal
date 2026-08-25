#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_EXTENSIONS_HEADERPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x8D4BB0)
#define BESTHTTP_EXTENSIONS_HEADERPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D4E70)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int HeaderParser_TypeDefinitionIndex = 23347;

	class HeaderParser : public Il2CppObject
	{
	public:
		Il2CppObject* Parse(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERPARSER_PARSE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERPARSER_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

