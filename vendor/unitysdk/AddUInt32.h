#pragma once
#include "unitysdk.h"

#define ADDUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96695F0)
#define ADDUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669040)

	inline static constexpr unsigned int AddUInt32_TypeDefinitionIndex = 33124;

	class AddUInt32 : public <>c__DisplayClass145_0
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

