#pragma once
#include "unitysdk.h"

#define NOTUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A84C0)
#define NOTUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A8190)

	inline static constexpr unsigned int NotUInt32_TypeDefinitionIndex = 33431;

	class NotUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

