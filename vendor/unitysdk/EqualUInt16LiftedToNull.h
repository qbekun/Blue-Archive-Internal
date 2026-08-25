#pragma once
#include "unitysdk.h"

#define EQUALUINT16LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674880)
#define EQUALUINT16LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673270)

	inline static constexpr unsigned int EqualUInt16LiftedToNull_TypeDefinitionIndex = 33217;

	class EqualUInt16LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT16LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT16LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

