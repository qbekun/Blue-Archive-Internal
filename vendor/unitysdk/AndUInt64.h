#pragma once
#include "unitysdk.h"

#define ANDUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x966B8A0)
#define ANDUINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x966B240)

	inline static constexpr unsigned int AndUInt64_TypeDefinitionIndex = 33143;

	class AndUInt64 : public ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ANDUINT64_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDUINT64_.CTOR_OFFSET))(nullptr);
		}

	};

