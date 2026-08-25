#pragma once
#include "unitysdk.h"

#define DECREMENTINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9671080)
#define DECREMENTINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9670F00)

	inline static constexpr unsigned int DecrementInt64_TypeDefinitionIndex = 33180;

	class DecrementInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DECREMENTINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECREMENTINT64_.CTOR_OFFSET))(nullptr);
		}

	};

