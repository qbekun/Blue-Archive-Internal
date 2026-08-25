#pragma once
#include "unitysdk.h"

#define MODULOSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x96A1FB0)
#define MODULOSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A15C0)

	inline static constexpr unsigned int ModuloSingle_TypeDefinitionIndex = 33370;

	class ModuloSingle : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MODULOSINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODULOSINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

