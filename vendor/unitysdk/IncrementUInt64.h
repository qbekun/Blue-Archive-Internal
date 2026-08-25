#pragma once
#include "unitysdk.h"

#define INCREMENTUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x967AEC0)
#define INCREMENTUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x967AA20)

	inline static constexpr unsigned int IncrementUInt64_TypeDefinitionIndex = 33267;

	class IncrementUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + INCREMENTUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREMENTUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

