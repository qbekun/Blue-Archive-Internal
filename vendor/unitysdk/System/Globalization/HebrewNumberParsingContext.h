#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_HEBREWNUMBERPARSINGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9263230)

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumberParsingContext_TypeDefinitionIndex = 24965;

	class HebrewNumberParsingContext : public Il2CppObject
	{
	public:
		HS* state; // 0x10
		::System::Int32 result; // 0x14

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBERPARSINGCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

