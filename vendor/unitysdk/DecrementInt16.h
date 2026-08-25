#pragma once
#include "unitysdk.h"

#define DECREMENTINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9670F60)
#define DECREMENTINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9670EE0)

	inline static constexpr unsigned int DecrementInt16_TypeDefinitionIndex = 33178;

	class DecrementInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DECREMENTINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECREMENTINT16_.CTOR_OFFSET))(nullptr);
		}

	};

