#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWSSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA06D480)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScreenSpaceShadowsSettings_TypeDefinitionIndex = 32737;

	class ScreenSpaceShadowsSettings : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWSSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

