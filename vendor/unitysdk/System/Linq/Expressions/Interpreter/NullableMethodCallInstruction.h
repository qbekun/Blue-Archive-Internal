#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AF430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AF440)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96AF450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF480)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x96AF490)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATEGETVALUE_OFFSET UNITYSDK_OFFSET(0x96AF980)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullableMethodCallInstruction_TypeDefinitionIndex = 33492;

	class NullableMethodCallInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_hasValue; // 0x0
		::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_value; // 0x8
		::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_equals; // 0x10
		::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_getHashCode; // 0x18
		::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_getValueOrDefault1; // 0x20
		::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_toString; // 0x28

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Create(::System::String* str, ::System::Int32 arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::String*, ::System::Int32, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* CreateGetValue()
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATEGETVALUE_OFFSET))(nullptr);
		}

	};
}

