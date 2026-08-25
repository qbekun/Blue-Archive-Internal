#pragma once
#include "unitysdk.h"

#define SUBOVFINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96AE3C0)
#define SUBOVFINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AE100)

	inline static constexpr unsigned int SubOvfInt32_TypeDefinitionIndex = 33475;

	class SubOvfInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBOVFINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBOVFINT32_.CTOR_OFFSET))(nullptr);
		}

	};

