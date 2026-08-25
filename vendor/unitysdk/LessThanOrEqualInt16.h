#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686A90)
#define LESSTHANOREQUALINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9686DC0)

	inline static constexpr unsigned int LessThanOrEqualInt16_TypeDefinitionIndex = 33306;

	class LessThanOrEqualInt16 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALINT16_RUN_OFFSET))(arg, nullptr);
		}

	};

