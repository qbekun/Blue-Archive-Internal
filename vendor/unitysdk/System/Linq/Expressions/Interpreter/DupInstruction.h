#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96ACBA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96ACBB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96ACBC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96ACBF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96ACC20)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DupInstruction_TypeDefinitionIndex = 33464;

	class DupInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::DupInstruction* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

