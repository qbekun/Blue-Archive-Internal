#pragma once
#include "unitysdk.h"

#define NOTEQUALINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A6B40)
#define NOTEQUALINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6770)

	inline static constexpr unsigned int NotEqualInt32_TypeDefinitionIndex = 33405;

	class NotEqualInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALINT32_.CTOR_OFFSET))(nullptr);
		}

	};

