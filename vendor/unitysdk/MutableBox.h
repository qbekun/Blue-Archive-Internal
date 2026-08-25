#pragma once
#include "unitysdk.h"

#define MUTABLEBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A0130)
#define MUTABLEBOX_RUN_OFFSET UNITYSDK_OFFSET(0x96A01A0)
#define MUTABLEBOX_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x96A0340)

	inline static constexpr unsigned int MutableBox_TypeDefinitionIndex = 33357;

	class MutableBox : public Il2CppObject
	{
	public:
		::System::Type* _type; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MUTABLEBOX_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MUTABLEBOX_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MUTABLEBOX_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

	};

