#pragma once
#include "unitysdk.h"

#define LESSTHANSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9685B40)
#define LESSTHANSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x9686730)

	inline static constexpr unsigned int LessThanSingle_TypeDefinitionIndex = 33302;

	class LessThanSingle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANSINGLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANSINGLE_RUN_OFFSET))(arg, nullptr);
		}

	};

