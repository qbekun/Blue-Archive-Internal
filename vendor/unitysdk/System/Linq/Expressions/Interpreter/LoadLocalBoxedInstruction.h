#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x969EBA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x969EBC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969EBD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x969EC00)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadLocalBoxedInstruction_TypeDefinitionIndex = 33341;

	class LoadLocalBoxedInstruction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

