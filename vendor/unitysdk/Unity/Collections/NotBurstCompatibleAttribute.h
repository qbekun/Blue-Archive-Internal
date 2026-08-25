#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_NOTBURSTCOMPATIBLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E387F0)

namespace Unity::Collections
{
	inline static constexpr unsigned int NotBurstCompatibleAttribute_TypeDefinitionIndex = 37018;

	class NotBurstCompatibleAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NOTBURSTCOMPATIBLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

