#pragma once
#include "unitysdk.h"

#define EQUALUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9673B60)
#define EQUALUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673330)

	inline static constexpr unsigned int EqualUInt16_TypeDefinitionIndex = 33204;

	class EqualUInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

