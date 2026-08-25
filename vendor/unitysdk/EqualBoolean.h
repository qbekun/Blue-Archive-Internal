#pragma once
#include "unitysdk.h"

#define EQUALBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x9673390)
#define EQUALBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x96732C0)

	inline static constexpr unsigned int EqualBoolean_TypeDefinitionIndex = 33197;

	class EqualBoolean : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALBOOLEAN_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALBOOLEAN_.CTOR_OFFSET))(nullptr);
		}

	};

