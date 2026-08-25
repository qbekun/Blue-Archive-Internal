#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_SETTRYHANDLER_OFFSET UNITYSDK_OFFSET(0x966EEF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x966EF00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x966EF10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966EF20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_CREATETRYFINALLY_OFFSET UNITYSDK_OFFSET(0x966EF50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_CREATETRYCATCH_OFFSET UNITYSDK_OFFSET(0x966EFB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966F010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966F520)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x966F570)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterTryCatchFinallyInstruction_TypeDefinitionIndex = 33165;

	class EnterTryCatchFinallyInstruction : public Il2CppObject
	{
	public:
		::System::Boolean _hasFinally; // 0x18
		::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* _tryHandler; // 0x20

		::System::Void SetTryHandler(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_SETTRYHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* get_Handler()
		{
			return (return (::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_HANDLER_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedContinuations()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* CreateTryFinally(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_CREATETRYFINALLY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* CreateTryCatch()
		{
			return (return (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_CREATETRYCATCH_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYCATCHFINALLYINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

