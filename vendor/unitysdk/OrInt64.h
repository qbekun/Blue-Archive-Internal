#pragma once
#include "unitysdk.h"

#define ORINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96AB360)
#define ORINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AB060)

	inline static constexpr unsigned int OrInt64_TypeDefinitionIndex = 33444;

	class OrInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ORINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORINT64_.CTOR_OFFSET))(nullptr);
		}

	};

