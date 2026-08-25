#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9679690)
#define GREATERTHANOREQUALDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x967A3A0)

	inline static constexpr unsigned int GreaterThanOrEqualDouble_TypeDefinitionIndex = 33260;

	class GreaterThanOrEqualDouble : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALDOUBLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

	};

