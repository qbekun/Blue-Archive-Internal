#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1490)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeDisableParallelForRestrictionAttribute_TypeDefinitionIndex = 30897;

	class NativeDisableParallelForRestrictionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

