#pragma once
#include "unitysdk.h"

#define EQUALCHAR_RUN_OFFSET UNITYSDK_OFFSET(0x96737A0)
#define EQUALCHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x96732F0)

	inline static constexpr unsigned int EqualChar_TypeDefinitionIndex = 33200;

	class EqualChar : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALCHAR_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALCHAR_.CTOR_OFFSET))(nullptr);
		}

	};

