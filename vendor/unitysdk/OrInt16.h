#pragma once
#include "unitysdk.h"

#define ORINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96AB1A0)
#define ORINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AB040)

	inline static constexpr unsigned int OrInt16_TypeDefinitionIndex = 33442;

	class OrInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ORINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORINT16_.CTOR_OFFSET))(nullptr);
		}

	};

