#pragma once
#include "unitysdk.h"

#define MULUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A2EC0)
#define MULUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A27C0)

	inline static constexpr unsigned int MulUInt64_TypeDefinitionIndex = 33378;

	class MulUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

