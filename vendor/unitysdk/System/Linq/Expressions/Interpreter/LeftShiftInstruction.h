#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x9684E30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x9684E40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x9684E50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684E80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x967ED20)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeftShiftInstruction_TypeDefinitionIndex = 33292;

	class LeftShiftInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::Instruction* s_SByte; // 0x0
		::System::Linq::Expressions::Interpreter::Instruction* s_Int16; // 0x8
		::System::Linq::Expressions::Interpreter::Instruction* s_Int32; // 0x10
		::System::Linq::Expressions::Interpreter::Instruction* s_Int64; // 0x18
		::System::Linq::Expressions::Interpreter::Instruction* s_Byte; // 0x20
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt16; // 0x28
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt32; // 0x30
		::System::Linq::Expressions::Interpreter::Instruction* s_UInt64; // 0x38

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

