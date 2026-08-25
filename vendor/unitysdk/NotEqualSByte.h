#pragma once
#include "unitysdk.h"

#define NOTEQUALSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96A68D0)
#define NOTEQUALSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6740)

	inline static constexpr unsigned int NotEqualSByte_TypeDefinitionIndex = 33402;

	class NotEqualSByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALSBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALSBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

