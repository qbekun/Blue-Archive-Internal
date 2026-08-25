#pragma once
#include "unitysdk.h"

#define GETVALUE_RUN_OFFSET UNITYSDK_OFFSET(0x96AFA60)
#define GETVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF8E0)

	inline static constexpr unsigned int GetValue_TypeDefinitionIndex = 33486;

	class GetValue : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GETVALUE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GETVALUE_.CTOR_OFFSET))(nullptr);
		}

	};

