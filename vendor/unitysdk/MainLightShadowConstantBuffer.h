#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int MainLightShadowConstantBuffer_TypeDefinitionIndex = 32877;

	class MainLightShadowConstantBuffer : public Il2CppObject
	{
	public:
		::System::Int32 _WorldToShadow; // 0x0
		::System::Int32 _ShadowParams; // 0x4
		::System::Int32 _CascadeShadowSplitSpheres0; // 0x8
		::System::Int32 _CascadeShadowSplitSpheres1; // 0xC
		::System::Int32 _CascadeShadowSplitSpheres2; // 0x10
		::System::Int32 _CascadeShadowSplitSpheres3; // 0x14
		::System::Int32 _CascadeShadowSplitSphereRadii; // 0x18
		::System::Int32 _ShadowOffset0; // 0x1C
		::System::Int32 _ShadowOffset1; // 0x20
		::System::Int32 _ShadowOffset2; // 0x24
		::System::Int32 _ShadowOffset3; // 0x28
		::System::Int32 _ShadowmapSize; // 0x2C

	};

