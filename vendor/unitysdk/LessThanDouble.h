#pragma once
#include "unitysdk.h"

#define LESSTHANDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9685B70)
#define LESSTHANDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x9686880)

	inline static constexpr unsigned int LessThanDouble_TypeDefinitionIndex = 33303;

	class LessThanDouble : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANDOUBLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

	};

