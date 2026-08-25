#pragma once
#include "unitysdk.h"

#define NOTEQUALUINT32LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A7850)
#define NOTEQUALUINT32LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A66F0)

	inline static constexpr unsigned int NotEqualUInt32LiftedToNull_TypeDefinitionIndex = 33421;

	class NotEqualUInt32LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT32LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT32LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

