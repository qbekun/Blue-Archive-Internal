#pragma once
#include "unitysdk.h"

#define RIGHTSHIFTINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96AC090)
#define RIGHTSHIFTINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96ABE50)

	inline static constexpr unsigned int RightShiftInt32_TypeDefinitionIndex = 33453;

	class RightShiftInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTINT32_.CTOR_OFFSET))(nullptr);
		}

	};

