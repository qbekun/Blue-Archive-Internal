#pragma once
#include "unitysdk.h"

#define EQUALDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x9673F30)
#define EQUALDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673370)

	inline static constexpr unsigned int EqualDouble_TypeDefinitionIndex = 33208;

	class EqualDouble : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALDOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

