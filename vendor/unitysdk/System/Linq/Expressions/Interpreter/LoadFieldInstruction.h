#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96763C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96763F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x9676420)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x9676430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x9676440)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadFieldInstruction_TypeDefinitionIndex = 33235;

	class LoadFieldInstruction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Reflection::FieldInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

