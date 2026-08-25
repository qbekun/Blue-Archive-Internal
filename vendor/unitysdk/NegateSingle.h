#pragma once
#include "unitysdk.h"

#define NEGATESINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x96A4A30)
#define NEGATESINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A4850)

	inline static constexpr unsigned int NegateSingle_TypeDefinitionIndex = 33392;

	class NegateSingle : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATESINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGATESINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

