#pragma once
#include "unitysdk.h"

#define SUBOVFINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96AE5F0)
#define SUBOVFINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AE110)

	inline static constexpr unsigned int SubOvfInt64_TypeDefinitionIndex = 33476;

	class SubOvfInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBOVFINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBOVFINT64_.CTOR_OFFSET))(nullptr);
		}

	};

