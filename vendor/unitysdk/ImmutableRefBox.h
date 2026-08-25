#pragma once
#include "unitysdk.h"

#define IMMUTABLEREFBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x969FC30)
#define IMMUTABLEREFBOX_RUN_OFFSET UNITYSDK_OFFSET(0x969FC50)
#define IMMUTABLEREFBOX_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969FD10)

	inline static constexpr unsigned int ImmutableRefBox_TypeDefinitionIndex = 33353;

	class ImmutableRefBox : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEREFBOX_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEREFBOX_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEREFBOX_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

	};

