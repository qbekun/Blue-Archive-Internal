#pragma once
#include "unitysdk.h"

#define DIVDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x96724B0)
#define DIVDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9672620)

	inline static constexpr unsigned int DivDouble_TypeDefinitionIndex = 33195;

	class DivDouble : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DIVDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIVDOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

