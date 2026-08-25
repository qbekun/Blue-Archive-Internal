#pragma once
#include "../unitysdk.h"

#define TMPRO_TMP_INPUTVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA16D770)
#define TMPRO_TMP_INPUTVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputValidator_TypeDefinitionIndex = 33695;

	class TMP_InputValidator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTVALIDATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Char Validate(::System::String&* arg, int32_t&* arg, ::System::Char arg)
		{
			return (return (::System::Char(*)(::System::String&*, int32_t&*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTVALIDATOR_VALIDATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

