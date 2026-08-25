#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966C110)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966C120)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966C130)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966C160)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x966C220)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SetArrayItemInstruction_TypeDefinitionIndex = 33150;

	class SetArrayItemInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::SetArrayItemInstruction* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SETARRAYITEMINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

