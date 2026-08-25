#pragma once
#include "unitysdk.h"

#define ANDBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x966B5F0)
#define ANDBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x966B210)

	inline static constexpr unsigned int AndByte_TypeDefinitionIndex = 33140;

	class AndByte : public ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ANDBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

