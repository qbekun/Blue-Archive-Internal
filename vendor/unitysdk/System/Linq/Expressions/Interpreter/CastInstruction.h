#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AFD70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AFD80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96AFD90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x96AFDC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B0700)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastInstruction_TypeDefinitionIndex = 33497;

	class CastInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::CastInstruction* s_Boolean; // 0x0
		::System::Linq::Expressions::Interpreter::CastInstruction* s_Byte; // 0x8
		::System::Linq::Expressions::Interpreter::CastInstruction* s_Char; // 0x10
		::System::Linq::Expressions::Interpreter::CastInstruction* s_DateTime; // 0x18
		::System::Linq::Expressions::Interpreter::CastInstruction* s_Decimal; // 0x20
		::System::Linq::Expressions::Interpreter::CastInstruction* s_Double; // 0x28
		::System::Linq::Expressions::Interpreter::CastInstruction* s_Int16; // 0x30
		::System::Linq::Expressions::Interpreter::CastInstruction* s_Int32; // 0x38
		::System::Linq::Expressions::Interpreter::CastInstruction* s_Int64; // 0x40
		::System::Linq::Expressions::Interpreter::CastInstruction* s_SByte; // 0x48
		::System::Linq::Expressions::Interpreter::CastInstruction* s_Single; // 0x50
		::System::Linq::Expressions::Interpreter::CastInstruction* s_String; // 0x58
		::System::Linq::Expressions::Interpreter::CastInstruction* s_UInt16; // 0x60
		::System::Linq::Expressions::Interpreter::CastInstruction* s_UInt32; // 0x68
		::System::Linq::Expressions::Interpreter::CastInstruction* s_UInt64; // 0x70

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

