#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686C10)
#define LESSTHANOREQUALSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x9687800)

	inline static constexpr unsigned int LessThanOrEqualSingle_TypeDefinitionIndex = 33314;

	class LessThanOrEqualSingle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALSINGLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALSINGLE_RUN_OFFSET))(arg, nullptr);
		}

	};

