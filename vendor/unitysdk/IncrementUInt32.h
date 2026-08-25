#pragma once
#include "unitysdk.h"

#define INCREMENTUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x967AD90)
#define INCREMENTUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x967AA10)

	inline static constexpr unsigned int IncrementUInt32_TypeDefinitionIndex = 33266;

	class IncrementUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + INCREMENTUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREMENTUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

