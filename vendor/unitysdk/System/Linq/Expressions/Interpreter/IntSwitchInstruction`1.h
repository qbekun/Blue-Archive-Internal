#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTSWITCHINSTRUCTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTSWITCHINSTRUCTION`1_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTSWITCHINSTRUCTION`1_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTSWITCHINSTRUCTION`1_RUN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IntSwitchInstruction`1_TypeDefinitionIndex = 33176;

	class IntSwitchInstruction`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _cases; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTSWITCHINSTRUCTION`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTSWITCHINSTRUCTION`1_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTSWITCHINSTRUCTION`1_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTSWITCHINSTRUCTION`1_RUN_OFFSET))(arg, nullptr);
		}

	};
}

