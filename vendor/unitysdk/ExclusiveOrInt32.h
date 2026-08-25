#pragma once
#include "unitysdk.h"

#define EXCLUSIVEORINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9675750)
#define EXCLUSIVEORINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9675360)

	inline static constexpr unsigned int ExclusiveOrInt32_TypeDefinitionIndex = 33225;

	class ExclusiveOrInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORINT32_.CTOR_OFFSET))(nullptr);
		}

	};

