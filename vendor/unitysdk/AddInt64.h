#pragma once
#include "unitysdk.h"

#define ADDINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9669330)
#define ADDINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669020)

	inline static constexpr unsigned int AddInt64_TypeDefinitionIndex = 33122;

	class AddInt64 : public <>c__DisplayClass145_0
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDINT64_.CTOR_OFFSET))(nullptr);
		}

	};

