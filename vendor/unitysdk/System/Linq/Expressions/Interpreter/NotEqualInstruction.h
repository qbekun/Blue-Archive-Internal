#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A5A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96A5AA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A5AB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A5AE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x96A5AF0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotEqualInstruction_TypeDefinitionIndex = 33425;

	class NotEqualInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::Instruction* s_reference; // 0x0
		::System::Linq::Expressions::Interpreter::Instruction* s_Boolean; // 0x8
		::System::Linq::Expressions::Interpreter::Instruction* s_SByte; // 0x10
		::System::Linq::Expressions::Interpreter::Instruction* s_Int16; // 0x18
		::System::Linq::Expressions::Interpreter::Instruction* s_Char; // 0x20
		::System::Linq::Expressions::Interpreter::Instruction* s_Int32; // 0x28
		::System::Linq::Expressions::Interpreter::Instruction* s_Int64; // 0x30
		::System::Linq::Expressions::Interpreter::Instruction* s_Byte; // 0x38
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt16; // 0x40
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt32; // 0x48
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt64; // 0x50
		::System::Linq::Expressions::Interpreter::Instruction* s_Single; // 0x58
		::System::Linq::Expressions::Interpreter::Instruction* s_Double; // 0x60
		::System::Linq::Expressions::Interpreter::Instruction* s_SByteLiftedToNull; // 0x68
		::System::Linq::Expressions::Interpreter::Instruction* s_Int16LiftedToNull; // 0x70
		::System::Linq::Expressions::Interpreter::Instruction* s_CharLiftedToNull; // 0x78
		::System::Linq::Expressions::Interpreter::Instruction* s_Int32LiftedToNull; // 0x80
		::System::Linq::Expressions::Interpreter::Instruction* s_Int64LiftedToNull; // 0x88
		::System::Linq::Expressions::Interpreter::Instruction* s_ByteLiftedToNull; // 0x90
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt16LiftedToNull; // 0x98
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt32LiftedToNull; // 0xA0
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt64LiftedToNull; // 0xA8
		::System::Linq::Expressions::Interpreter::Instruction* s_SingleLiftedToNull; // 0xB0
		::System::Linq::Expressions::Interpreter::Instruction* s_DoubleLiftedToNull; // 0xB8

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

