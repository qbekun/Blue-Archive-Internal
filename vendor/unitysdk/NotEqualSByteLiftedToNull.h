#pragma once
#include "unitysdk.h"

#define NOTEQUALSBYTELIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A7230)
#define NOTEQUALSBYTELIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6680)

	inline static constexpr unsigned int NotEqualSByteLiftedToNull_TypeDefinitionIndex = 33414;

	class NotEqualSByteLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALSBYTELIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALSBYTELIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

