#pragma once
#include "unitysdk.h"

#define MULOVFUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A3E30)
#define MULOVFUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A3710)

	inline static constexpr unsigned int MulOvfUInt16_TypeDefinitionIndex = 33385;

	class MulOvfUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULOVFUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULOVFUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

