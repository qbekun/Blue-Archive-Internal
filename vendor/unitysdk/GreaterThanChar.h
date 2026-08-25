#pragma once
#include "unitysdk.h"

#define GREATERTHANCHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9677600)
#define GREATERTHANCHAR_RUN_OFFSET UNITYSDK_OFFSET(0x9677A50)

	inline static constexpr unsigned int GreaterThanChar_TypeDefinitionIndex = 33240;

	class GreaterThanChar : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANCHAR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANCHAR_RUN_OFFSET))(arg, nullptr);
		}

	};

