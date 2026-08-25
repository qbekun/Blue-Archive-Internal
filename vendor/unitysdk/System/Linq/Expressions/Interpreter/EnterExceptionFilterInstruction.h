#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966FFF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x9670000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x9670030)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x9670040)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9670050)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterExceptionFilterInstruction_TypeDefinitionIndex = 33171;

	class EnterExceptionFilterInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

