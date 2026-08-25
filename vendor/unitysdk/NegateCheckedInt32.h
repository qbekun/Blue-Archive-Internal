#pragma once
#include "unitysdk.h"

#define NEGATECHECKEDINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A4E30)
#define NEGATECHECKEDINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A4E10)

	inline static constexpr unsigned int NegateCheckedInt32_TypeDefinitionIndex = 33395;

	class NegateCheckedInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATECHECKEDINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGATECHECKEDINT32_.CTOR_OFFSET))(nullptr);
		}

	};

