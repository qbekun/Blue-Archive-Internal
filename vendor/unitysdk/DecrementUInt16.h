#pragma once
#include "unitysdk.h"

#define DECREMENTUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9671120)
#define DECREMENTUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9670F10)

	inline static constexpr unsigned int DecrementUInt16_TypeDefinitionIndex = 33181;

	class DecrementUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DECREMENTUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECREMENTUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

