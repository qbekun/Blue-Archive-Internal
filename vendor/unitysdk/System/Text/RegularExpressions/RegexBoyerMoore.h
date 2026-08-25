#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AE1F10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_MATCHPATTERN_OFFSET UNITYSDK_OFFSET(0x9AE2560)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x9AE26B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_SCAN_OFFSET UNITYSDK_OFFSET(0x9AE2720)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexBoyerMoore_TypeDefinitionIndex = 29219;

	class RegexBoyerMoore : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Positive; // 0x10
		::Il2CppArray<::System::Object*>* NegativeASCII; // 0x18
		::Il2CppArray<::System::Object*>* NegativeUnicode; // 0x20
		::System::String* Pattern; // 0x28
		::System::Int32 LowASCII; // 0x30
		::System::Int32 HighASCII; // 0x34
		::System::Boolean RightToLeft; // 0x38
		::System::Boolean CaseInsensitive; // 0x39
		::System::Globalization::CultureInfo* _culture; // 0x40

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean MatchPattern(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_MATCHPATTERN_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsMatch(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_ISMATCH_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int32 Scan(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_SCAN_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

