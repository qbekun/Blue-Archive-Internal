#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERPROPERTYID_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA08DED0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPropertyId_TypeDefinitionIndex = 32805;

	class ShaderPropertyId : public Il2CppObject
	{
	public:
		::System::Int32 glossyEnvironmentColor; // 0x0
		::System::Int32 subtractiveShadowColor; // 0x4
		::System::Int32 glossyEnvironmentCubeMap; // 0x8
		::System::Int32 glossyEnvironmentCubeMapHDR; // 0xC
		::System::Int32 ambientSkyColor; // 0x10
		::System::Int32 ambientEquatorColor; // 0x14
		::System::Int32 ambientGroundColor; // 0x18
		::System::Int32 time; // 0x1C
		::System::Int32 sinTime; // 0x20
		::System::Int32 cosTime; // 0x24
		::System::Int32 deltaTime; // 0x28
		::System::Int32 timeParameters; // 0x2C
		::System::Int32 scaledScreenParams; // 0x30
		::System::Int32 worldSpaceCameraPos; // 0x34
		::System::Int32 screenParams; // 0x38
		::System::Int32 projectionParams; // 0x3C
		::System::Int32 zBufferParams; // 0x40
		::System::Int32 orthoParams; // 0x44
		::System::Int32 globalMipBias; // 0x48
		::System::Int32 screenSize; // 0x4C
		::System::Int32 viewMatrix; // 0x50
		::System::Int32 projectionMatrix; // 0x54
		::System::Int32 viewAndProjectionMatrix; // 0x58
		::System::Int32 inverseViewMatrix; // 0x5C
		::System::Int32 inverseProjectionMatrix; // 0x60
		::System::Int32 inverseViewAndProjectionMatrix; // 0x64
		::System::Int32 cameraProjectionMatrix; // 0x68
		::System::Int32 inverseCameraProjectionMatrix; // 0x6C
		::System::Int32 worldToCameraMatrix; // 0x70
		::System::Int32 cameraToWorldMatrix; // 0x74
		::System::Int32 cameraWorldClipPlanes; // 0x78
		::System::Int32 billboardNormal; // 0x7C
		::System::Int32 billboardTangent; // 0x80
		::System::Int32 billboardCameraParams; // 0x84
		::System::Int32 sourceTex; // 0x88
		::System::Int32 scaleBias; // 0x8C
		::System::Int32 scaleBiasRt; // 0x90
		::System::Int32 rendererColor; // 0x94

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERPROPERTYID_.CCTOR_OFFSET))(nullptr);
		}

	};
}

