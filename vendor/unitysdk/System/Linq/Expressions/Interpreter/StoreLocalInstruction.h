#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x969F130)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x969F150)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969F160)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x969F190)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x969F210)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StoreLocalInstruction_TypeDefinitionIndex = 33345;

	class StoreLocalInstruction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_BOXIFINDEXMATCHES_OFFSET))(arg, nullptr);
		}

	};
}

