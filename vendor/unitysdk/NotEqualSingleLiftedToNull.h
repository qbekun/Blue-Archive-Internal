#pragma once
#include "unitysdk.h"

#define NOTEQUALSINGLELIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x96A7A10)
#define NOTEQUALSINGLELIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6710)

	inline static constexpr unsigned int NotEqualSingleLiftedToNull_TypeDefinitionIndex = 33423;

	class NotEqualSingleLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALSINGLELIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALSINGLELIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

