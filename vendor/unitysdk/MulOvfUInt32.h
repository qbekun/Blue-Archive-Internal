#pragma once
#include "unitysdk.h"

#define MULOVFUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A40B0)
#define MULOVFUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A3720)

	inline static constexpr unsigned int MulOvfUInt32_TypeDefinitionIndex = 33386;

	class MulOvfUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULOVFUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULOVFUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

