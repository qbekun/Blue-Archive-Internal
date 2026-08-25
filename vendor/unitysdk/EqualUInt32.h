#pragma once
#include "unitysdk.h"

#define EQUALUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9673C50)
#define EQUALUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673340)

	inline static constexpr unsigned int EqualUInt32_TypeDefinitionIndex = 33205;

	class EqualUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

