#pragma once
#include "unitysdk.h"

#define INCREMENTSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x967AFF0)
#define INCREMENTSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x967AA30)

	inline static constexpr unsigned int IncrementSingle_TypeDefinitionIndex = 33268;

	class IncrementSingle : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + INCREMENTSINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREMENTSINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

