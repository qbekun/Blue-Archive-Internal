#pragma once
#include "unitysdk.h"

#define EQUALUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x9673D40)
#define EQUALUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9673350)

	inline static constexpr unsigned int EqualUInt64_TypeDefinitionIndex = 33206;

	class EqualUInt64 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

