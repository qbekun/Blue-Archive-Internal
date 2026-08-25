#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9679600)
#define GREATERTHANOREQUALUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9679FD0)

	inline static constexpr unsigned int GreaterThanOrEqualUInt32_TypeDefinitionIndex = 33257;

	class GreaterThanOrEqualUInt32 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALUINT32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALUINT32_RUN_OFFSET))(arg, nullptr);
		}

	};

