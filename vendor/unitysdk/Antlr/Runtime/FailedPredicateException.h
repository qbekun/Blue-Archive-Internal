#pragma once
#include "../../unitysdk.h"

#define ANTLR_RUNTIME_FAILEDPREDICATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C46F0)
#define ANTLR_RUNTIME_FAILEDPREDICATEEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C4710)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int FailedPredicateException_TypeDefinitionIndex = 37383;

	class FailedPredicateException : public Il2CppObject
	{
	public:
		::System::String* ruleName; // 0xC0
		::System::String* predicateText; // 0xC8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_FAILEDPREDICATEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_FAILEDPREDICATEEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

