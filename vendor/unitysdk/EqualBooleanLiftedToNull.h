#pragma once
#include "unitysdk.h"

#define EQUALBOOLEANLIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674090)
#define EQUALBOOLEANLIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673200)

	inline static constexpr unsigned int EqualBooleanLiftedToNull_TypeDefinitionIndex = 33210;

	class EqualBooleanLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALBOOLEANLIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALBOOLEANLIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

