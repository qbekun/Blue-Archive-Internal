#pragma once
#include "unitysdk.h"

#define DIVSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x9672330)
#define DIVSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96724A0)

	inline static constexpr unsigned int DivSingle_TypeDefinitionIndex = 33194;

	class DivSingle : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DIVSINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIVSINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

