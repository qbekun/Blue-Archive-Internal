#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686B80)
#define LESSTHANOREQUALUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9687430)

	inline static constexpr unsigned int LessThanOrEqualUInt16_TypeDefinitionIndex = 33311;

	class LessThanOrEqualUInt16 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALUINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALUINT16_RUN_OFFSET))(arg, nullptr);
		}

	};

