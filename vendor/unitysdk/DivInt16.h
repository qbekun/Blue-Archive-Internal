#pragma once
#include "unitysdk.h"

#define DIVINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9671AA0)
#define DIVINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9671A50)

	inline static constexpr unsigned int DivInt16_TypeDefinitionIndex = 33188;

	class DivInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DIVINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIVINT16_.CTOR_OFFSET))(nullptr);
		}

	};

