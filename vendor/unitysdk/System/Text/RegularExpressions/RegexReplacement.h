#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AF5590)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_GETORCREATE_OFFSET UNITYSDK_OFFSET(0x9AFAD90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x9AFAEA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPL_OFFSET UNITYSDK_OFFSET(0x9AFAEB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPLRTL_OFFSET UNITYSDK_OFFSET(0x9AFB0C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_OFFSET UNITYSDK_OFFSET(0x9AFB360)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexReplacement_TypeDefinitionIndex = 29233;

	class RegexReplacement : public Il2CppObject
	{
	public:
		::System::Int32 Specials; // 0x0
		::System::Int32 LeftPortion; // 0x0
		::System::Int32 RightPortion; // 0x0
		::System::Int32 LastGroup; // 0x0
		::System::Int32 WholeString; // 0x0
		Il2CppObject* _strings; // 0x10
		Il2CppObject* _rules; // 0x18
		::System::String* _Pattern_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Text::RegularExpressions::RegexNode* arg, ::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Text::RegularExpressions::RegexReplacement* GetOrCreate(Il2CppObject* arg, ::System::String* str, ::System::Collections::Hashtable* arg, ::System::Int32 arg, ::System::Collections::Hashtable* arg, ::System::Text::RegularExpressions::RegexOptions* arg)
		{
			return (return (::System::Text::RegularExpressions::RegexReplacement*(*)(Il2CppObject*, ::System::String*, ::System::Collections::Hashtable*, ::System::Int32, ::System::Collections::Hashtable*, ::System::Text::RegularExpressions::RegexOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_GETORCREATE_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::String* get_Pattern()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_GET_PATTERN_OFFSET))(nullptr);
		}

		::System::Void ReplacementImpl(::System::Text::StringBuilder* arg, ::System::Text::RegularExpressions::Match* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Text::RegularExpressions::Match*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReplacementImplRTL(Il2CppObject* arg, ::System::Text::RegularExpressions::Match* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Text::RegularExpressions::Match*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPLRTL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Replace(::System::Text::RegularExpressions::Regex* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

