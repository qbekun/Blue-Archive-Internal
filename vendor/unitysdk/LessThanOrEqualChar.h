#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALCHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686AC0)
#define LESSTHANOREQUALCHAR_RUN_OFFSET UNITYSDK_OFFSET(0x9686F10)

	inline static constexpr unsigned int LessThanOrEqualChar_TypeDefinitionIndex = 33307;

	class LessThanOrEqualChar : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALCHAR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALCHAR_RUN_OFFSET))(arg, nullptr);
		}

	};

