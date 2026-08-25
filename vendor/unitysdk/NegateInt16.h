#pragma once
#include "unitysdk.h"

#define NEGATEINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A4870)
#define NEGATEINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A4820)

	inline static constexpr unsigned int NegateInt16_TypeDefinitionIndex = 33389;

	class NegateInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATEINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGATEINT16_.CTOR_OFFSET))(nullptr);
		}

	};

