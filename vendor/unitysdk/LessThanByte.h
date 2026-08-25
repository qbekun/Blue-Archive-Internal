#pragma once
#include "unitysdk.h"

#define LESSTHANBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9685A80)
#define LESSTHANBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x9686210)

	inline static constexpr unsigned int LessThanByte_TypeDefinitionIndex = 33298;

	class LessThanByte : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANBYTE_RUN_OFFSET))(arg, nullptr);
		}

	};

