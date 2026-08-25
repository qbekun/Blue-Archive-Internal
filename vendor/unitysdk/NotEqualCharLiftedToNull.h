#pragma once
#include "unitysdk.h"

#define NOTEQUALCHARLIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A73F0)
#define NOTEQUALCHARLIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A66A0)

	inline static constexpr unsigned int NotEqualCharLiftedToNull_TypeDefinitionIndex = 33416;

	class NotEqualCharLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALCHARLIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALCHARLIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

