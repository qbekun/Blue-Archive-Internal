#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF190)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AF1C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AF1D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96AF1E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96AF210)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96AF280)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TypeAsInstruction_TypeDefinitionIndex = 33483;

	class TypeAsInstruction : public Il2CppObject
	{
	public:
		::System::Type* _type; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

