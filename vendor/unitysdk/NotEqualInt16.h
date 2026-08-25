#pragma once
#include "unitysdk.h"

#define NOTEQUALINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A69A0)
#define NOTEQUALINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6750)

	inline static constexpr unsigned int NotEqualInt16_TypeDefinitionIndex = 33403;

	class NotEqualInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT16_.CTOR_OFFSET))(nullptr);
		}

	};

