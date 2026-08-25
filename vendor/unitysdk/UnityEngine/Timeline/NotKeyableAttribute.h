#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_NOTKEYABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB700)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int NotKeyableAttribute_TypeDefinitionIndex = 36318;

	class NotKeyableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTKEYABLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

