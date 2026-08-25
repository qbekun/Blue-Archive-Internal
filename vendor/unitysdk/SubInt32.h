#pragma once
#include "unitysdk.h"

#define SUBINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96AD360)
#define SUBINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AD190)

	inline static constexpr unsigned int SubInt32_TypeDefinitionIndex = 33466;

	class SubInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SUBINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBINT32_.CTOR_OFFSET))(nullptr);
		}

	};

