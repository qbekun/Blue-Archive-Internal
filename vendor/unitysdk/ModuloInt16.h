#pragma once
#include "unitysdk.h"

#define MODULOINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A15E0)
#define MODULOINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A1560)

	inline static constexpr unsigned int ModuloInt16_TypeDefinitionIndex = 33364;

	class ModuloInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MODULOINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODULOINT16_.CTOR_OFFSET))(nullptr);
		}

	};

