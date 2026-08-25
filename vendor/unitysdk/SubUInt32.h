#pragma once
#include "unitysdk.h"

#define SUBUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96AD770)
#define SUBUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AD1C0)

	inline static constexpr unsigned int SubUInt32_TypeDefinitionIndex = 33469;

	class SubUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

