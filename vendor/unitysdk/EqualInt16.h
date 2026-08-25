#pragma once
#include "unitysdk.h"

#define EQUALINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96736B0)
#define EQUALINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96732E0)

	inline static constexpr unsigned int EqualInt16_TypeDefinitionIndex = 33199;

	class EqualInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALINT16_.CTOR_OFFSET))(nullptr);
		}

	};

