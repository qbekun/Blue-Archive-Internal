#pragma once
#include "unitysdk.h"

#define RIGHTSHIFTUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96AC360)
#define RIGHTSHIFTUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96ABE80)

	inline static constexpr unsigned int RightShiftUInt16_TypeDefinitionIndex = 33456;

	class RightShiftUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

