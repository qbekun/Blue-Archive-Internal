#pragma once
#include "unitysdk.h"

#define SUBOVFUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96AEC40)
#define SUBOVFUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AE140)

	inline static constexpr unsigned int SubOvfUInt64_TypeDefinitionIndex = 33479;

	class SubOvfUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBOVFUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBOVFUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

