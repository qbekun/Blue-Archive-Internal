#pragma once
#include "unitysdk.h"

#define MODULOUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A1B60)
#define MODULOUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A1590)

	inline static constexpr unsigned int ModuloUInt16_TypeDefinitionIndex = 33367;

	class ModuloUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MODULOUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODULOUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

