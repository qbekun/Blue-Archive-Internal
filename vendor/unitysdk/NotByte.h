#pragma once
#include "unitysdk.h"

#define NOTBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96A85F0)
#define NOTBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A81B0)

	inline static constexpr unsigned int NotByte_TypeDefinitionIndex = 33433;

	class NotByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

