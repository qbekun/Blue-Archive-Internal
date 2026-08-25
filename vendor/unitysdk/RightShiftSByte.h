#pragma once
#include "unitysdk.h"

#define RIGHTSHIFTSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96ABEB0)
#define RIGHTSHIFTSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96ABE30)

	inline static constexpr unsigned int RightShiftSByte_TypeDefinitionIndex = 33451;

	class RightShiftSByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTSBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTSBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

