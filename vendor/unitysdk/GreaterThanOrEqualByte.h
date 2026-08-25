#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96795A0)
#define GREATERTHANOREQUALBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x9679D30)

	inline static constexpr unsigned int GreaterThanOrEqualByte_TypeDefinitionIndex = 33255;

	class GreaterThanOrEqualByte : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALBYTE_RUN_OFFSET))(arg, nullptr);
		}

	};

