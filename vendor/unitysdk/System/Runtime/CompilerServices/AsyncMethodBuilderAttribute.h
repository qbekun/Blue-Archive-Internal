#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF9E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderAttribute_TypeDefinitionIndex = 35838;

	class AsyncMethodBuilderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* _BuilderType_k__BackingField; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

