#pragma once
#include "unitysdk.h"

#define NOTEQUALDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x96A7100)
#define NOTEQUALDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A67E0)

	inline static constexpr unsigned int NotEqualDouble_TypeDefinitionIndex = 33412;

	class NotEqualDouble : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALDOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

