#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AF2E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AF2F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96AF300)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF330)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96AF340)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96AF3B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TypeEqualsInstruction_TypeDefinitionIndex = 33484;

	class TypeEqualsInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::TypeEqualsInstruction* Instance; // 0x0

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

