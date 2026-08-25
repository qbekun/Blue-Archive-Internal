#pragma once
#include "unitysdk.h"

#define NOTEQUALINT64LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A75B0)
#define NOTEQUALINT64LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A66C0)

	inline static constexpr unsigned int NotEqualInt64LiftedToNull_TypeDefinitionIndex = 33418;

	class NotEqualInt64LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT64LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT64LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

