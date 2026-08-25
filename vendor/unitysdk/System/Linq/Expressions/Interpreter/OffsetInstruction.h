#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_FIXUP_OFFSET UNITYSDK_OFFSET(0x966E060)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x966E0E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x966E190)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966E240)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int OffsetInstruction_TypeDefinitionIndex = 33158;

	class OffsetInstruction : public Il2CppObject
	{
	public:
		::System::Int32 _offset; // 0x10

		::Il2CppArray<::System::Object*>* get_Cache()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_GET_CACHE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Fixup(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_FIXUP_OFFSET))(arg, nullptr);
		}

		::System::String* ToDebugString(::System::Int32 arg, ::System::Object* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Object*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TODEBUGSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_OFFSETINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

