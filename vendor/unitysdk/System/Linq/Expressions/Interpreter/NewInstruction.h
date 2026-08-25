#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A5160)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A51A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A51B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A51C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96A51F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GETARGS_OFFSET UNITYSDK_OFFSET(0x96A5370)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96A5530)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NewInstruction_TypeDefinitionIndex = 33399;

	class NewInstruction : public Il2CppObject
	{
	public:
		::System::Reflection::ConstructorInfo* _constructor; // 0x10
		::System::Int32 _argumentCount; // 0x18

		::System::Void .ctor(::System::Reflection::ConstructorInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_GETARGS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

