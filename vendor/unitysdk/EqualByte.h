#pragma once
#include "unitysdk.h"

#define EQUALBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x9673A70)
#define EQUALBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673320)

	inline static constexpr unsigned int EqualByte_TypeDefinitionIndex = 33203;

	class EqualByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

