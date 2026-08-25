#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A8710)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A8720)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A8730)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A8740)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96A8770)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96A87E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullCheckInstruction_TypeDefinitionIndex = 33436;

	class NullCheckInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::Instruction* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

