#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96869E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96869F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x9686A00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686A30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x96800E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanOrEqualInstruction_TypeDefinitionIndex = 33316;

	class LessThanOrEqualInstruction : public Il2CppObject
	{
	public:
		::System::Object* _nullValue; // 0x10
		::System::Linq::Expressions::Interpreter::Instruction* s_SByte; // 0x0
		::System::Linq::Expressions::Interpreter::Instruction* s_Int16; // 0x8
		::System::Linq::Expressions::Interpreter::Instruction* s_Char; // 0x10
		::System::Linq::Expressions::Interpreter::Instruction* s_Int32; // 0x18
		::System::Linq::Expressions::Interpreter::Instruction* s_Int64; // 0x20
		::System::Linq::Expressions::Interpreter::Instruction* s_Byte; // 0x28
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt16; // 0x30
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt32; // 0x38
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt64; // 0x40
		::System::Linq::Expressions::Interpreter::Instruction* s_Single; // 0x48
		::System::Linq::Expressions::Interpreter::Instruction* s_Double; // 0x50
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullSByte; // 0x58
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullInt16; // 0x60
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullChar; // 0x68
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullInt32; // 0x70
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullInt64; // 0x78
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullByte; // 0x80
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullUInt16; // 0x88
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullUInt32; // 0x90
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullUInt64; // 0x98
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullSingle; // 0xA0
		::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullDouble; // 0xA8

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

