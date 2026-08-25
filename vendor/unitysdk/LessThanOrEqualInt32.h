#pragma once
#include "unitysdk.h"

#define LESSTHANOREQUALINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9686AF0)
#define LESSTHANOREQUALINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9687060)

	inline static constexpr unsigned int LessThanOrEqualInt32_TypeDefinitionIndex = 33308;

	class LessThanOrEqualInt32 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALINT32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LESSTHANOREQUALINT32_RUN_OFFSET))(arg, nullptr);
		}

	};

