#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x981A350)
#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSESTRINGELEMENT_OFFSET UNITYSDK_OFFSET(0x981A3F0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int CollectionParser_TypeDefinitionIndex = 36671;

	class CollectionParser : public Il2CppObject
	{
	public:
		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseStringElement(::System::Net::Http::Headers::Lexer* arg, ::System::String&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::String&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSESTRINGELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

