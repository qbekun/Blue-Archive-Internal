#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF050)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AF080)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AF090)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96AF0A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96AF0D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96AF130)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TypeIsInstruction_TypeDefinitionIndex = 33482;

	class TypeIsInstruction : public Il2CppObject
	{
	public:
		::System::Type* _type; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEISINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

