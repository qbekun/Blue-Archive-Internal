#pragma once
#include "unitysdk.h"

#define PARSEELEMENTONLYCONTENT_LOCALFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x99B9610)

	inline static constexpr unsigned int ParseElementOnlyContent_LocalFrame_TypeDefinitionIndex = 27802;

	class ParseElementOnlyContent_LocalFrame : public Il2CppObject
	{
	public:
		::System::Int32 startParenEntityId; // 0x10
		Token* parsingSchema; // 0x14

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARSEELEMENTONLYCONTENT_LOCALFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

	};

