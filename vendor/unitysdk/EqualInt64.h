#pragma once
#include "unitysdk.h"

#define EQUALINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9673980)
#define EQUALINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673310)

	inline static constexpr unsigned int EqualInt64_TypeDefinitionIndex = 33202;

	class EqualInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALINT64_.CTOR_OFFSET))(nullptr);
		}

	};

