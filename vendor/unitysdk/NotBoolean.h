#pragma once
#include "unitysdk.h"

#define NOTBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x96A81D0)
#define NOTBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A8140)

	inline static constexpr unsigned int NotBoolean_TypeDefinitionIndex = 33426;

	class NotBoolean : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTBOOLEAN_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTBOOLEAN_.CTOR_OFFSET))(nullptr);
		}

	};

