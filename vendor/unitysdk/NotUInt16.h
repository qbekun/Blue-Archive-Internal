#pragma once
#include "unitysdk.h"

#define NOTUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96A8560)
#define NOTUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A81A0)

	inline static constexpr unsigned int NotUInt16_TypeDefinitionIndex = 33432;

	class NotUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

