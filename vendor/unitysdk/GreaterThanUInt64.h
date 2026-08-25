#pragma once
#include "unitysdk.h"

#define GREATERTHANUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9677720)
#define GREATERTHANUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9678200)

	inline static constexpr unsigned int GreaterThanUInt64_TypeDefinitionIndex = 33246;

	class GreaterThanUInt64 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANUINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANUINT64_RUN_OFFSET))(arg, nullptr);
		}

	};

