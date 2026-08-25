#pragma once
#include "unitysdk.h"

#define ANDINT32_RUN_OFFSET UNITYSDK_OFFSET(0x966B420)
#define ANDINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x966B1F0)

	inline static constexpr unsigned int AndInt32_TypeDefinitionIndex = 33138;

	class AndInt32 : public ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ANDINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDINT32_.CTOR_OFFSET))(nullptr);
		}

	};

