#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_ELEMENTTRYPARSER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_ELEMENTTRYPARSER`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ElementTryParser`1_TypeDefinitionIndex = 36670;

	class ElementTryParser`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ELEMENTTRYPARSER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::Net::Http::Headers::Lexer* arg, Il2CppObject&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, Il2CppObject&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ELEMENTTRYPARSER`1_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

