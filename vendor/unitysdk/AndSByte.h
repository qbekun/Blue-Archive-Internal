#pragma once
#include "unitysdk.h"

#define ANDSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x966B260)
#define ANDSBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x966B1D0)

	inline static constexpr unsigned int AndSByte_TypeDefinitionIndex = 33136;

	class AndSByte : public ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ANDSBYTE_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDSBYTE_.CTOR_OFFSET))(nullptr);
		}

	};

