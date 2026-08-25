#pragma once
#include "unitysdk.h"

#define MULOVFINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A39B0)
#define MULOVFINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A36F0)

	inline static constexpr unsigned int MulOvfInt32_TypeDefinitionIndex = 33383;

	class MulOvfInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULOVFINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULOVFINT32_.CTOR_OFFSET))(nullptr);
		}

	};

