#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x966E670)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966E900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966E930)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966E960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966E990)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966E9A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966E9B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int BranchInstruction_TypeDefinitionIndex = 33162;

	class BranchInstruction : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_caches; // 0x0
		::System::Boolean _hasResult; // 0x18
		::System::Boolean _hasValue; // 0x19

		::Il2CppArray<::System::Object*>* get_Cache()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CACHE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

