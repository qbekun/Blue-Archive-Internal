#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686BE0)
#define LESSTHANOREQUALUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96876C0)

	inline static constexpr unsigned int LessThanOrEqualUInt64_TypeDefinitionIndex = 33313;

	class LessThanOrEqualUInt64 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALUINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALUINT64_RUN_OFFSET))(arg, nullptr);
		}

	};

