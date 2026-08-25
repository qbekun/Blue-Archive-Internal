#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966FB40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966FB50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966FB60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966FB90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x966FBE0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveFinallyInstruction_TypeDefinitionIndex = 33168;

	class LeaveFinallyInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::Instruction* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

