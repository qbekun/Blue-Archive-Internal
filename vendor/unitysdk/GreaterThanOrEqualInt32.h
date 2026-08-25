#pragma once
#include "unitysdk.h"

#define GREATERTHANOREQUALINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9679540)
#define GREATERTHANOREQUALINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9679AB0)

	inline static constexpr unsigned int GreaterThanOrEqualInt32_TypeDefinitionIndex = 33253;

	class GreaterThanOrEqualInt32 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALINT32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANOREQUALINT32_RUN_OFFSET))(arg, nullptr);
		}

	};

