#pragma once
#include "../../unitysdk.h"

#define JETBRAINS_ANNOTATIONS_PUREATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1D20)

namespace JetBrains::Annotations
{
	inline static constexpr unsigned int PureAttribute_TypeDefinitionIndex = 30931;

	class PureAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JETBRAINS_ANNOTATIONS_PUREATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

