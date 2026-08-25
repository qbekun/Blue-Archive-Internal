#pragma once
#include "unitysdk.h"

#define GETVALUEORDEFAULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AF910)
#define GETVALUEORDEFAULT_RUN_OFFSET UNITYSDK_OFFSET(0x96AFAD0)

	inline static constexpr unsigned int GetValueOrDefault_TypeDefinitionIndex = 33487;

	class GetValueOrDefault : public Il2CppObject
	{
	public:
		::System::Type* _defaultValueType; // 0x10

		::System::Void .ctor(::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + GETVALUEORDEFAULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + GETVALUEORDEFAULT_RUN_OFFSET))(arg, nullptr);
		}

	};

