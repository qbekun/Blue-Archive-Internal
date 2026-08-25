#pragma once
#include "unitysdk.h"

#define LEFTSHIFTUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96854E0)
#define LEFTSHIFTUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684EE0)

	inline static constexpr unsigned int LeftShiftUInt16_TypeDefinitionIndex = 33289;

	class LeftShiftUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

