#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Syntax { class TokenKind; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_TOKENFACTS_GETTEXT_OFFSET UNITYSDK_OFFSET(0x909F610)

namespace Microsoft::CSharp::RuntimeBinder::Syntax
{
	inline static constexpr unsigned int TokenFacts_TypeDefinitionIndex = 34462;

	class TokenFacts : public Il2CppObject
	{
	public:
		::System::String* GetText(::Microsoft::CSharp::RuntimeBinder::Syntax::TokenKind* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::TokenKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_TOKENFACTS_GETTEXT_OFFSET))(arg, nullptr);
		}

	};
}

