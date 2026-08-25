#pragma once
#include "unitysdk.h"

#define SUBOVFUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96AE800)
#define SUBOVFUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AE120)

	inline static constexpr unsigned int SubOvfUInt16_TypeDefinitionIndex = 33477;

	class SubOvfUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBOVFUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBOVFUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

