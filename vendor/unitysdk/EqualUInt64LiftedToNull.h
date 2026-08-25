#pragma once
#include "unitysdk.h"

#define EQUALUINT64LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674AA0)
#define EQUALUINT64LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673290)

	inline static constexpr unsigned int EqualUInt64LiftedToNull_TypeDefinitionIndex = 33219;

	class EqualUInt64LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT64LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT64LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

