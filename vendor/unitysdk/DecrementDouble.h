#pragma once
#include "unitysdk.h"

#define DECREMENTDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x96713A0)
#define DECREMENTDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9670F50)

	inline static constexpr unsigned int DecrementDouble_TypeDefinitionIndex = 33185;

	class DecrementDouble : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DECREMENTDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECREMENTDOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

