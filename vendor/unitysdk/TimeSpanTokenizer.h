#pragma once
#include "unitysdk.h"

#define TIMESPANTOKENIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x928BB20)
#define TIMESPANTOKENIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92944D0)
#define TIMESPANTOKENIZER_GETNEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x928BB90)
#define TIMESPANTOKENIZER_GET_EOL_OFFSET UNITYSDK_OFFSET(0x92948D0)
#define TIMESPANTOKENIZER_BACKONE_OFFSET UNITYSDK_OFFSET(0x9294930)
#define TIMESPANTOKENIZER_GET_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x9294860)

	inline static constexpr unsigned int TimeSpanTokenizer_TypeDefinitionIndex = 24980;

	class TimeSpanTokenizer : public Il2CppObject
	{
	public:
		Il2CppObject* _value; // 0x10
		::System::Int32 _pos; // 0x20

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKENIZER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKENIZER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		TimeSpanToken* GetNextToken()
		{
			return (return (TimeSpanToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKENIZER_GETNEXTTOKEN_OFFSET))(nullptr);
		}

		::System::Boolean get_EOL()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKENIZER_GET_EOL_OFFSET))(nullptr);
		}

		::System::Void BackOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKENIZER_BACKONE_OFFSET))(nullptr);
		}

		::System::Char get_NextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKENIZER_GET_NEXTCHAR_OFFSET))(nullptr);
		}

	};

