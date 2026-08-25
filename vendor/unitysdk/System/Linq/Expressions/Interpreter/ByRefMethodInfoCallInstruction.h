#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966D940)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966D990)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966DA30)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ByRefMethodInfoCallInstruction_TypeDefinitionIndex = 33157;

	class ByRefMethodInfoCallInstruction : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _byrefArgs; // 0x20

		::System::Void .ctor(::System::Reflection::MethodInfo* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFMETHODINFOCALLINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

