#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9679660)
#define GREATERTHANOREQUALSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x967A250)

	inline static constexpr unsigned int GreaterThanOrEqualSingle_TypeDefinitionIndex = 33259;

	class GreaterThanOrEqualSingle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALSINGLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALSINGLE_RUN_OFFSET))(arg, nullptr);
		}

	};

