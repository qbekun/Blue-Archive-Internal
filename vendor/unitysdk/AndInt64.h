#pragma once
#include "unitysdk.h"

#define ANDINT64_RUN_OFFSET UNITYSDK_OFFSET(0x966B500)
#define ANDINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x966B200)

	inline static constexpr unsigned int AndInt64_TypeDefinitionIndex = 33139;

	class AndInt64 : public ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ANDINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDINT64_.CTOR_OFFSET))(nullptr);
		}

	};

