#pragma once
#include "unitysdk.h"

#define INCREMENTINT16_RUN_OFFSET UNITYSDK_OFFSET(0x967AA50)
#define INCREMENTINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x967A9D0)

	inline static constexpr unsigned int IncrementInt16_TypeDefinitionIndex = 33262;

	class IncrementInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + INCREMENTINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREMENTINT16_.CTOR_OFFSET))(nullptr);
		}

	};

