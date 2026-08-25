#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9683BF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9683CB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_LOCALCOUNT_OFFSET UNITYSDK_OFFSET(0x9683CC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_CLOSURESIZE_OFFSET UNITYSDK_OFFSET(0x9683CD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_INSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x9683D20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_CLOSUREVARIABLES_OFFSET UNITYSDK_OFFSET(0x9683D40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_RUN_OFFSET UNITYSDK_OFFSET(0x9683D50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9683DD0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int Interpreter_TypeDefinitionIndex = 33279;

	class Interpreter : public Il2CppObject
	{
	public:
		::System::Object* NoValue; // 0x0
		::System::Linq::Expressions::Interpreter::InstructionArray* _instructions; // 0x10
		::Il2CppArray<::System::Object*>* _objects; // 0x38
		::Il2CppArray<::System::Object*>* _labels; // 0x40
		::Il2CppArray<::System::Object*>* _debugInfos; // 0x48
		::System::String* _Name_k__BackingField; // 0x50
		::System::Int32 _LocalCount_k__BackingField; // 0x58
		Il2CppObject* _ClosureVariables_k__BackingField; // 0x60

		::System::Void .ctor(::System::String* str, ::System::Linq::Expressions::Interpreter::LocalVariables* arg, ::System::Linq::Expressions::Interpreter::InstructionArray* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Linq::Expressions::Interpreter::LocalVariables*, ::System::Linq::Expressions::Interpreter::InstructionArray*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_LocalCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_LOCALCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_ClosureSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_CLOSURESIZE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::InstructionArray* get_Instructions()
		{
			return (return (::System::Linq::Expressions::Interpreter::InstructionArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_INSTRUCTIONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClosureVariables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_GET_CLOSUREVARIABLES_OFFSET))(nullptr);
		}

		::System::Void Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

