#pragma once
#include "unitysdk.h"

#define EXCLUSIVEORSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96753D0)
#define EXCLUSIVEORSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9675340)

	inline static constexpr unsigned int ExclusiveOrSByte_TypeDefinitionIndex = 33223;

	class ExclusiveOrSByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORSBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCLUSIVEORSBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

