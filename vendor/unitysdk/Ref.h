#pragma once
#include "unitysdk.h"

#define REF_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B0770)
#define REF_CONVERTNULL_OFFSET UNITYSDK_OFFSET(0x96B08F0)

	inline static constexpr unsigned int Ref_TypeDefinitionIndex = 33494;

	class Ref : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + REF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + REF_CONVERTNULL_OFFSET))(arg, nullptr);
		}

	};

