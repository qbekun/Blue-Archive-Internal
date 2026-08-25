#pragma once
#include "unitysdk.h"

#define ORBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x96AB450)
#define ORBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AB070)

	inline static constexpr unsigned int OrByte_TypeDefinitionIndex = 33445;

	class OrByte : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ORBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

