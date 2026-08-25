#pragma once
#include "unitysdk.h"

#define LESSTHANSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9685990)
#define LESSTHANSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x9685BA0)

	inline static constexpr unsigned int LessThanSByte_TypeDefinitionIndex = 33293;

	class LessThanSByte : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANSBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANSBYTE_RUN_OFFSET))(arg, nullptr);
		}

	};

