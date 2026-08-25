#pragma once
#include "unitysdk.h"

#define NOTEQUALUINT64LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A7930)
#define NOTEQUALUINT64LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6700)

	inline static constexpr unsigned int NotEqualUInt64LiftedToNull_TypeDefinitionIndex = 33422;

	class NotEqualUInt64LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT64LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT64LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

