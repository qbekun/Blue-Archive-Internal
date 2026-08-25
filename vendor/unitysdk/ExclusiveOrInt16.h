#pragma once
#include "unitysdk.h"

#define EXCLUSIVEORINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9675590)
#define EXCLUSIVEORINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9675350)

	inline static constexpr unsigned int ExclusiveOrInt16_TypeDefinitionIndex = 33224;

	class ExclusiveOrInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORINT16_.CTOR_OFFSET))(nullptr);
		}

	};

