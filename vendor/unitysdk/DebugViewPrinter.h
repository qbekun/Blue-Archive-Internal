#pragma once
#include "unitysdk.h"

#define DEBUGVIEWPRINTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x969B740)
#define DEBUGVIEWPRINTER_ANALYZE_OFFSET UNITYSDK_OFFSET(0x969D890)
#define DEBUGVIEWPRINTER_ADDTRYSTART_OFFSET UNITYSDK_OFFSET(0x969DE40)
#define DEBUGVIEWPRINTER_ADDHANDLEREXIT_OFFSET UNITYSDK_OFFSET(0x969DEF0)
#define DEBUGVIEWPRINTER_INDENT_OFFSET UNITYSDK_OFFSET(0x969DF90)
#define DEBUGVIEWPRINTER_DEDENT_OFFSET UNITYSDK_OFFSET(0x969DFE0)
#define DEBUGVIEWPRINTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x969E030)
#define DEBUGVIEWPRINTER_EMITEXITS_OFFSET UNITYSDK_OFFSET(0x969E610)

	inline static constexpr unsigned int DebugViewPrinter_TypeDefinitionIndex = 33335;

	class DebugViewPrinter : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::Interpreter* _interpreter; // 0x10
		Il2CppObject* _tryStart; // 0x18
		Il2CppObject* _handlerEnter; // 0x20
		Il2CppObject* _handlerExit; // 0x28
		::System::String* _indent; // 0x30

		::System::Void .ctor(::System::Linq::Expressions::Interpreter::Interpreter* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::Interpreter*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGVIEWPRINTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Analyze()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGVIEWPRINTER_ANALYZE_OFFSET))(nullptr);
		}

		::System::Void AddTryStart(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGVIEWPRINTER_ADDTRYSTART_OFFSET))(arg, nullptr);
		}

		::System::Void AddHandlerExit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGVIEWPRINTER_ADDHANDLEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void Indent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGVIEWPRINTER_INDENT_OFFSET))(nullptr);
		}

		::System::Void Dedent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGVIEWPRINTER_DEDENT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGVIEWPRINTER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void EmitExits(::System::Text::StringBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGVIEWPRINTER_EMITEXITS_OFFSET))(arg, arg, nullptr);
		}

	};

