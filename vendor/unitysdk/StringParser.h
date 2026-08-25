#pragma once
#include "unitysdk.h"

#define STRINGPARSER_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x9295050)
#define STRINGPARSER_NEXTNONDIGIT_OFFSET UNITYSDK_OFFSET(0x92950B0)
#define STRINGPARSER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9294940)
#define STRINGPARSER_PARSEINT_OFFSET UNITYSDK_OFFSET(0x9295670)
#define STRINGPARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x9295170)
#define STRINGPARSER_SKIPBLANKS_OFFSET UNITYSDK_OFFSET(0x9295100)

	inline static constexpr unsigned int StringParser_TypeDefinitionIndex = 24983;

	class StringParser : public Il2CppObject
	{
	public:
		Il2CppObject* _str; // 0x10
		::System::Char _ch; // 0x20
		::System::Int32 _pos; // 0x24
		::System::Int32 _len; // 0x28

		::System::Void NextChar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGPARSER_NEXTCHAR_OFFSET))(nullptr);
		}

		::System::Char NextNonDigit()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGPARSER_NEXTNONDIGIT_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(Il2CppObject* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGPARSER_TRYPARSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ParseInt(::System::Int32 arg, int32_t&* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, int32_t&*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGPARSER_PARSEINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ParseTime(int64_t&* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(int64_t&*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGPARSER_PARSETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SkipBlanks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGPARSER_SKIPBLANKS_OFFSET))(nullptr);
		}

	};

