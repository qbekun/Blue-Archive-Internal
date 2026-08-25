#pragma once
#include "unitysdk.h"

#define EQUALCHARLIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674440)
#define EQUALCHARLIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673230)

	inline static constexpr unsigned int EqualCharLiftedToNull_TypeDefinitionIndex = 33213;

	class EqualCharLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALCHARLIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALCHARLIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

