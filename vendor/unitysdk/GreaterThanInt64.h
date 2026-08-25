#pragma once
#include "unitysdk.h"

#define GREATERTHANINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9677660)
#define GREATERTHANINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9677CE0)

	inline static constexpr unsigned int GreaterThanInt64_TypeDefinitionIndex = 33242;

	class GreaterThanInt64 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANINT64_RUN_OFFSET))(arg, nullptr);
		}

	};

