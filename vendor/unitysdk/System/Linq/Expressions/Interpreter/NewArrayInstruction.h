#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966BBF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966BC20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966BC30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966BC40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966BC70)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NewArrayInstruction_TypeDefinitionIndex = 33147;

	class NewArrayInstruction : public Il2CppObject
	{
	public:
		::System::Type* _elementType; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

