#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AC810)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AC830)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96AC840)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96AC870)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x96AC910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96ACA40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadCachedObjectInstruction_TypeDefinitionIndex = 33462;

	class LoadCachedObjectInstruction : public Il2CppObject
	{
	public:
		::System::UInt32 _index; // 0x10

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* ToDebugString(::System::Int32 arg, ::System::Object* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Object*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TODEBUGSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

