#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966F5F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966F610)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x966F640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x966F650)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_SETTRYHANDLER_OFFSET UNITYSDK_OFFSET(0x966F660)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966F670)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterTryFaultInstruction_TypeDefinitionIndex = 33166;

	class EnterTryFaultInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::TryFaultHandler* _tryHandler; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedContinuations()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::TryFaultHandler* get_Handler()
		{
			return (return (::System::Linq::Expressions::Interpreter::TryFaultHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_GET_HANDLER_OFFSET))(nullptr);
		}

		::System::Void SetTryHandler(::System::Linq::Expressions::Interpreter::TryFaultHandler* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::TryFaultHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_SETTRYHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERTRYFAULTINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

