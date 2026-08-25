#pragma once
#include "unitysdk.h"

#define ORSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96AB0C0)
#define ORSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AB030)

	inline static constexpr unsigned int OrSByte_TypeDefinitionIndex = 33441;

	class OrSByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ORSBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORSBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

