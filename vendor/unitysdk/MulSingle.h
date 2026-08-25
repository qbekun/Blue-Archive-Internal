#pragma once
#include "unitysdk.h"

#define MULSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x96A3020)
#define MULSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A27D0)

	inline static constexpr unsigned int MulSingle_TypeDefinitionIndex = 33379;

	class MulSingle : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULSINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULSINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

