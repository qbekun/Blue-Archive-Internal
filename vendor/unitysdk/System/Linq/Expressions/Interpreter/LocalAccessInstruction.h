#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x969E770)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x969E790)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalAccessInstruction_TypeDefinitionIndex = 33339;

	class LocalAccessInstruction : public Il2CppObject
	{
	public:
		::System::Int32 _index; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToDebugString(::System::Int32 arg, ::System::Object* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Object*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALACCESSINSTRUCTION_TODEBUGSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

