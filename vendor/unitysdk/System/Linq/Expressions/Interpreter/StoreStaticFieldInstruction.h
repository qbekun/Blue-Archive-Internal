#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9676610)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x9676640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x9676670)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x9676680)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StoreStaticFieldInstruction_TypeDefinitionIndex = 33237;

	class StoreStaticFieldInstruction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Reflection::FieldInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

