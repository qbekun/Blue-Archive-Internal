#pragma once
#include "unitysdk.h"

#define GETHASHCODECLASS_RUN_OFFSET UNITYSDK_OFFSET(0x96AFD10)
#define GETHASHCODECLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF900)

	inline static constexpr unsigned int GetHashCodeClass_TypeDefinitionIndex = 33491;

	class GetHashCodeClass : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GETHASHCODECLASS_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GETHASHCODECLASS_.CTOR_OFFSET))(nullptr);
		}

	};

