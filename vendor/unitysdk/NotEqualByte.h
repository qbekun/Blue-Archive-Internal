#pragma once
#include "unitysdk.h"

#define NOTEQUALBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96A6CE0)
#define NOTEQUALBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6790)

	inline static constexpr unsigned int NotEqualByte_TypeDefinitionIndex = 33407;

	class NotEqualByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

