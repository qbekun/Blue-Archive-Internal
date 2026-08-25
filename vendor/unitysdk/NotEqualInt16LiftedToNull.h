#pragma once
#include "unitysdk.h"

#define NOTEQUALINT16LIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A7310)
#define NOTEQUALINT16LIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6690)

	inline static constexpr unsigned int NotEqualInt16LiftedToNull_TypeDefinitionIndex = 33415;

	class NotEqualInt16LiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT16LIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT16LIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

