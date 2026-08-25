#pragma once
#include "unitysdk.h"

#define NOTEQUALBYTELIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A7690)
#define NOTEQUALBYTELIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A66D0)

	inline static constexpr unsigned int NotEqualByteLiftedToNull_TypeDefinitionIndex = 33419;

	class NotEqualByteLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALBYTELIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALBYTELIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

