#pragma once
#include "unitysdk.h"

#define SHADERPROPERTY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA05C8F0)

	inline static constexpr unsigned int ShaderProperty_TypeDefinitionIndex = 32645;

	class ShaderProperty : public Il2CppObject
	{
	public:
		::System::Int32 mainLightTexture; // 0x0
		::System::Int32 mainLightWorldToLight; // 0x4
		::System::Int32 mainLightCookieTextureFormat; // 0x8
		::System::Int32 additionalLightsCookieAtlasTexture; // 0xC
		::System::Int32 additionalLightsCookieAtlasTextureFormat; // 0x10
		::System::Int32 additionalLightsCookieEnableBits; // 0x14
		::System::Int32 additionalLightsCookieAtlasUVRectBuffer; // 0x18
		::System::Int32 additionalLightsCookieAtlasUVRects; // 0x1C
		::System::Int32 additionalLightsWorldToLightBuffer; // 0x20
		::System::Int32 additionalLightsLightTypeBuffer; // 0x24
		::System::Int32 additionalLightsWorldToLights; // 0x28
		::System::Int32 additionalLightsLightTypes; // 0x2C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPROPERTY_.CCTOR_OFFSET))(nullptr);
		}

	};

