#pragma once
#include "unitysdk.h"

#define EQUALSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96735C0)
#define EQUALSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96732D0)

	inline static constexpr unsigned int EqualSByte_TypeDefinitionIndex = 33198;

	class EqualSByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALSBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALSBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

