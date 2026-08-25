#pragma once
#include "unitysdk.h"

#define ORUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96AB530)
#define ORUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AB080)

	inline static constexpr unsigned int OrUInt16_TypeDefinitionIndex = 33446;

	class OrUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ORUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

