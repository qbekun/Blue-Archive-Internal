#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_IBOXABLEINSTRUCTION_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IBoxableInstruction_TypeDefinitionIndex = 33338;

	class IBoxableInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_IBOXABLEINSTRUCTION_BOXIFINDEXMATCHES_OFFSET))(arg, nullptr);
		}

	};
}

