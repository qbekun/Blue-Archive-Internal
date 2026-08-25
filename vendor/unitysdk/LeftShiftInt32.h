#pragma once
#include "unitysdk.h"

#define LEFTSHIFTINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9685130)
#define LEFTSHIFTINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684EB0)

	inline static constexpr unsigned int LeftShiftInt32_TypeDefinitionIndex = 33286;

	class LeftShiftInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTINT32_.CTOR_OFFSET))(nullptr);
		}

	};

