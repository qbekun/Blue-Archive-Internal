#pragma once
#include "unitysdk.h"

#define ADDOVFINT32_RUN_OFFSET UNITYSDK_OFFSET(0x966A230)
#define ADDOVFINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669F80)

	inline static constexpr unsigned int AddOvfInt32_TypeDefinitionIndex = 33130;

	class AddOvfInt32 : public ::UnityEngine::AddressableAssets::AddressablesImpl
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDOVFINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDOVFINT32_.CTOR_OFFSET))(nullptr);
		}

	};

