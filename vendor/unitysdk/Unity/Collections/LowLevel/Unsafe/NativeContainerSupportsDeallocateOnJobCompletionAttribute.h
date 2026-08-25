#pragma once
#include "../../../../unitysdk.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E15C0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerSupportsDeallocateOnJobCompletionAttribute_TypeDefinitionIndex = 30914;

	class NativeContainerSupportsDeallocateOnJobCompletionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

