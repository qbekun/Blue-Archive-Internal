#pragma once
#include "unitysdk.h"

#define NEGATEINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A4900)
#define NEGATEINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A4830)

	inline static constexpr unsigned int NegateInt32_TypeDefinitionIndex = 33390;

	class NegateInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATEINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGATEINT32_.CTOR_OFFSET))(nullptr);
		}

	};

