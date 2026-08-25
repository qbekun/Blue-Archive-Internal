#pragma once
#include "unitysdk.h"

#define ORBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x96AB7F0)
#define ORBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AB0B0)

	inline static constexpr unsigned int OrBoolean_TypeDefinitionIndex = 33449;

	class OrBoolean : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ORBOOLEAN_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORBOOLEAN_.CTOR_OFFSET))(nullptr);
		}

	};

