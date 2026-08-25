#pragma once
#include "unitysdk.h"

#define RIGHTSHIFTINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96AC170)
#define RIGHTSHIFTINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96ABE60)

	inline static constexpr unsigned int RightShiftInt64_TypeDefinitionIndex = 33454;

	class RightShiftInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTINT64_.CTOR_OFFSET))(nullptr);
		}

	};

