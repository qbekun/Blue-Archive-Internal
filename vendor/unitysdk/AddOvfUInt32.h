#pragma once
#include "unitysdk.h"

#define ADDOVFUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x966A8C0)
#define ADDOVFUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669FB0)

	inline static constexpr unsigned int AddOvfUInt32_TypeDefinitionIndex = 33133;

	class AddOvfUInt32 : public ::UnityEngine::AddressableAssets::AddressablesImpl
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDOVFUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDOVFUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

