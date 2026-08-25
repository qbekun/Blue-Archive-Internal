#pragma once
#include "unitysdk.h"

#define MULUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A2C00)
#define MULUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A27A0)

	inline static constexpr unsigned int MulUInt16_TypeDefinitionIndex = 33376;

	class MulUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

