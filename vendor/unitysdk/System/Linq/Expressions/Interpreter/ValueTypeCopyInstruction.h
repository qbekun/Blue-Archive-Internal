#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x969F720)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x969F730)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969F740)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x969F770)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x969F7D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x969F7E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ValueTypeCopyInstruction_TypeDefinitionIndex = 33349;

	class ValueTypeCopyInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction* Instruction; // 0x0

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

