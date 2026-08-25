#pragma once
#include "unitysdk.h"

#define LEFTSHIFTINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9685020)
#define LEFTSHIFTINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684EA0)

	inline static constexpr unsigned int LeftShiftInt16_TypeDefinitionIndex = 33285;

	class LeftShiftInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTINT16_.CTOR_OFFSET))(nullptr);
		}

	};

