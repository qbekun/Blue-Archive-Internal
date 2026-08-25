#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686B20)
#define LESSTHANOREQUALINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96871A0)

	inline static constexpr unsigned int LessThanOrEqualInt64_TypeDefinitionIndex = 33309;

	class LessThanOrEqualInt64 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALINT64_RUN_OFFSET))(arg, nullptr);
		}

	};

