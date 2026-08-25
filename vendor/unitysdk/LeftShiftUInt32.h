#pragma once
#include "unitysdk.h"

#define LEFTSHIFTUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96855F0)
#define LEFTSHIFTUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684EF0)

	inline static constexpr unsigned int LeftShiftUInt32_TypeDefinitionIndex = 33290;

	class LeftShiftUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFTSHIFTUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

