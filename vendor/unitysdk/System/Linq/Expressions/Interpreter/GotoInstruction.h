#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966EB60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966EB90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966EBA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966EBB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x966EBF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966EDA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x966EE80)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GotoInstruction_TypeDefinitionIndex = 33164;

	class GotoInstruction : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_cache; // 0x0
		::System::Boolean _hasResult; // 0x18
		::System::Boolean _hasValue; // 0x19
		::System::Boolean _labelTargetGetsValue; // 0x1A

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::GotoInstruction* Create(::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::GotoInstruction*(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GOTOINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

