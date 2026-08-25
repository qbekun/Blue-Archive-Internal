#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERKEYWORDSTRINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA08E570)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderKeywordStrings_TypeDefinitionIndex = 32807;

	class ShaderKeywordStrings : public Il2CppObject
	{
	public:
		::System::String* MainLightShadows; // 0x0
		::System::String* MainLightShadowCascades; // 0x8
		::System::String* MainLightShadowScreen; // 0x10
		::System::String* CastingPunctualLightShadow; // 0x18
		::System::String* AdditionalLightsVertex; // 0x20
		::System::String* AdditionalLightsPixel; // 0x28
		::System::String* ClusteredRendering; // 0x30
		::System::String* AdditionalLightShadows; // 0x38
		::System::String* ReflectionProbeBoxProjection; // 0x40
		::System::String* ReflectionProbeBlending; // 0x48
		::System::String* SoftShadows; // 0x50
		::System::String* MixedLightingSubtractive; // 0x58
		::System::String* LightmapShadowMixing; // 0x60
		::System::String* ShadowsShadowMask; // 0x68
		::System::String* LightLayers; // 0x70
		::System::String* RenderPassEnabled; // 0x78
		::System::String* BillboardFaceCameraPos; // 0x80
		::System::String* LightCookies; // 0x88
		::System::String* DepthNoMsaa; // 0x90
		::System::String* DepthMsaa2; // 0x98
		::System::String* DepthMsaa4; // 0xA0
		::System::String* DepthMsaa8; // 0xA8
		::System::String* LinearToSRGBConversion; // 0xB0
		::System::String* UseFastSRGBLinearConversion; // 0xB8
		::System::String* DBufferMRT1; // 0xC0
		::System::String* DBufferMRT2; // 0xC8
		::System::String* DBufferMRT3; // 0xD0
		::System::String* DecalNormalBlendLow; // 0xD8
		::System::String* DecalNormalBlendMedium; // 0xE0
		::System::String* DecalNormalBlendHigh; // 0xE8
		::System::String* SmaaLow; // 0xF0
		::System::String* SmaaMedium; // 0xF8
		::System::String* SmaaHigh; // 0x100
		::System::String* PaniniGeneric; // 0x108
		::System::String* PaniniUnitDistance; // 0x110
		::System::String* BloomLQ; // 0x118
		::System::String* BloomHQ; // 0x120
		::System::String* BloomLQDirt; // 0x128
		::System::String* BloomHQDirt; // 0x130
		::System::String* UseRGBM; // 0x138
		::System::String* Distortion; // 0x140
		::System::String* ChromaticAberration; // 0x148
		::System::String* HDRGrading; // 0x150
		::System::String* TonemapACES; // 0x158
		::System::String* TonemapNeutral; // 0x160
		::System::String* FilmGrain; // 0x168
		::System::String* Fxaa; // 0x170
		::System::String* Dithering; // 0x178
		::System::String* ScreenSpaceOcclusion; // 0x180
		::System::String* PointSampling; // 0x188
		::System::String* Rcas; // 0x190
		::System::String* Gamma20; // 0x198
		::System::String* HighQualitySampling; // 0x1A0
		::System::String* DOWNSAMPLING_SIZE_2; // 0x1A8
		::System::String* DOWNSAMPLING_SIZE_4; // 0x1B0
		::System::String* DOWNSAMPLING_SIZE_8; // 0x1B8
		::System::String* DOWNSAMPLING_SIZE_16; // 0x1C0
		::System::String* _SPOT; // 0x1C8
		::System::String* _DIRECTIONAL; // 0x1D0
		::System::String* _POINT; // 0x1D8
		::System::String* _DEFERRED_STENCIL; // 0x1E0
		::System::String* _DEFERRED_FIRST_LIGHT; // 0x1E8
		::System::String* _DEFERRED_MAIN_LIGHT; // 0x1F0
		::System::String* _GBUFFER_NORMALS_OCT; // 0x1F8
		::System::String* _DEFERRED_MIXED_LIGHTING; // 0x200
		::System::String* LIGHTMAP_ON; // 0x208
		::System::String* DYNAMICLIGHTMAP_ON; // 0x210
		::System::String* _ALPHATEST_ON; // 0x218
		::System::String* DIRLIGHTMAP_COMBINED; // 0x220
		::System::String* _DETAIL_MULX2; // 0x228
		::System::String* _DETAIL_SCALED; // 0x230
		::System::String* _CLEARCOAT; // 0x238
		::System::String* _CLEARCOATMAP; // 0x240
		::System::String* DEBUG_DISPLAY; // 0x248
		::System::String* _EMISSION; // 0x250
		::System::String* _RECEIVE_SHADOWS_OFF; // 0x258
		::System::String* _SURFACE_TYPE_TRANSPARENT; // 0x260
		::System::String* _ALPHAPREMULTIPLY_ON; // 0x268
		::System::String* _ALPHAMODULATE_ON; // 0x270
		::System::String* _NORMALMAP; // 0x278
		::System::String* EDITOR_VISUALIZATION; // 0x280
		::System::String* UseDrawProcedural; // 0x288

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERKEYWORDSTRINGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

