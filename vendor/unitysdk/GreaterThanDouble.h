#pragma once
#include "unitysdk.h"

#define GREATERTHANDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9677780)
#define GREATERTHANDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x9678490)

	inline static constexpr unsigned int GreaterThanDouble_TypeDefinitionIndex = 33248;

	class GreaterThanDouble : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANDOUBLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

	};

