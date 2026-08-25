#pragma once
#include "unitysdk.h"

#define ORINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96AB280)
#define ORINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AB050)

	inline static constexpr unsigned int OrInt32_TypeDefinitionIndex = 33443;

	class OrInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ORINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORINT32_.CTOR_OFFSET))(nullptr);
		}

	};

