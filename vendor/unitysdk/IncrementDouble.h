#pragma once
#include "unitysdk.h"

#define INCREMENTDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x967B130)
#define INCREMENTDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x967AA40)

	inline static constexpr unsigned int IncrementDouble_TypeDefinitionIndex = 33269;

	class IncrementDouble : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + INCREMENTDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREMENTDOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

