#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_ITOKENSTREAM_LT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKENSTREAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int ITokenStream_TypeDefinitionIndex = 37416;

	class ITokenStream : public Il2CppObject
	{
	public:
		::Antlr::Runtime::IToken* LT(::System::Int32 arg)
		{
			return (return (::Antlr::Runtime::IToken*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKENSTREAM_LT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKENSTREAM_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

	};
}

