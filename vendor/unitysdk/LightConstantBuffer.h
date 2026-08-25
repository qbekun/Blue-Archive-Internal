#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int LightConstantBuffer_TypeDefinitionIndex = 32861;

	class LightConstantBuffer : public Il2CppObject
	{
	public:
		::System::Int32 _MainLightPosition; // 0x0
		::System::Int32 _MainLightColor; // 0x4
		::System::Int32 _MainLightOcclusionProbesChannel; // 0x8
		::System::Int32 _MainLightLayerMask; // 0xC
		::System::Int32 _AdditionalLightsCount; // 0x10
		::System::Int32 _AdditionalLightsPosition; // 0x14
		::System::Int32 _AdditionalLightsColor; // 0x18
		::System::Int32 _AdditionalLightsAttenuation; // 0x1C
		::System::Int32 _AdditionalLightsSpotDir; // 0x20
		::System::Int32 _AdditionalLightOcclusionProbeChannel; // 0x24
		::System::Int32 _AdditionalLightsLayerMasks; // 0x28
		::System::Int32 _MxCharLightTone; // 0x2C
		::System::Int32 _MxCharShadowTone; // 0x30
		::System::Int32 _MxCharLightData; // 0x34

	};

