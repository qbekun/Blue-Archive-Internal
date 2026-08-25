#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x969ED60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x969ED80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969ED90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x969EDC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadLocalFromClosureInstruction_TypeDefinitionIndex = 33342;

	class LoadLocalFromClosureInstruction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

