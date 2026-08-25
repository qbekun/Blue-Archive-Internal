#pragma once
#include "unitysdk.h"

#define EQUALINT64LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674660)
#define EQUALINT64LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673250)

	inline static constexpr unsigned int EqualInt64LiftedToNull_TypeDefinitionIndex = 33215;

	class EqualInt64LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALINT64LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALINT64LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

