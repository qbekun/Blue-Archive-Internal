#pragma once
#include "unitysdk.h"

#define LEFTSHIFTUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9685780)
#define LEFTSHIFTUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684F00)

	inline static constexpr unsigned int LeftShiftUInt64_TypeDefinitionIndex = 33291;

	class LeftShiftUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

