#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686C40)
#define LESSTHANOREQUALDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x9687950)

	inline static constexpr unsigned int LessThanOrEqualDouble_TypeDefinitionIndex = 33315;

	class LessThanOrEqualDouble : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALDOUBLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

	};

