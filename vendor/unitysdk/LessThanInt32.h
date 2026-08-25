#pragma once
#include "unitysdk.h"

#define LESSTHANINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9685A20)
#define LESSTHANINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9685F90)

	inline static constexpr unsigned int LessThanInt32_TypeDefinitionIndex = 33296;

	class LessThanInt32 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANINT32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANINT32_RUN_OFFSET))(arg, nullptr);
		}

	};

