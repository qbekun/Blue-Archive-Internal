#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96795D0)
#define GREATERTHANOREQUALUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9679E80)

	inline static constexpr unsigned int GreaterThanOrEqualUInt16_TypeDefinitionIndex = 33256;

	class GreaterThanOrEqualUInt16 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALUINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALUINT16_RUN_OFFSET))(arg, nullptr);
		}

	};

