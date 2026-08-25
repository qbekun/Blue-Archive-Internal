#pragma once
#include "unitysdk.h"

#define DECREMENTSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x96712F0)
#define DECREMENTSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9670F40)

	inline static constexpr unsigned int DecrementSingle_TypeDefinitionIndex = 33184;

	class DecrementSingle : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DECREMENTSINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECREMENTSINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

