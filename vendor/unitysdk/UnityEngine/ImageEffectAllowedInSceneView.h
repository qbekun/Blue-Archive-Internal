#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_IMAGEEFFECTALLOWEDINSCENEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F5970)

namespace UnityEngine
{
	inline static constexpr unsigned int ImageEffectAllowedInSceneView_TypeDefinitionIndex = 31006;

	class ImageEffectAllowedInSceneView : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGEEFFECTALLOWEDINSCENEVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

