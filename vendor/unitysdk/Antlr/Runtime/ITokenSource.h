#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_ITOKENSOURCE_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int ITokenSource_TypeDefinitionIndex = 37396;

	class ITokenSource : public Il2CppObject
	{
	public:
		::Antlr::Runtime::IToken* NextToken()
		{
			return (return (::Antlr::Runtime::IToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKENSOURCE_NEXTTOKEN_OFFSET))(nullptr);
		}

	};
}

