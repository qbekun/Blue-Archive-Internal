#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9821FB0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9821FC0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9822160)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int MediaTypeWithQualityHeaderValue_TypeDefinitionIndex = 36695;

	class MediaTypeWithQualityHeaderValue : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

