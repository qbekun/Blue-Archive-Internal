#pragma once
#include "unitysdk.h"

#define MULINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A2AA0)
#define MULINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A2790)

	inline static constexpr unsigned int MulInt64_TypeDefinitionIndex = 33375;

	class MulInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULINT64_.CTOR_OFFSET))(nullptr);
		}

	};

