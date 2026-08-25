#pragma once
#include "unitysdk.h"

#define DIVUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9672040)
#define DIVUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9671A90)

	inline static constexpr unsigned int DivUInt32_TypeDefinitionIndex = 33192;

	class DivUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DIVUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIVUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

