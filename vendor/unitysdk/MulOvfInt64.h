#pragma once
#include "unitysdk.h"

#define MULOVFINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A3BE0)
#define MULOVFINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A3700)

	inline static constexpr unsigned int MulOvfInt64_TypeDefinitionIndex = 33384;

	class MulOvfInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULOVFINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULOVFINT64_.CTOR_OFFSET))(nullptr);
		}

	};

