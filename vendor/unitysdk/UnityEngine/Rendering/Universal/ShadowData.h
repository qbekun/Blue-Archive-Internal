#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowData_TypeDefinitionIndex = 32801;

	class ShadowData : public Il2CppObject
	{
	public:
		::System::Boolean supportsMainLightShadows; // 0x10
		::System::Boolean requiresScreenSpaceShadowResolve; // 0x11
		::System::Int32 mainLightShadowmapWidth; // 0x14
		::System::Int32 mainLightShadowmapHeight; // 0x18
		::System::Int32 mainLightShadowCascadesCount; // 0x1C
		::UnityEngine::Vector3* mainLightShadowCascadesSplit; // 0x20
		::System::Single mainLightShadowCascadeBorder; // 0x2C
		::System::Boolean supportsAdditionalLightShadows; // 0x30
		::System::Int32 additionalLightsShadowmapWidth; // 0x34
		::System::Int32 additionalLightsShadowmapHeight; // 0x38
		::System::Boolean supportsSoftShadows; // 0x3C
		::System::Int32 shadowmapDepthBufferBits; // 0x40
		Il2CppObject* bias; // 0x48
		Il2CppObject* resolution; // 0x50
		::System::Boolean isKeywordAdditionalLightShadowsEnabled; // 0x58
		::System::Boolean isKeywordSoftShadowsEnabled; // 0x59

	};
}

