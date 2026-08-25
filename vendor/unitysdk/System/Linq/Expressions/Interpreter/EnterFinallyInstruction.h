#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966F8A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966F8C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x966F8F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x966F900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x966F910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x966FA50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x966FAD0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterFinallyInstruction_TypeDefinitionIndex = 33167;

	class EnterFinallyInstruction : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_cache; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ProducedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumedContinuations()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* Create(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTERFINALLYINSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

