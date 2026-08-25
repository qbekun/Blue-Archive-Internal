#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_WRITEONLYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1480)

namespace Unity::Collections
{
	inline static constexpr unsigned int WriteOnlyAttribute_TypeDefinitionIndex = 30893;

	class WriteOnlyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_WRITEONLYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

