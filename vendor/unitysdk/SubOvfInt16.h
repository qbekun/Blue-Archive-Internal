#pragma once
#include "unitysdk.h"

#define SUBOVFINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96AE150)
#define SUBOVFINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AE0F0)

	inline static constexpr unsigned int SubOvfInt16_TypeDefinitionIndex = 33474;

	class SubOvfInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBOVFINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBOVFINT16_.CTOR_OFFSET))(nullptr);
		}

	};

