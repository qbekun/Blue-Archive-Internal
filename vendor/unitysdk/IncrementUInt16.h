#pragma once
#include "unitysdk.h"

#define INCREMENTUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x967ACE0)
#define INCREMENTUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x967AA00)

	inline static constexpr unsigned int IncrementUInt16_TypeDefinitionIndex = 33265;

	class IncrementUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + INCREMENTUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREMENTUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

