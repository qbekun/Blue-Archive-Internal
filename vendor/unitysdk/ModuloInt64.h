#pragma once
#include "unitysdk.h"

#define MODULOINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A19E0)
#define MODULOINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A1580)

	inline static constexpr unsigned int ModuloInt64_TypeDefinitionIndex = 33366;

	class ModuloInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MODULOINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODULOINT64_.CTOR_OFFSET))(nullptr);
		}

	};

