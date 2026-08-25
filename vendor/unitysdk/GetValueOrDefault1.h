#pragma once
#include "unitysdk.h"

#define GETVALUEORDEFAULT1_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x96AFB30)
#define GETVALUEORDEFAULT1_RUN_OFFSET UNITYSDK_OFFSET(0x96AFB40)
#define GETVALUEORDEFAULT1_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF960)

	inline static constexpr unsigned int GetValueOrDefault1_TypeDefinitionIndex = 33488;

	class GetValueOrDefault1 : public Il2CppObject
	{
	public:
		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GETVALUEORDEFAULT1_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GETVALUEORDEFAULT1_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GETVALUEORDEFAULT1_.CTOR_OFFSET))(nullptr);
		}

	};

