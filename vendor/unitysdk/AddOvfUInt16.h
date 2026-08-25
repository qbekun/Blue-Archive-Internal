#pragma once
#include "unitysdk.h"

#define ADDOVFUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x966A660)
#define ADDOVFUINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669FA0)

	inline static constexpr unsigned int AddOvfUInt16_TypeDefinitionIndex = 33132;

	class AddOvfUInt16 : public ::UnityEngine::AddressableAssets::AddressablesImpl
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDOVFUINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDOVFUINT16_.CTOR_OFFSET))(nullptr);
		}

	};

