#pragma once
#include "unitysdk.h"

#define NOTEQUALDOUBLELIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A7B00)
#define NOTEQUALDOUBLELIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6720)

	inline static constexpr unsigned int NotEqualDoubleLiftedToNull_TypeDefinitionIndex = 33424;

	class NotEqualDoubleLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALDOUBLELIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALDOUBLELIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

