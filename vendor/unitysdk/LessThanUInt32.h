#pragma once
#include "unitysdk.h"

#define LESSTHANUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9685AE0)
#define LESSTHANUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96864B0)

	inline static constexpr unsigned int LessThanUInt32_TypeDefinitionIndex = 33300;

	class LessThanUInt32 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANUINT32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANUINT32_RUN_OFFSET))(arg, nullptr);
		}

	};

