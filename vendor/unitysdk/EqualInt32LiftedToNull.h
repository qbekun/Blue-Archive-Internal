#pragma once
#include "unitysdk.h"

#define EQUALINT32LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674550)
#define EQUALINT32LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673240)

	inline static constexpr unsigned int EqualInt32LiftedToNull_TypeDefinitionIndex = 33214;

	class EqualInt32LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALINT32LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALINT32LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

