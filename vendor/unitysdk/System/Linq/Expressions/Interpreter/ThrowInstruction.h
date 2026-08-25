#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9670570)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96705A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x96705D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96705E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x96705F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_WRAPTHROWNOBJECT_OFFSET UNITYSDK_OFFSET(0x9670690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9670750)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ThrowInstruction_TypeDefinitionIndex = 33175;

	class ThrowInstruction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::ThrowInstruction* Throw; // 0x0
		::System::Linq::Expressions::Interpreter::ThrowInstruction* VoidThrow; // 0x8
		::System::Linq::Expressions::Interpreter::ThrowInstruction* Rethrow; // 0x10
		::System::Linq::Expressions::Interpreter::ThrowInstruction* VoidRethrow; // 0x18
		::System::Boolean _hasResult; // 0x10
		::System::Boolean _rethrow; // 0x11

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Exception* WrapThrownObject(::System::Object* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_WRAPTHROWNOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_THROWINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

