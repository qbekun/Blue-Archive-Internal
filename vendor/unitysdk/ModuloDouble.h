#pragma once
#include "unitysdk.h"

#define MODULODOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x96A2120)
#define MODULODOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A15D0)

	inline static constexpr unsigned int ModuloDouble_TypeDefinitionIndex = 33371;

	class ModuloDouble : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MODULODOUBLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODULODOUBLE_.CTOR_OFFSET))(nullptr);
		}

	};

