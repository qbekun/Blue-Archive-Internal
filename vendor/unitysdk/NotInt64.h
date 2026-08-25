#pragma once
#include "unitysdk.h"

#define NOTINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A8260)
#define NOTINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A8150)

	inline static constexpr unsigned int NotInt64_TypeDefinitionIndex = 33427;

	class NotInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTINT64_.CTOR_OFFSET))(nullptr);
		}

	};

