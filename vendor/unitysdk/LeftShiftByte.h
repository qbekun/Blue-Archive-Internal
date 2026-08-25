#pragma once
#include "unitysdk.h"

#define LEFTSHIFTBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96853D0)
#define LEFTSHIFTBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684ED0)

	inline static constexpr unsigned int LeftShiftByte_TypeDefinitionIndex = 33288;

	class LeftShiftByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

