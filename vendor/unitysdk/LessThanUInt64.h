#pragma once
#include "unitysdk.h"

#define LESSTHANUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9685B10)
#define LESSTHANUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96865F0)

	inline static constexpr unsigned int LessThanUInt64_TypeDefinitionIndex = 33301;

	class LessThanUInt64 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANUINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANUINT64_RUN_OFFSET))(arg, nullptr);
		}

	};

