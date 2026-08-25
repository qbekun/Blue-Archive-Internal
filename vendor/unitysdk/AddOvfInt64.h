#pragma once
#include "unitysdk.h"

#define ADDOVFINT64_RUN_OFFSET UNITYSDK_OFFSET(0x966A450)
#define ADDOVFINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669F90)

	inline static constexpr unsigned int AddOvfInt64_TypeDefinitionIndex = 33131;

	class AddOvfInt64 : public ::UnityEngine::AddressableAssets::AddressablesImpl
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDOVFINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDOVFINT64_.CTOR_OFFSET))(nullptr);
		}

	};

