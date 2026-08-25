#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_EXTENSIONS_WWWAUTHENTICATEHEADERPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D7F90)
#define BESTHTTP_EXTENSIONS_WWWAUTHENTICATEHEADERPARSER_PARSEQUOTEDHEADER_OFFSET UNITYSDK_OFFSET(0x8D7FD0)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int WWWAuthenticateHeaderParser_TypeDefinitionIndex = 23359;

	class WWWAuthenticateHeaderParser : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WWWAUTHENTICATEHEADERPARSER_.CTOR_OFFSET))(str, nullptr);
		}

		Il2CppObject* ParseQuotedHeader(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WWWAUTHENTICATEHEADERPARSER_PARSEQUOTEDHEADER_OFFSET))(str, nullptr);
		}

	};
}

