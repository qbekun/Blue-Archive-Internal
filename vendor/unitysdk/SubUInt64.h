#pragma once
#include "unitysdk.h"

#define SUBUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96AD8D0)
#define SUBUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AD1D0)

	inline static constexpr unsigned int SubUInt64_TypeDefinitionIndex = 33470;

	class SubUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

