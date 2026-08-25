#pragma once
#include "unitysdk.h"

#define HASVALUE_RUN_OFFSET UNITYSDK_OFFSET(0x96AFA20)
#define HASVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF8D0)

	inline static constexpr unsigned int HasValue_TypeDefinitionIndex = 33485;

	class HasValue : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + HASVALUE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HASVALUE_.CTOR_OFFSET))(nullptr);
		}

	};

