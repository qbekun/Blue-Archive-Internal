#pragma once
#include "unitysdk.h"

#define EXCLUSIVEORUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9675C10)
#define EXCLUSIVEORUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9675390)

	inline static constexpr unsigned int ExclusiveOrUInt16_TypeDefinitionIndex = 33228;

	class ExclusiveOrUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

