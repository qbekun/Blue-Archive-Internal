#pragma once
#include "unitysdk.h"

#define DIVUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9671ED0)
#define DIVUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9671A80)

	inline static constexpr unsigned int DivUInt16_TypeDefinitionIndex = 33191;

	class DivUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + DIVUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIVUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

