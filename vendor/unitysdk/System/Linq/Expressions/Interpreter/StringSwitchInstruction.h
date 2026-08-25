#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96708B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x9670900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x9670930)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x9670940)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StringSwitchInstruction_TypeDefinitionIndex = 33177;

	class StringSwitchInstruction : public Il2CppObject
	{
	public:
		Il2CppObject* _cases; // 0x10
		Il2CppObject* _nullCase; // 0x18

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STRINGSWITCHINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

