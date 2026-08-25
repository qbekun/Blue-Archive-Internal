#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96700D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96700E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x9670110)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x9670120)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9670130)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveExceptionFilterInstruction_TypeDefinitionIndex = 33172;

	class LeaveExceptionFilterInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

