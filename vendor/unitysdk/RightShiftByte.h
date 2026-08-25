#pragma once
#include "unitysdk.h"

#define RIGHTSHIFTBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96AC270)
#define RIGHTSHIFTBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96ABE70)

	inline static constexpr unsigned int RightShiftByte_TypeDefinitionIndex = 33455;

	class RightShiftByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

