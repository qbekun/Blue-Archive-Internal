#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x966E250)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966E2F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966E320)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966E330)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966E3B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int BranchFalseInstruction_TypeDefinitionIndex = 33159;

	class BranchFalseInstruction : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_cache; // 0x0

		::Il2CppArray<::System::Object*>* get_Cache()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_CACHE_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHFALSEINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

