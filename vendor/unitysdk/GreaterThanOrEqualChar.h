#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALCHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9679510)
#define GREATERTHANOREQUALCHAR_RUN_OFFSET UNITYSDK_OFFSET(0x9679960)

	inline static constexpr unsigned int GreaterThanOrEqualChar_TypeDefinitionIndex = 33252;

	class GreaterThanOrEqualChar : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALCHAR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALCHAR_RUN_OFFSET))(arg, nullptr);
		}

	};

