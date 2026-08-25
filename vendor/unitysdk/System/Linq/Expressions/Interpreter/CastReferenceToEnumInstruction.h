#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTREFERENCETOENUMINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B0A30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTREFERENCETOENUMINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96B0A60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastReferenceToEnumInstruction_TypeDefinitionIndex = 33499;

	class CastReferenceToEnumInstruction : public Il2CppObject
	{
	public:
		::System::Type* _t; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTREFERENCETOENUMINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTREFERENCETOENUMINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

