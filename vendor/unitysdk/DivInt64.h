#pragma once
#include "unitysdk.h"

#define DIVINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9671D50)
#define DIVINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9671A70)

	inline static constexpr unsigned int DivInt64_TypeDefinitionIndex = 33190;

	class DivInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DIVINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIVINT64_.CTOR_OFFSET))(nullptr);
		}

	};

