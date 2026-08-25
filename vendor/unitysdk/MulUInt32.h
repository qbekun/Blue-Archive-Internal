#pragma once
#include "unitysdk.h"

#define MULUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A2D60)
#define MULUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A27B0)

	inline static constexpr unsigned int MulUInt32_TypeDefinitionIndex = 33377;

	class MulUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + MULUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

