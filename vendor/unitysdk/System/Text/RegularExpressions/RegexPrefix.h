#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFAC50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_CASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x9AFAC80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x9AFAC90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x9AFACF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AFAD00)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexPrefix_TypeDefinitionIndex = 29232;

	class RegexPrefix : public Il2CppObject
	{
	public:
		::System::Boolean _CaseInsensitive_k__BackingField; // 0x10
		::System::Text::RegularExpressions::RegexPrefix* _Empty_k__BackingField; // 0x0
		::System::String* _Prefix_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_CaseInsensitive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_CASEINSENSITIVE_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexPrefix* get_Empty()
		{
			return (return (::System::Text::RegularExpressions::RegexPrefix*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_EMPTY_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_.CCTOR_OFFSET))(nullptr);
		}

	};
}

