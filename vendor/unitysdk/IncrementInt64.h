#pragma once
#include "unitysdk.h"

#define INCREMENTINT64_RUN_OFFSET UNITYSDK_OFFSET(0x967ABB0)
#define INCREMENTINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x967A9F0)

	inline static constexpr unsigned int IncrementInt64_TypeDefinitionIndex = 33264;

	class IncrementInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + INCREMENTINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREMENTINT64_.CTOR_OFFSET))(nullptr);
		}

	};

