#pragma once
#include "unitysdk.h"

#define NOTEQUALUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A6DB0)
#define NOTEQUALUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A67A0)

	inline static constexpr unsigned int NotEqualUInt16_TypeDefinitionIndex = 33408;

	class NotEqualUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

