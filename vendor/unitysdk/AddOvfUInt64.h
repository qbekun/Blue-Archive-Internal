#pragma once
#include "unitysdk.h"

#define ADDOVFUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x966AAA0)
#define ADDOVFUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669FC0)

	inline static constexpr unsigned int AddOvfUInt64_TypeDefinitionIndex = 33134;

	class AddOvfUInt64 : public ::UnityEngine::AddressableAssets::AddressablesImpl
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDOVFUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDOVFUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

