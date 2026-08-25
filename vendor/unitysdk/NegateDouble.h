#pragma once
#include "unitysdk.h"

#define NEGATEDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x96A4AE0)
#define NEGATEDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A4860)

	inline static constexpr unsigned int NegateDouble_TypeDefinitionIndex = 33393;

	class NegateDouble : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATEDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGATEDOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

