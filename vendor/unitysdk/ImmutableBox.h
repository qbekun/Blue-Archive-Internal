#pragma once
#include "unitysdk.h"

#define IMMUTABLEBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x969FAC0)
#define IMMUTABLEBOX_RUN_OFFSET UNITYSDK_OFFSET(0x969FB30)
#define IMMUTABLEBOX_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969FC00)

	inline static constexpr unsigned int ImmutableBox_TypeDefinitionIndex = 33352;

	class ImmutableBox : public Il2CppObject
	{
	public:
		::System::Object* _defaultValue; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEBOX_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEBOX_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLEBOX_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

	};

