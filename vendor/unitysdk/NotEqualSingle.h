#pragma once
#include "unitysdk.h"

#define NOTEQUALSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x96A7020)
#define NOTEQUALSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A67D0)

	inline static constexpr unsigned int NotEqualSingle_TypeDefinitionIndex = 33411;

	class NotEqualSingle : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALSINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALSINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

