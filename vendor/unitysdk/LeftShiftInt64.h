#pragma once
#include "unitysdk.h"

#define LEFTSHIFTINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9685240)
#define LEFTSHIFTINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684EC0)

	inline static constexpr unsigned int LeftShiftInt64_TypeDefinitionIndex = 33287;

	class LeftShiftInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTINT64_.CTOR_OFFSET))(nullptr);
		}

	};

