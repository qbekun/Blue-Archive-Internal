#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96702F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x9670320)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x9670350)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x9670360)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x9670370)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96704C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9670500)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveExceptionHandlerInstruction_TypeDefinitionIndex = 33174;

	class LeaveExceptionHandlerInstruction : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_cache; // 0x0
		::System::Boolean _hasValue; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction* Create(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

