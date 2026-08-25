#pragma once
#include "unitysdk.h"

#define EXCLUSIVEORUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9675F50)
#define EXCLUSIVEORUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96753B0)

	inline static constexpr unsigned int ExclusiveOrUInt64_TypeDefinitionIndex = 33230;

	class ExclusiveOrUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

