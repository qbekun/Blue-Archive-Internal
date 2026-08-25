#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering::Universal { class LightData&; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class ShadowData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext&; }
namespace UnityEngine::Rendering { class CullingResults&; }
namespace UnityEngine { class LightType&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_CALCGUARDANGLE_OFFSET UNITYSDK_OFFSET(0xA0AF050)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_ESTIMATESCALEFACTORNEEDEDTOFITALLSHADOWSINATLAS_OFFSET UNITYSDK_OFFSET(0xA0AF0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_ATLASLAYOUT_OFFSET UNITYSDK_OFFSET(0xA0AF1F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_GET_MAX_PUNCTUAL_LIGHT_SHADOW_SLICES_IN_UBO_OFFSET UNITYSDK_OFFSET(0xA0AF930)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xA0AF9D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_MINIMALPUNCTUALLIGHTSHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0xA0AF920)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_ISVALIDSHADOWCASTINGLIGHT_OFFSET UNITYSDK_OFFSET(0xA0AFAB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_COMPUTESHADOWREQUESTHASH_OFFSET UNITYSDK_OFFSET(0xA0AFC60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_RESOLUTIONLOG2FORHASH_OFFSET UNITYSDK_OFFSET(0xA0B0120)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_CLEAR_OFFSET UNITYSDK_OFFSET(0xA0B0170)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0B01F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_SETUPFOREMPTYRENDERING_OFFSET UNITYSDK_OFFSET(0xA0B1140)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0xA0B1270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0B1580)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_GETSHADOWLIGHTINDEXFROMLIGHTINDEX_OFFSET UNITYSDK_OFFSET(0xA0B1660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0B1690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_SETUPADDITIONALLIGHTSSHADOWRECEIVERCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA0B16F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_SETEMPTYADDITIONALSHADOWMAPATLAS_OFFSET UNITYSDK_OFFSET(0xA0B0240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_RENDERADDITIONALSHADOWMAPATLAS_OFFSET UNITYSDK_OFFSET(0xA0B04E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_GETPUNCTUALLIGHTSHADOWSLICESCOUNT_OFFSET UNITYSDK_OFFSET(0xA0B1B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_GETPOINTLIGHTSHADOWFRUSTUMFOVBIASINDEGREES_OFFSET UNITYSDK_OFFSET(0xA0B1B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0B1E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0B4670)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int AdditionalLightsShadowCasterPass_TypeDefinitionIndex = 32860;

	class AdditionalLightsShadowCasterPass : public Il2CppObject
	{
	public:
		::System::Int32 m_AdditionalShadowsBufferId; // 0x0
		::System::Int32 m_AdditionalShadowsIndicesId; // 0x4
		::UnityEngine::Vector4* c_DefaultShadowParams; // 0x8
		::System::Int32 m_AdditionalLightsWorldToShadow_SSBO; // 0x18
		::System::Int32 m_AdditionalShadowParams_SSBO; // 0x1C
		::System::Boolean m_UseStructuredBuffer; // 0xD8
		::System::Int32 k_ShadowmapBufferBits; // 0x0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_AdditionalLightsShadowmap; // 0xE0
		::UnityEngine::RenderTexture* m_AdditionalLightsShadowmapTexture; // 0x110
		::System::Single m_MaxShadowDistanceSq; // 0x118
		::System::Single m_CascadeBorder; // 0x11C
		::Il2CppArray<::System::Object*>* m_AdditionalLightsShadowSlices; // 0x120
		::Il2CppArray<::System::Object*>* m_VisibleLightIndexToAdditionalLightIndex; // 0x128
		::Il2CppArray<::System::Object*>* m_AdditionalLightIndexToVisibleLightIndex; // 0x130
		Il2CppObject* m_ShadowSliceToAdditionalLightIndex; // 0x138
		Il2CppObject* m_GlobalShadowSliceIndexToPerLightShadowSliceIndex; // 0x140
		::Il2CppArray<::System::Object*>* m_AdditionalLightIndexToShadowParams; // 0x148
		::Il2CppArray<::System::Object*>* m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix; // 0x150
		Il2CppObject* m_ShadowResolutionRequests; // 0x158
		::Il2CppArray<::System::Object*>* m_VisibleLightIndexToCameraSquareDistance; // 0x160
		::Il2CppArray<::System::Object*>* m_SortedShadowResolutionRequests; // 0x168
		::Il2CppArray<::System::Object*>* m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex; // 0x170
		Il2CppObject* m_UnusedAtlasSquareAreas; // 0x178
		::System::Boolean m_CreateEmptyShadowmap; // 0x180
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupSampler; // 0x188
		::System::Single LightTypeIdentifierInShadowParams_Spot; // 0x0
		::System::Single LightTypeIdentifierInShadowParams_Point; // 0x0
		::System::Int32 kMinimumPunctualLightHardShadowResolution; // 0x0
		::System::Int32 kMinimumPunctualLightSoftShadowResolution; // 0x0
		::System::Boolean m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall; // 0x20
		::System::Boolean m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall; // 0x21
		::System::Boolean m_IssuedMessageAboutShadowSlicesTooMany; // 0x190
		::System::Boolean m_IssuedMessageAboutShadowMapsRescale; // 0x191
		::System::Boolean m_IssuedMessageAboutShadowMapsTooBig; // 0x192
		::System::Boolean m_IssuedMessageAboutRemovedShadowSlices; // 0x193
		Il2CppObject* m_ShadowRequestsHashes; // 0x198

		::System::Single CalcGuardAngle(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_CALCGUARDANGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 EstimateScaleFactorNeededToFitAllShadowsInAtlas(::System::Object[]&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object[]&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_ESTIMATESCALEFACTORNEEDEDTOFITALLSHADOWSINATLAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AtlasLayout(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_ATLASLAYOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_MAX_PUNCTUAL_LIGHT_SHADOW_SLICES_IN_UBO()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_GET_MAX_PUNCTUAL_LIGHT_SHADOW_SLICES_IN_UBO_OFFSET))(nullptr);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 MinimalPunctualLightShadowResolution(::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_MINIMALPUNCTUALLIGHTSHADOWRESOLUTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidShadowCastingLight(::UnityEngine::Rendering::Universal::LightData&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::LightData&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_ISVALIDSHADOWCASTINGLIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 ComputeShadowRequestHash(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			return (return (::System::UInt64(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_COMPUTESHADOWREQUESTHASH_OFFSET))(arg, nullptr);
		}

		::System::UInt64 ResolutionLog2ForHash(::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_RESOLUTIONLOG2FORHASH_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetupForEmptyRendering(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_SETUPFOREMPTYRENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void InsertionSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_INSERTIONSORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetShadowLightIndexFromLightIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_GETSHADOWLIGHTINDEXFROMLIGHTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetupAdditionalLightsShadowReceiverConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::ShadowData&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ShadowData&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_SETUPADDITIONALLIGHTSSHADOWRECEIVERCONSTANTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetEmptyAdditionalShadowmapAtlas(::UnityEngine::Rendering::ScriptableRenderContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_SETEMPTYADDITIONALSHADOWMAPATLAS_OFFSET))(arg, nullptr);
		}

		::System::Void RenderAdditionalShadowmapAtlas(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Rendering::CullingResults&* arg, ::UnityEngine::Rendering::Universal::LightData&* arg, ::UnityEngine::Rendering::Universal::ShadowData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Rendering::CullingResults&*, ::UnityEngine::Rendering::Universal::LightData&*, ::UnityEngine::Rendering::Universal::ShadowData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_RENDERADDITIONALSHADOWMAPATLAS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetPunctualLightShadowSlicesCount(::UnityEngine::LightType&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::LightType&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_GETPUNCTUALLIGHTSHADOWSLICESCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Single GetPointLightShadowFrustumFovBiasInDegrees(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_GETPOINTLIGHTSHADOWFRUSTUMFOVBIASINDEGREES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Setup(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ADDITIONALLIGHTSSHADOWCASTERPASS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

