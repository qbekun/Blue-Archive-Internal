#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A7BF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A7C00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A7C10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A7C20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x96A7C50)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotInstruction_TypeDefinitionIndex = 33435;

	class NotInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::Instruction* s_Boolean; // 0x0
		::System::Linq::Expressions::Interpreter::Instruction* s_Int64; // 0x8
		::System::Linq::Expressions::Interpreter::Instruction* s_Int32; // 0x10
		::System::Linq::Expressions::Interpreter::Instruction* s_Int16; // 0x18
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt64; // 0x20
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt32; // 0x28
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt16; // 0x30
		::System::Linq::Expressions::Interpreter::Instruction* s_Byte; // 0x38
		::System::Linq::Expressions::Interpreter::Instruction* s_SByte; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

