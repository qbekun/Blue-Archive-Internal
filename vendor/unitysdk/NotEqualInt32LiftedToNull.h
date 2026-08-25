#pragma once
#include "unitysdk.h"

#define NOTEQUALINT32LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A74D0)
#define NOTEQUALINT32LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A66B0)

	inline static constexpr unsigned int NotEqualInt32LiftedToNull_TypeDefinitionIndex = 33417;

	class NotEqualInt32LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT32LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT32LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

