#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x966D2B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966CFF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966D2C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966D360)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GETARGS_OFFSET UNITYSDK_OFFSET(0x966D700)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x966D8C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MethodInfoCallInstruction_TypeDefinitionIndex = 33156;

	class MethodInfoCallInstruction : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* _target; // 0x10
		::System::Int32 _argumentCount; // 0x18

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Reflection::MethodInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_GETARGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_METHODINFOCALLINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

