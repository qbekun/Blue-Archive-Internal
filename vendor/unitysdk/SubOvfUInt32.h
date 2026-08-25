#pragma once
#include "unitysdk.h"

#define SUBOVFUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96AEA60)
#define SUBOVFUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AE130)

	inline static constexpr unsigned int SubOvfUInt32_TypeDefinitionIndex = 33478;

	class SubOvfUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBOVFUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBOVFUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

