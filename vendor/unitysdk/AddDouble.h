#pragma once
#include "unitysdk.h"

#define ADDDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x9669A20)
#define ADDDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669070)

	inline static constexpr unsigned int AddDouble_TypeDefinitionIndex = 33127;

	class AddDouble : public <>c__DisplayClass145_0
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDDOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

