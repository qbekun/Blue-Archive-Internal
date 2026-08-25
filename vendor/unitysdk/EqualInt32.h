#pragma once
#include "unitysdk.h"

#define EQUALINT32_RUN_OFFSET UNITYSDK_OFFSET(0x9673890)
#define EQUALINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673300)

	inline static constexpr unsigned int EqualInt32_TypeDefinitionIndex = 33201;

	class EqualInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALINT32_.CTOR_OFFSET))(nullptr);
		}

	};

