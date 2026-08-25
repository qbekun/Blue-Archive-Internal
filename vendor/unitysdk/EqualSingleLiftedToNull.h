#pragma once
#include "unitysdk.h"

#define EQUALSINGLELIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x9674BB0)
#define EQUALSINGLELIFTEDTONULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96732A0)

	inline static constexpr unsigned int EqualSingleLiftedToNull_TypeDefinitionIndex = 33220;

	class EqualSingleLiftedToNull : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALSINGLELIFTEDTONULL_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALSINGLELIFTEDTONULL_.CTOR_OFFSET))(nullptr);
		}

	};

