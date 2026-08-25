#pragma once
#include "unitysdk.h"

#define GREATERTHANSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9677750)
#define GREATERTHANSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x9678340)

	inline static constexpr unsigned int GreaterThanSingle_TypeDefinitionIndex = 33247;

	class GreaterThanSingle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANSINGLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GREATERTHANSINGLE_RUN_OFFSET))(arg, nullptr);
		}

	};

