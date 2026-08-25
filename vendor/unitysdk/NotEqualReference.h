#pragma once
#include "unitysdk.h"

#define NOTEQUALREFERENCE_RUN_OFFSET UNITYSDK_OFFSET(0x96A71E0)
#define NOTEQUALREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A67F0)

	inline static constexpr unsigned int NotEqualReference_TypeDefinitionIndex = 33413;

	class NotEqualReference : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALREFERENCE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALREFERENCE_.CTOR_OFFSET))(nullptr);
		}

	};

