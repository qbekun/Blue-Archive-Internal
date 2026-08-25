#pragma once
#include "../../unitysdk.h"

#define JETBRAINS_ANNOTATIONS_CANBENULLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1D00)

namespace JetBrains::Annotations
{
	inline static constexpr unsigned int CanBeNullAttribute_TypeDefinitionIndex = 30929;

	class CanBeNullAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JETBRAINS_ANNOTATIONS_CANBENULLATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

