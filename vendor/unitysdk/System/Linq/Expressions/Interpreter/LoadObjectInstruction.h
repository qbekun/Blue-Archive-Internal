#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AC670)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AC6A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96AC6B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96AC6E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96AC760)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadObjectInstruction_TypeDefinitionIndex = 33461;

	class LoadObjectInstruction : public Il2CppObject
	{
	public:
		::System::Object* _value; // 0x10

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

