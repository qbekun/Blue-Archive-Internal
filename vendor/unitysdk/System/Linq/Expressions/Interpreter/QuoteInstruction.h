#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B0EA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96B0EF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96B0F00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96B0F30)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int QuoteInstruction_TypeDefinitionIndex = 33501;

	class QuoteInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _operand; // 0x10
		Il2CppObject* _hoistedVariables; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_QUOTEINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

