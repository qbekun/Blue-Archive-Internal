#pragma once
#include "unitysdk.h"

#define MULINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A2950)
#define MULINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A2780)

	inline static constexpr unsigned int MulInt32_TypeDefinitionIndex = 33374;

	class MulInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULINT32_.CTOR_OFFSET))(nullptr);
		}

	};

