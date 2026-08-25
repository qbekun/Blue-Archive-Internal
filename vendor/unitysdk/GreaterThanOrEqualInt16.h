#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96794E0)
#define GREATERTHANOREQUALINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9679810)

	inline static constexpr unsigned int GreaterThanOrEqualInt16_TypeDefinitionIndex = 33251;

	class GreaterThanOrEqualInt16 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALINT16_RUN_OFFSET))(arg, nullptr);
		}

	};

