#pragma once
#include "unitysdk.h"

#define NOTEQUALUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A6E80)
#define NOTEQUALUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A67B0)

	inline static constexpr unsigned int NotEqualUInt32_TypeDefinitionIndex = 33409;

	class NotEqualUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

