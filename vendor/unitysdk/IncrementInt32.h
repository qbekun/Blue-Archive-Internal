#pragma once
#include "unitysdk.h"

#define INCREMENTINT32_RUN_OFFSET UNITYSDK_OFFSET(0x967AB00)
#define INCREMENTINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x967A9E0)

	inline static constexpr unsigned int IncrementInt32_TypeDefinitionIndex = 33263;

	class IncrementInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + INCREMENTINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREMENTINT32_.CTOR_OFFSET))(nullptr);
		}

	};

