#pragma once
#include "unitysdk.h"

#define EQUALSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x9673E30)
#define EQUALSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673360)

	inline static constexpr unsigned int EqualSingle_TypeDefinitionIndex = 33207;

	class EqualSingle : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALSINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALSINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

