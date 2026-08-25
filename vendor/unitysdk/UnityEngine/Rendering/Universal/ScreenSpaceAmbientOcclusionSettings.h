#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSIONSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA069F20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScreenSpaceAmbientOcclusionSettings_TypeDefinitionIndex = 32733;

	class ScreenSpaceAmbientOcclusionSettings : public Il2CppObject
	{
	public:
		::System::Boolean Downsample; // 0x10
		::System::Boolean AfterOpaque; // 0x11
		DepthSource* Source; // 0x14
		NormalQuality* NormalSamples; // 0x18
		::System::Single Intensity; // 0x1C
		::System::Single DirectLightingStrength; // 0x20
		::System::Single Radius; // 0x24
		::System::Int32 SampleCount; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSIONSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

