#pragma once
#include "unitysdk.h"

#define SUBUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96AD610)
#define SUBUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AD1B0)

	inline static constexpr unsigned int SubUInt16_TypeDefinitionIndex = 33468;

	class SubUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

