#pragma once
#include "unitysdk.h"

#define EQUALBYTELIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674770)
#define EQUALBYTELIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673260)

	inline static constexpr unsigned int EqualByteLiftedToNull_TypeDefinitionIndex = 33216;

	class EqualByteLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALBYTELIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALBYTELIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

