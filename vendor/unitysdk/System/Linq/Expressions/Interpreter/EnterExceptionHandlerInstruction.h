#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96701B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96701D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x9670200)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x9670210)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x9670220)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9670230)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterExceptionHandlerInstruction_TypeDefinitionIndex = 33173;

	class EnterExceptionHandlerInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* Void; // 0x0
		::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* NonVoid; // 0x8
		::System::Boolean _hasValue; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

