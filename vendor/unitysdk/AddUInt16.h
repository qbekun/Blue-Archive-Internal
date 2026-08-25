#pragma once
#include "unitysdk.h"

#define ADDUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9669490)
#define ADDUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669030)

	inline static constexpr unsigned int AddUInt16_TypeDefinitionIndex = 33123;

	class AddUInt16 : public <>c__DisplayClass145_0
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

