#pragma once
#include "../../../../unitysdk.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1600)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeDisableContainerSafetyRestrictionAttribute_TypeDefinitionIndex = 30920;

	class NativeDisableContainerSafetyRestrictionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

