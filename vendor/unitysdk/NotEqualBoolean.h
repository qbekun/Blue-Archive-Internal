#pragma once
#include "unitysdk.h"

#define NOTEQUALBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x96A6800)
#define NOTEQUALBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6730)

	inline static constexpr unsigned int NotEqualBoolean_TypeDefinitionIndex = 33401;

	class NotEqualBoolean : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALBOOLEAN_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALBOOLEAN_.CTOR_OFFSET))(nullptr);
		}

	};

