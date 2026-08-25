#pragma once
#include "unitysdk.h"

#define CASTINSTRUCTIONT`1_RUN_OFFSET UNITYSDK_OFFSET(0x000000)
#define CASTINSTRUCTIONT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CastInstructionT`1_TypeDefinitionIndex = 33493;

	class CastInstructionT`1 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + CASTINSTRUCTIONT`1_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CASTINSTRUCTIONT`1_.CTOR_OFFSET))(nullptr);
		}

	};

