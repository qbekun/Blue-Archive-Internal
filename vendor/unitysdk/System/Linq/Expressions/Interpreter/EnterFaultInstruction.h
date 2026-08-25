#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966FC60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966FC80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966FCB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x966FCC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966FE00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x966FE70)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterFaultInstruction_TypeDefinitionIndex = 33169;

	class EnterFaultInstruction : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_cache; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::EnterFaultInstruction* Create(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::EnterFaultInstruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFAULTINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

