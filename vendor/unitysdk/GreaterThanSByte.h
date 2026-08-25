#pragma once
#include "unitysdk.h"

#define GREATERTHANSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96775A0)
#define GREATERTHANSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96777B0)

	inline static constexpr unsigned int GreaterThanSByte_TypeDefinitionIndex = 33238;

	class GreaterThanSByte : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANSBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANSBYTE_RUN_OFFSET))(arg, nullptr);
		}

	};

