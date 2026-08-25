#pragma once
#include "unitysdk.h"

#define EQUALINT16LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674330)
#define EQUALINT16LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673220)

	inline static constexpr unsigned int EqualInt16LiftedToNull_TypeDefinitionIndex = 33212;

	class EqualInt16LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALINT16LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALINT16LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

