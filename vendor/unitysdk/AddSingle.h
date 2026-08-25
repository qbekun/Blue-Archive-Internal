#pragma once
#include "unitysdk.h"

#define ADDSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x96698B0)
#define ADDSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669060)

	inline static constexpr unsigned int AddSingle_TypeDefinitionIndex = 33126;

	class AddSingle : public <>c__DisplayClass145_0
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDSINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDSINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

