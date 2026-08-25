#pragma once
#include "unitysdk.h"

#define NOTINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A8390)
#define NOTINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A8170)

	inline static constexpr unsigned int NotInt16_TypeDefinitionIndex = 33429;

	class NotInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTINT16_.CTOR_OFFSET))(nullptr);
		}

	};

