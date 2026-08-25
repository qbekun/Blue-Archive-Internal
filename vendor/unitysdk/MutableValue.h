#pragma once
#include "unitysdk.h"

#define MUTABLEVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x969FF20)
#define MUTABLEVALUE_RUN_OFFSET UNITYSDK_OFFSET(0x969FF60)
#define MUTABLEVALUE_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x96A00B0)
#define MUTABLEVALUE_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A0170)

	inline static constexpr unsigned int MutableValue_TypeDefinitionIndex = 33356;

	class MutableValue : public Il2CppObject
	{
	public:
		::System::Type* _type; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MUTABLEVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MUTABLEVALUE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MUTABLEVALUE_BOXIFINDEXMATCHES_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MUTABLEVALUE_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

	};

