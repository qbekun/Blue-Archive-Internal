#pragma once
#include "unitysdk.h"

#define ANDINT16_RUN_OFFSET UNITYSDK_OFFSET(0x966B340)
#define ANDINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x966B1E0)

	inline static constexpr unsigned int AndInt16_TypeDefinitionIndex = 33137;

	class AndInt16 : public ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ANDINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDINT16_.CTOR_OFFSET))(nullptr);
		}

	};

