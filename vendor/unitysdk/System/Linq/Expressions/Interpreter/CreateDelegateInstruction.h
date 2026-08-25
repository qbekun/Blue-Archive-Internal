#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AEE20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AEE50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AEE80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96AEE90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96AEEC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CreateDelegateInstruction_TypeDefinitionIndex = 33481;

	class CreateDelegateInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::LightDelegateCreator* _creator; // 0x10

		::System::Void .ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LightDelegateCreator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

