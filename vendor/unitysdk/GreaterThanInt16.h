#pragma once
#include "unitysdk.h"

#define GREATERTHANINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96775D0)
#define GREATERTHANINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9677900)

	inline static constexpr unsigned int GreaterThanInt16_TypeDefinitionIndex = 33239;

	class GreaterThanInt16 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANINT16_RUN_OFFSET))(arg, nullptr);
		}

	};

