#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966C2A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966C2B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966C2C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966C2F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966C300)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x966C3A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ArrayLengthInstruction_TypeDefinitionIndex = 33151;

	class ArrayLengthInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::ArrayLengthInstruction* Instance; // 0x0

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYLENGTHINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

