#pragma once
#include "unitysdk.h"

#define NEGATEINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A4990)
#define NEGATEINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A4840)

	inline static constexpr unsigned int NegateInt64_TypeDefinitionIndex = 33391;

	class NegateInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATEINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGATEINT64_.CTOR_OFFSET))(nullptr);
		}

	};

