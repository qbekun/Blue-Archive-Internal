#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966E9C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_GETLABEL_OFFSET UNITYSDK_OFFSET(0x966E9E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x966EA30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x966EAE0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IndexedBranchInstruction_TypeDefinitionIndex = 33163;

	class IndexedBranchInstruction : public Il2CppObject
	{
	public:
		::System::Int32 _labelIndex; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::RuntimeLabel* GetLabel(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::RuntimeLabel*(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_GETLABEL_OFFSET))(arg, nullptr);
		}

		::System::String* ToDebugString(::System::Int32 arg, ::System::Object* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Object*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TODEBUGSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXEDBRANCHINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

