#pragma once
#include "unitysdk.h"

#define ORUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96AB700)
#define ORUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AB0A0)

	inline static constexpr unsigned int OrUInt64_TypeDefinitionIndex = 33448;

	class OrUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ORUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

