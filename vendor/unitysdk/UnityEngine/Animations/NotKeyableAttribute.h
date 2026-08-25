#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_ANIMATIONS_NOTKEYABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CE4A0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int NotKeyableAttribute_TypeDefinitionIndex = 36489;

	class NotKeyableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_NOTKEYABLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

