#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2D430)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int SyncSceneToStreamAttribute_TypeDefinitionIndex = 37188;

	class SyncSceneToStreamAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

