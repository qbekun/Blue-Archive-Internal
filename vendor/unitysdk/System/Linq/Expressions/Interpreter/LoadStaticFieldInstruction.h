#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96762B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96762E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x9676310)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x9676320)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadStaticFieldInstruction_TypeDefinitionIndex = 33234;

	class LoadStaticFieldInstruction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Reflection::FieldInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

