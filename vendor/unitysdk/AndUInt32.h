#pragma once
#include "unitysdk.h"

#define ANDUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x966B7B0)
#define ANDUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x966B230)

	inline static constexpr unsigned int AndUInt32_TypeDefinitionIndex = 33142;

	class AndUInt32 : public ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ANDUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

