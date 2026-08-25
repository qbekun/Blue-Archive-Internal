#pragma once
#include "unitysdk.h"

#define NOTEQUALCHAR_RUN_OFFSET UNITYSDK_OFFSET(0x96A6A70)
#define NOTEQUALCHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A6760)

	inline static constexpr unsigned int NotEqualChar_TypeDefinitionIndex = 33404;

	class NotEqualChar : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALCHAR_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTEQUALCHAR_.CTOR_OFFSET))(nullptr);
		}

	};

