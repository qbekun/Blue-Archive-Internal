#pragma once
#include "unitysdk.h"

#define ADDINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9669080)
#define ADDINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669000)

	inline static constexpr unsigned int AddInt16_TypeDefinitionIndex = 33120;

	class AddInt16 : public <>c__DisplayClass145_0
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDINT16_.CTOR_OFFSET))(nullptr);
		}

	};

