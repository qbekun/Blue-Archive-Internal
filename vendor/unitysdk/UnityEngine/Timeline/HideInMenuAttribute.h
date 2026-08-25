#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_HIDEINMENUATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB810)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int HideInMenuAttribute_TypeDefinitionIndex = 36326;

	class HideInMenuAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HIDEINMENUATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

