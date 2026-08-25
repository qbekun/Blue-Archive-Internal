#pragma once
#include "unitysdk.h"

#define DIVINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9671C00)
#define DIVINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9671A60)

	inline static constexpr unsigned int DivInt32_TypeDefinitionIndex = 33189;

	class DivInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DIVINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIVINT32_.CTOR_OFFSET))(nullptr);
		}

	};

