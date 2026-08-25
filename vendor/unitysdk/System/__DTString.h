#pragma once
#include "../unitysdk.h"

#define SYSTEM___DTSTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x934E8E0)
#define SYSTEM___DTSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x934E910)
#define SYSTEM___DTSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x934E980)
#define SYSTEM___DTSTRING_GET_COMPAREINFO_OFFSET UNITYSDK_OFFSET(0x934EA40)
#define SYSTEM___DTSTRING_GETNEXT_OFFSET UNITYSDK_OFFSET(0x934EA50)
#define SYSTEM___DTSTRING_ATEND_OFFSET UNITYSDK_OFFSET(0x934EAF0)
#define SYSTEM___DTSTRING_ADVANCE_OFFSET UNITYSDK_OFFSET(0x934EB80)
#define SYSTEM___DTSTRING_GETREGULARTOKEN_OFFSET UNITYSDK_OFFSET(0x934EC20)
#define SYSTEM___DTSTRING_GETSEPARATORTOKEN_OFFSET UNITYSDK_OFFSET(0x934EF70)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_OFFSET UNITYSDK_OFFSET(0x934F1F0)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORDS_OFFSET UNITYSDK_OFFSET(0x934F320)
#define SYSTEM___DTSTRING_MATCH_OFFSET UNITYSDK_OFFSET(0x934F870)
#define SYSTEM___DTSTRING_MATCH_OFFSET UNITYSDK_OFFSET(0x934F9D0)
#define SYSTEM___DTSTRING_MATCHLONGESTWORDS_OFFSET UNITYSDK_OFFSET(0x934FA80)
#define SYSTEM___DTSTRING_GETREPEATCOUNT_OFFSET UNITYSDK_OFFSET(0x934FB50)
#define SYSTEM___DTSTRING_GETNEXTDIGIT_OFFSET UNITYSDK_OFFSET(0x934FC30)
#define SYSTEM___DTSTRING_GETCHAR_OFFSET UNITYSDK_OFFSET(0x934FD00)
#define SYSTEM___DTSTRING_GETDIGIT_OFFSET UNITYSDK_OFFSET(0x934FD20)
#define SYSTEM___DTSTRING_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x934FD50)
#define SYSTEM___DTSTRING_SKIPWHITESPACECURRENT_OFFSET UNITYSDK_OFFSET(0x934F070)
#define SYSTEM___DTSTRING_TRIMTAIL_OFFSET UNITYSDK_OFFSET(0x934FE50)
#define SYSTEM___DTSTRING_REMOVETRAILINGINQUOTESPACES_OFFSET UNITYSDK_OFFSET(0x934FFB0)
#define SYSTEM___DTSTRING_REMOVELEADINGINQUOTESPACES_OFFSET UNITYSDK_OFFSET(0x9350220)
#define SYSTEM___DTSTRING_GETSUBSTRING_OFFSET UNITYSDK_OFFSET(0x9350510)
#define SYSTEM___DTSTRING_CONSUMESUBSTRING_OFFSET UNITYSDK_OFFSET(0x9350A90)
#define SYSTEM___DTSTRING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9350B30)

namespace System
{
	inline static constexpr unsigned int __DTString_TypeDefinitionIndex = 23750;

	class __DTString : public Il2CppObject
	{
	public:
		Il2CppObject* Value; // 0x10
		::System::Int32 Index; // 0x20
		::System::Char m_current; // 0x24
		::System::Globalization::CompareInfo* m_info; // 0x28
		::System::Boolean m_checkDigitToken; // 0x30
		::Il2CppArray<::System::Object*>* WhiteSpaceChecks; // 0x0

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Globalization::DateTimeFormatInfo* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Globalization::DateTimeFormatInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Globalization::DateTimeFormatInfo* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Globalization::DateTimeFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Globalization::CompareInfo* get_CompareInfo()
		{
			return (return (::System::Globalization::CompareInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GET_COMPAREINFO_OFFSET))(nullptr);
		}

		::System::Boolean GetNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETNEXT_OFFSET))(nullptr);
		}

		::System::Boolean AtEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_ATEND_OFFSET))(nullptr);
		}

		::System::Boolean Advance(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_ADVANCE_OFFSET))(arg, nullptr);
		}

		::System::Void GetRegularToken(::System::TokenType&* arg, int32_t&* arg, ::System::Globalization::DateTimeFormatInfo* arg)
		{
			((::System::Void(*)(::System::TokenType&*, int32_t&*, ::System::Globalization::DateTimeFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETREGULARTOKEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::TokenType* GetSeparatorToken(::System::Globalization::DateTimeFormatInfo* arg, int32_t&* arg, wchar_t&* arg)
		{
			return (return (::System::TokenType*(*)(::System::Globalization::DateTimeFormatInfo*, int32_t&*, wchar_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETSEPARATORTOKEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchSpecifiedWord(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_OFFSET))(str, nullptr);
		}

		::System::Boolean MatchSpecifiedWords(::System::String* str, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHSPECIFIEDWORDS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean Match(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCH_OFFSET))(str, nullptr);
		}

		::System::Boolean Match(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Int32 MatchLongestWords(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHLONGESTWORDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetRepeatCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETREPEATCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean GetNextDigit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETNEXTDIGIT_OFFSET))(nullptr);
		}

		::System::Char GetChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETCHAR_OFFSET))(nullptr);
		}

		::System::Int32 GetDigit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETDIGIT_OFFSET))(nullptr);
		}

		::System::Void SkipWhiteSpaces()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_SKIPWHITESPACES_OFFSET))(nullptr);
		}

		::System::Boolean SkipWhiteSpaceCurrent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_SKIPWHITESPACECURRENT_OFFSET))(nullptr);
		}

		::System::Void TrimTail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_TRIMTAIL_OFFSET))(nullptr);
		}

		::System::Void RemoveTrailingInQuoteSpaces()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_REMOVETRAILINGINQUOTESPACES_OFFSET))(nullptr);
		}

		::System::Void RemoveLeadingInQuoteSpaces()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_REMOVELEADINGINQUOTESPACES_OFFSET))(nullptr);
		}

		::System::DTSubString* GetSubString()
		{
			return (return (::System::DTSubString*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETSUBSTRING_OFFSET))(nullptr);
		}

		::System::Void ConsumeSubString(::System::DTSubString* arg)
		{
			((::System::Void(*)(::System::DTSubString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_CONSUMESUBSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

