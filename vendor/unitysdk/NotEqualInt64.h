#pragma once
#include "unitysdk.h"

#define NOTEQUALINT64_RUN_OFFSET UNITYSDK_OFFSET(0x96A6C10)
#define NOTEQUALINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6780)

	inline static constexpr unsigned int NotEqualInt64_TypeDefinitionIndex = 33406;

	class NotEqualInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT64_.CTOR_OFFSET))(nullptr);
		}

	};

