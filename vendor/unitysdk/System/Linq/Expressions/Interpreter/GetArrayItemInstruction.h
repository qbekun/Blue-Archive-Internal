#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966BF80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966BF90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966BFA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966BFB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966BFE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x966C090)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GetArrayItemInstruction_TypeDefinitionIndex = 33149;

	class GetArrayItemInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::GetArrayItemInstruction* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GETARRAYITEMINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

