#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A44A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A44B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A44C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A44F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x96A4500)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NegateInstruction_TypeDefinitionIndex = 33394;

	class NegateInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::Instruction* s_Int16; // 0x0
		::System::Linq::Expressions::Interpreter::Instruction* s_Int32; // 0x8
		::System::Linq::Expressions::Interpreter::Instruction* s_Int64; // 0x10
		::System::Linq::Expressions::Interpreter::Instruction* s_Single; // 0x18
		::System::Linq::Expressions::Interpreter::Instruction* s_Double; // 0x20

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

