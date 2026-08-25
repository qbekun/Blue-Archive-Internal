#pragma once
#include "unitysdk.h"

#define NOTEQUALUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A6F50)
#define NOTEQUALUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A67C0)

	inline static constexpr unsigned int NotEqualUInt64_TypeDefinitionIndex = 33410;

	class NotEqualUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

