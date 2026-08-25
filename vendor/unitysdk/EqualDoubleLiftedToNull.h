#pragma once
#include "unitysdk.h"

#define EQUALDOUBLELIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674CD0)
#define EQUALDOUBLELIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96732B0)

	inline static constexpr unsigned int EqualDoubleLiftedToNull_TypeDefinitionIndex = 33221;

	class EqualDoubleLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALDOUBLELIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALDOUBLELIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

