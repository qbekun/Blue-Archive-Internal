#pragma once
#include "unitysdk.h"

#define NEGATECHECKEDINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A5060)
#define NEGATECHECKEDINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A4E20)

	inline static constexpr unsigned int NegateCheckedInt64_TypeDefinitionIndex = 33397;

	class NegateCheckedInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATECHECKEDINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGATECHECKEDINT64_.CTOR_OFFSET))(nullptr);
		}

	};

