#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9679630)
#define GREATERTHANOREQUALUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x967A110)

	inline static constexpr unsigned int GreaterThanOrEqualUInt64_TypeDefinitionIndex = 33258;

	class GreaterThanOrEqualUInt64 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALUINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALUINT64_RUN_OFFSET))(arg, nullptr);
		}

	};

