#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F4CB0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_TypeDefinitionIndex = 9;

	class NullableContextAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Byte Flag; // 0x10

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

