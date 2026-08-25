#pragma once
#include "unitysdk.h"

#define MULOVFUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A4290)
#define MULOVFUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A3730)

	inline static constexpr unsigned int MulOvfUInt64_TypeDefinitionIndex = 33387;

	class MulOvfUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULOVFUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULOVFUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

