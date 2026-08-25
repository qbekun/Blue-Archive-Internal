#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_READONLYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1470)

namespace Unity::Collections
{
	inline static constexpr unsigned int ReadOnlyAttribute_TypeDefinitionIndex = 30892;

	class ReadOnlyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_READONLYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

