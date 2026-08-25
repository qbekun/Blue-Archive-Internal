#pragma once
#include "unitysdk.h"

#define EQUALSBYTELIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674220)
#define EQUALSBYTELIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673210)

	inline static constexpr unsigned int EqualSByteLiftedToNull_TypeDefinitionIndex = 33211;

	class EqualSByteLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALSBYTELIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALSBYTELIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

