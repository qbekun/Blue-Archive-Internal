#pragma once
#include "unitysdk.h"

#define REFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x969F880)
#define REFERENCE_RUN_OFFSET UNITYSDK_OFFSET(0x969F8A0)
#define REFERENCE_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x969F8F0)
#define REFERENCE_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969F950)

	inline static constexpr unsigned int Reference_TypeDefinitionIndex = 33350;

	class Reference : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCE_BOXIFINDEXMATCHES_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFERENCE_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

	};

