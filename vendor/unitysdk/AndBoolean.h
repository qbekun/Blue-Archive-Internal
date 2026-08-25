#pragma once
#include "unitysdk.h"

#define ANDBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x966B990)
#define ANDBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x966B250)

	inline static constexpr unsigned int AndBoolean_TypeDefinitionIndex = 33144;

	class AndBoolean : public ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ANDBOOLEAN_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDBOOLEAN_.CTOR_OFFSET))(nullptr);
		}

	};

