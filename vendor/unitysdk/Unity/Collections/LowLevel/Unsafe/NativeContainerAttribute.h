#pragma once
#include "../../../../unitysdk.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E15A0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerAttribute_TypeDefinitionIndex = 30910;

	class NativeContainerAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVECONTAINERATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

