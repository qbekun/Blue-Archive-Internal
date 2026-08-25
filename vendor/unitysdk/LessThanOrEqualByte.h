#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686B50)
#define LESSTHANOREQUALBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96872E0)

	inline static constexpr unsigned int LessThanOrEqualByte_TypeDefinitionIndex = 33310;

	class LessThanOrEqualByte : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALBYTE_RUN_OFFSET))(arg, nullptr);
		}

	};

