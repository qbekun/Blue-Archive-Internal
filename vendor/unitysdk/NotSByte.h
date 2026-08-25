#pragma once
#include "unitysdk.h"

#define NOTSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96A8680)
#define NOTSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A81C0)

	inline static constexpr unsigned int NotSByte_TypeDefinitionIndex = 33434;

	class NotSByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTSBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTSBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

