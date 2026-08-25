#pragma once
#include "unitysdk.h"

#define ADDOVFINT16_RUN_OFFSET UNITYSDK_OFFSET(0x9669FD0)
#define ADDOVFINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669F70)

	inline static constexpr unsigned int AddOvfInt16_TypeDefinitionIndex = 33129;

	class AddOvfInt16 : public ::UnityEngine::AddressableAssets::AddressablesImpl
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDOVFINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDOVFINT16_.CTOR_OFFSET))(nullptr);
		}

	};

