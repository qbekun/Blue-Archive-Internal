#pragma once
#include "unitysdk.h"

#define NOTEQUALUINT16LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A7770)
#define NOTEQUALUINT16LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A66E0)

	inline static constexpr unsigned int NotEqualUInt16LiftedToNull_TypeDefinitionIndex = 33420;

	class NotEqualUInt16LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT16LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT16LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

