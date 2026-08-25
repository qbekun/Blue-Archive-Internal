#pragma once
#include "unitysdk.h"

#define EQUALUINT32LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674990)
#define EQUALUINT32LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673280)

	inline static constexpr unsigned int EqualUInt32LiftedToNull_TypeDefinitionIndex = 33218;

	class EqualUInt32LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT32LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT32LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

