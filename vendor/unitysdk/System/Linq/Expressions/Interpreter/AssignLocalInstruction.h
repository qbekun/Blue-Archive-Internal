#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x969EFE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x969F000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x969F010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969F020)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x969F050)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x969F0D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AssignLocalInstruction_TypeDefinitionIndex = 33344;

	class AssignLocalInstruction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_BOXIFINDEXMATCHES_OFFSET))(arg, nullptr);
		}

	};
}

