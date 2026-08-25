#pragma once
#include "unitysdk.h"

#define MULDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x96A3190)
#define MULDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A27E0)

	inline static constexpr unsigned int MulDouble_TypeDefinitionIndex = 33380;

	class MulDouble : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULDOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

