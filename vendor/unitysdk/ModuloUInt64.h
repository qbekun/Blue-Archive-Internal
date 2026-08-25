#pragma once
#include "unitysdk.h"

#define MODULOUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A1E30)
#define MODULOUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A15B0)

	inline static constexpr unsigned int ModuloUInt64_TypeDefinitionIndex = 33369;

	class ModuloUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MODULOUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODULOUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

