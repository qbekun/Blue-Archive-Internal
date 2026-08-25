#pragma once
#include "unitysdk.h"

#define SUBINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96AD4B0)
#define SUBINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AD1A0)

	inline static constexpr unsigned int SubInt64_TypeDefinitionIndex = 33467;

	class SubInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBINT64_.CTOR_OFFSET))(nullptr);
		}

	};

