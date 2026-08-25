#pragma once
#include "../../../../unitysdk.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E15F0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeDisableUnsafePtrRestrictionAttribute_TypeDefinitionIndex = 30919;

	class NativeDisableUnsafePtrRestrictionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

