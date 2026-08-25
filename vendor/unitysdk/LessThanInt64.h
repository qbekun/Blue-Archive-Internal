#pragma once
#include "unitysdk.h"

#define LESSTHANINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9685A50)
#define LESSTHANINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96860D0)

	inline static constexpr unsigned int LessThanInt64_TypeDefinitionIndex = 33297;

	class LessThanInt64 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANINT64_RUN_OFFSET))(arg, nullptr);
		}

	};

