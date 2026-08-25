#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_PARSERRULERETURNSCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C6230)
#define ANTLR_RUNTIME_PARSERRULERETURNSCOPE_GET_START_OFFSET UNITYSDK_OFFSET(0x4C6250)
#define ANTLR_RUNTIME_PARSERRULERETURNSCOPE_SET_START_OFFSET UNITYSDK_OFFSET(0x4C6260)
#define ANTLR_RUNTIME_PARSERRULERETURNSCOPE_GET_STOP_OFFSET UNITYSDK_OFFSET(0x4C6300)
#define ANTLR_RUNTIME_PARSERRULERETURNSCOPE_SET_STOP_OFFSET UNITYSDK_OFFSET(0x4C6310)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int ParserRuleReturnScope_TypeDefinitionIndex = 37392;

	class ParserRuleReturnScope : public Il2CppObject
	{
	public:
		::Antlr::Runtime::IToken* start; // 0x10
		::Antlr::Runtime::IToken* stop; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSERRULERETURNSCOPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Start()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSERRULERETURNSCOPE_GET_START_OFFSET))(nullptr);
		}

		::System::Void set_Start(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSERRULERETURNSCOPE_SET_START_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Stop()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSERRULERETURNSCOPE_GET_STOP_OFFSET))(nullptr);
		}

		::System::Void set_Stop(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSERRULERETURNSCOPE_SET_STOP_OFFSET))(arg, nullptr);
		}

	};
}

