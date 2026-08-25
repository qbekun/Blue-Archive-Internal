#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966FEE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966FEF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x966FF00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966FF10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966FF40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x966FF70)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveFaultInstruction_TypeDefinitionIndex = 33170;

	class LeaveFaultInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::Instruction* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedContinuations()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFAULTINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

