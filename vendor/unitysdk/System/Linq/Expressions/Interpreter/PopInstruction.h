#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96ACAA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96ACAB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96ACAC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96ACAF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96ACB20)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int PopInstruction_TypeDefinitionIndex = 33463;

	class PopInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::PopInstruction* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

