#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A57A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A57F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96A5820)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ByRefNewInstruction_TypeDefinitionIndex = 33400;

	class ByRefNewInstruction : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _byrefArgs; // 0x20

		::System::Void .ctor(::System::Reflection::ConstructorInfo* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFNEWINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

