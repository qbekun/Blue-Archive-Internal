#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_TOKEN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4C7650)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 37395;

	class Token : public Il2CppObject
	{
	public:
		::System::Int32 MIN_TOKEN_TYPE; // 0x0
		::System::Int32 EOF; // 0x4
		::Antlr::Runtime::IToken* EOF_TOKEN; // 0x8
		::Antlr::Runtime::IToken* INVALID_TOKEN; // 0x10
		::Antlr::Runtime::IToken* SKIP_TOKEN; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TOKEN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

