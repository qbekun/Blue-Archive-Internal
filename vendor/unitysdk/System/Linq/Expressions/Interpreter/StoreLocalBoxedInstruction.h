#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALBOXEDINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x969F420)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALBOXEDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x969F440)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969F450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALBOXEDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x969F480)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StoreLocalBoxedInstruction_TypeDefinitionIndex = 33347;

	class StoreLocalBoxedInstruction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALBOXEDINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALBOXEDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALBOXEDINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

	};
}

