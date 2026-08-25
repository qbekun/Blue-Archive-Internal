#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966BAE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966BB20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966BB30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966BB40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966BB70)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NewArrayInitInstruction_TypeDefinitionIndex = 33146;

	class NewArrayInitInstruction : public Il2CppObject
	{
	public:
		::System::Type* _elementType; // 0x10
		::System::Int32 _elementCount; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

