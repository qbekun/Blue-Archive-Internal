#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class RenderTexture; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXScreenshotBridge_TypeDefinitionIndex = 32664;

	class MXScreenshotBridge : public Il2CppObject
	{
	public:
		::UnityEngine::RenderTexture* TargetRT; // 0x0
		::System::Boolean IsRequested; // 0x8

	};
}

