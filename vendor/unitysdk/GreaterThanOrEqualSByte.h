#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96794B0)
#define GREATERTHANOREQUALSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96796C0)

	inline static constexpr unsigned int GreaterThanOrEqualSByte_TypeDefinitionIndex = 33250;

	class GreaterThanOrEqualSByte : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALSBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALSBYTE_RUN_OFFSET))(arg, nullptr);
		}

	};

