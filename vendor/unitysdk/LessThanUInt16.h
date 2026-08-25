#pragma once
#include "unitysdk.h"

#define LESSTHANUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9685AB0)
#define LESSTHANUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9686360)

	inline static constexpr unsigned int LessThanUInt16_TypeDefinitionIndex = 33299;

	class LessThanUInt16 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANUINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANUINT16_RUN_OFFSET))(arg, nullptr);
		}

	};

