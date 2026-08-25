#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686A60)
#define LESSTHANOREQUALSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x9686C70)

	inline static constexpr unsigned int LessThanOrEqualSByte_TypeDefinitionIndex = 33305;

	class LessThanOrEqualSByte : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALSBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALSBYTE_RUN_OFFSET))(arg, nullptr);
		}

	};

