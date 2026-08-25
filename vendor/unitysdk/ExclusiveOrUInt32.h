#pragma once
#include "unitysdk.h"

#define EXCLUSIVEORUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9675DD0)
#define EXCLUSIVEORUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96753A0)

	inline static constexpr unsigned int ExclusiveOrUInt32_TypeDefinitionIndex = 33229;

	class ExclusiveOrUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

