#pragma once
#include "../../unitysdk.h"

#define JETBRAINS_ANNOTATIONS_NOTNULLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1D10)

namespace JetBrains::Annotations
{
	inline static constexpr unsigned int NotNullAttribute_TypeDefinitionIndex = 30930;

	class NotNullAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JETBRAINS_ANNOTATIONS_NOTNULLATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

