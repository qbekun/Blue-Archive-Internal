#pragma once
#include "unitysdk.h"

#define ADDUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9669750)
#define ADDUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669050)

	inline static constexpr unsigned int AddUInt64_TypeDefinitionIndex = 33125;

	class AddUInt64 : public <>c__DisplayClass145_0
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

