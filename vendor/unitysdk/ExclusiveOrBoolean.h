#pragma once
#include "unitysdk.h"

#define EXCLUSIVEORBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x96760D0)
#define EXCLUSIVEORBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x96753C0)

	inline static constexpr unsigned int ExclusiveOrBoolean_TypeDefinitionIndex = 33231;

	class ExclusiveOrBoolean : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORBOOLEAN_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORBOOLEAN_.CTOR_OFFSET))(nullptr);
		}

	};

