#pragma once
#include "unitysdk.h"

#define MODULOUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A1CD0)
#define MODULOUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A15A0)

	inline static constexpr unsigned int ModuloUInt32_TypeDefinitionIndex = 33368;

	class ModuloUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MODULOUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODULOUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

