#pragma once
#include "unitysdk.h"

#define GREATERTHANUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96776C0)
#define GREATERTHANUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9677F70)

	inline static constexpr unsigned int GreaterThanUInt16_TypeDefinitionIndex = 33244;

	class GreaterThanUInt16 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANUINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANUINT16_RUN_OFFSET))(arg, nullptr);
		}

	};

