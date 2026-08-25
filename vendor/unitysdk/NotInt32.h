#pragma once
#include "unitysdk.h"

#define NOTINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96A8300)
#define NOTINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A8160)

	inline static constexpr unsigned int NotInt32_TypeDefinitionIndex = 33428;

	class NotInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTINT32_.CTOR_OFFSET))(nullptr);
		}

	};

