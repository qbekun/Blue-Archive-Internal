#pragma once
#include "unitysdk.h"

#define NEGATECHECKEDINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A4F30)
#define NEGATECHECKEDINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A4E00)

	inline static constexpr unsigned int NegateCheckedInt16_TypeDefinitionIndex = 33396;

	class NegateCheckedInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATECHECKEDINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGATECHECKEDINT16_.CTOR_OFFSET))(nullptr);
		}

	};

