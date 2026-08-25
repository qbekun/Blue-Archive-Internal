#pragma once
#include "unitysdk.h"

#define LEFTSHIFTSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x9684F10)
#define LEFTSHIFTSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684E90)

	inline static constexpr unsigned int LeftShiftSByte_TypeDefinitionIndex = 33284;

	class LeftShiftSByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTSBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTSBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

