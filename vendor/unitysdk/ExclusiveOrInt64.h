#pragma once
#include "unitysdk.h"

#define EXCLUSIVEORINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96758D0)
#define EXCLUSIVEORINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9675370)

	inline static constexpr unsigned int ExclusiveOrInt64_TypeDefinitionIndex = 33226;

	class ExclusiveOrInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORINT64_.CTOR_OFFSET))(nullptr);
		}

	};

