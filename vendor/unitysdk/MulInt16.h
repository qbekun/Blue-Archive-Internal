#pragma once
#include "unitysdk.h"

#define MULINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A27F0)
#define MULINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A2770)

	inline static constexpr unsigned int MulInt16_TypeDefinitionIndex = 33373;

	class MulInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULINT16_.CTOR_OFFSET))(nullptr);
		}

	};

