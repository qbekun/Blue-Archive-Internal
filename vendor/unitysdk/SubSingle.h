#pragma once
#include "unitysdk.h"

#define SUBSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x96ADA30)
#define SUBSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AD1E0)

	inline static constexpr unsigned int SubSingle_TypeDefinitionIndex = 33471;

	class SubSingle : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBSINGLE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBSINGLE_.CTOR_OFFSET))(nullptr);
		}

	};

