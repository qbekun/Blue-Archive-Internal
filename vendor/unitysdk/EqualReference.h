#pragma once
#include "unitysdk.h"

#define EQUALREFERENCE_RUN_OFFSET UNITYSDK_OFFSET(0x9674030)
#define EQUALREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673380)

	inline static constexpr unsigned int EqualReference_TypeDefinitionIndex = 33209;

	class EqualReference : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALREFERENCE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALREFERENCE_.CTOR_OFFSET))(nullptr);
		}

	};

