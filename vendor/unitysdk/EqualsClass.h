#pragma once
#include "unitysdk.h"

#define EQUALSCLASS_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AFBA0)
#define EQUALSCLASS_RUN_OFFSET UNITYSDK_OFFSET(0x96AFBB0)
#define EQUALSCLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF8F0)

	inline static constexpr unsigned int EqualsClass_TypeDefinitionIndex = 33489;

	class EqualsClass : public Il2CppObject
	{
	public:
		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALSCLASS_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALSCLASS_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALSCLASS_.CTOR_OFFSET))(nullptr);
		}

	};

