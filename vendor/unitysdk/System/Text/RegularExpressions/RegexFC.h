#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AEF240)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AEF340)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AEF420)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ADDFC_OFFSET UNITYSDK_OFFSET(0x9AEF2B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_GET_CASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x9AEF4F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_SET_CASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x9AEF500)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_GETFIRSTCHARS_OFFSET UNITYSDK_OFFSET(0x9AEE610)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexFC_TypeDefinitionIndex = 29226;

	class RegexFC : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::RegexCharClass* _cc; // 0x10
		::System::Boolean _nullable; // 0x18
		::System::Boolean _CaseInsensitive_k__BackingField; // 0x19

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Char arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Char, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean AddFC(::System::Text::RegularExpressions::RegexFC* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Text::RegularExpressions::RegexFC*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ADDFC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_CaseInsensitive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_GET_CASEINSENSITIVE_OFFSET))(nullptr);
		}

		::System::Void set_CaseInsensitive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_SET_CASEINSENSITIVE_OFFSET))(arg, nullptr);
		}

		::System::String* GetFirstChars(::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::String*(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_GETFIRSTCHARS_OFFSET))(arg, nullptr);
		}

	};
}

