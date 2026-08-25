#pragma once
#include "unitysdk.h"

#define SUBDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x96ADBA0)
#define SUBDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AD1F0)

	inline static constexpr unsigned int SubDouble_TypeDefinitionIndex = 33472;

	class SubDouble : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBDOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBDOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

