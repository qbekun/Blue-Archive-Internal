#pragma once
#include "unitysdk.h"

#define DECREMENTINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9670FF0)
#define DECREMENTINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9670EF0)

	inline static constexpr unsigned int DecrementInt32_TypeDefinitionIndex = 33179;

	class DecrementInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DECREMENTINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECREMENTINT32_.CTOR_OFFSET))(nullptr);
		}

	};

