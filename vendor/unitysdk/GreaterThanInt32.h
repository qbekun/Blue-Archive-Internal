#pragma once
#include "unitysdk.h"

#define GREATERTHANINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9677630)
#define GREATERTHANINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9677BA0)

	inline static constexpr unsigned int GreaterThanInt32_TypeDefinitionIndex = 33241;

	class GreaterThanInt32 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANINT32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANINT32_RUN_OFFSET))(arg, nullptr);
		}

	};

