#pragma once
#include "unitysdk.h"

#define IMMUTABLEVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x969F980)
#define IMMUTABLEVALUE_RUN_OFFSET UNITYSDK_OFFSET(0x969F9C0)
#define IMMUTABLEVALUE_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x969FA40)
#define IMMUTABLEVALUE_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969FB00)

	inline static constexpr unsigned int ImmutableValue_TypeDefinitionIndex = 33351;

	class ImmutableValue : public Il2CppObject
	{
	public:
		::System::Object* _defaultValue; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEVALUE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEVALUE_BOXIFINDEXMATCHES_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEVALUE_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

	};

