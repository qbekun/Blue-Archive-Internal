#pragma once
#include "unitysdk.h"

#define DECREMENTUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9671250)
#define DECREMENTUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9670F30)

	inline static constexpr unsigned int DecrementUInt64_TypeDefinitionIndex = 33183;

	class DecrementUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DECREMENTUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECREMENTUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

