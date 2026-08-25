#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9679570)
#define GREATERTHANOREQUALINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9679BF0)

	inline static constexpr unsigned int GreaterThanOrEqualInt64_TypeDefinitionIndex = 33254;

	class GreaterThanOrEqualInt64 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALINT64_RUN_OFFSET))(arg, nullptr);
		}

	};

