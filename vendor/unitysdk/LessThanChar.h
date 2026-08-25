#pragma once
#include "unitysdk.h"

#define LESSTHANCHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x96859F0)
#define LESSTHANCHAR_RUN_OFFSET UNITYSDK_OFFSET(0x9685E40)

	inline static constexpr unsigned int LessThanChar_TypeDefinitionIndex = 33295;

	class LessThanChar : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANCHAR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANCHAR_RUN_OFFSET))(arg, nullptr);
		}

	};

