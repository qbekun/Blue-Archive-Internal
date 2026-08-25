#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9671450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x9671480)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x9671490)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96714C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9671500)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DefaultValueInstruction_TypeDefinitionIndex = 33187;

	class DefaultValueInstruction : public Il2CppObject
	{
	public:
		::System::Type* _type; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

