#pragma once
#include "unitysdk.h"

#define GREATERTHANUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96776F0)
#define GREATERTHANUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96780C0)

	inline static constexpr unsigned int GreaterThanUInt32_TypeDefinitionIndex = 33245;

	class GreaterThanUInt32 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANUINT32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANUINT32_RUN_OFFSET))(arg, nullptr);
		}

	};

