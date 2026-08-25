#pragma once
#include "unitysdk.h"

#define MULOVFINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A3740)
#define MULOVFINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A36E0)

	inline static constexpr unsigned int MulOvfInt16_TypeDefinitionIndex = 33382;

	class MulOvfInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULOVFINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULOVFINT16_.CTOR_OFFSET))(nullptr);
		}

	};

