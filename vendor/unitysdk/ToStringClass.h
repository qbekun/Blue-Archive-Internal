#pragma once
#include "unitysdk.h"

#define TOSTRINGCLASS_RUN_OFFSET UNITYSDK_OFFSET(0x96AFC80)
#define TOSTRINGCLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF970)

	inline static constexpr unsigned int ToStringClass_TypeDefinitionIndex = 33490;

	class ToStringClass : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + TOSTRINGCLASS_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOSTRINGCLASS_.CTOR_OFFSET))(nullptr);
		}

	};

