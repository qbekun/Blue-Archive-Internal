#pragma once
#include "unitysdk.h"

#define NOTUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A8420)
#define NOTUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A8180)

	inline static constexpr unsigned int NotUInt64_TypeDefinitionIndex = 33430;

	class NotUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

