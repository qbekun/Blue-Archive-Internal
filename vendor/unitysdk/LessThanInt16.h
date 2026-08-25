#pragma once
#include "unitysdk.h"

#define LESSTHANINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96859C0)
#define LESSTHANINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9685CF0)

	inline static constexpr unsigned int LessThanInt16_TypeDefinitionIndex = 33294;

	class LessThanInt16 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANINT16_RUN_OFFSET))(arg, nullptr);
		}

	};

