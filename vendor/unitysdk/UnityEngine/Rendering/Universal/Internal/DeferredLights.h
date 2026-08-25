#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class MixedLightingSetup; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering::Universal::Internal { class AdditionalLightsShadowCasterPass; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class LightCookieManager; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering::Universal::Internal { class DeferredTiler&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class StencilState; }
namespace UnityEngine::Rendering { class RenderStateBlock; }
namespace UnityEngine::Rendering::Universal { class LightData&; }
namespace UnityEngine { class LightType; }
namespace UnityEngine::Rendering::Universal::Internal { class BitArray&; }
namespace UnityEngine::Rendering { class VisibleLight; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERALBEDOINDEX_OFFSET UNITYSDK_OFFSET(0xA09D1F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERSPECULARMETALLICINDEX_OFFSET UNITYSDK_OFFSET(0xA09D200)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERNORMALSMOOTHNESSINDEX_OFFSET UNITYSDK_OFFSET(0xA09D210)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERLIGHTINGINDEX_OFFSET UNITYSDK_OFFSET(0xA09D220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERDEPTHINDEX_OFFSET UNITYSDK_OFFSET(0xA09D230)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERSHADOWMASK_OFFSET UNITYSDK_OFFSET(0xA09D240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERRENDERINGLAYERS_OFFSET UNITYSDK_OFFSET(0xA09D280)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERSLICECOUNT_OFFSET UNITYSDK_OFFSET(0xA09D390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GETGBUFFERFORMAT_OFFSET UNITYSDK_OFFSET(0xA09D440)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_USESHADOWMASK_OFFSET UNITYSDK_OFFSET(0xA09D270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_USERENDERINGLAYERS_OFFSET UNITYSDK_OFFSET(0xA09D320)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_USERENDERPASS_OFFSET UNITYSDK_OFFSET(0xA09D500)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_USERENDERPASS_OFFSET UNITYSDK_OFFSET(0xA09D510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_HASDEPTHPREPASS_OFFSET UNITYSDK_OFFSET(0xA09D520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_HASDEPTHPREPASS_OFFSET UNITYSDK_OFFSET(0xA09D530)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_HASNORMALPREPASS_OFFSET UNITYSDK_OFFSET(0xA09D540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_HASNORMALPREPASS_OFFSET UNITYSDK_OFFSET(0xA09D550)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_ISOVERLAY_OFFSET UNITYSDK_OFFSET(0xA09D560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_ISOVERLAY_OFFSET UNITYSDK_OFFSET(0xA09D570)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_ACCURATEGBUFFERNORMALS_OFFSET UNITYSDK_OFFSET(0xA09D580)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_ACCURATEGBUFFERNORMALS_OFFSET UNITYSDK_OFFSET(0xA09D590)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_TILEDDEFERREDSHADING_OFFSET UNITYSDK_OFFSET(0xA09D610)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_TILEDDEFERREDSHADING_OFFSET UNITYSDK_OFFSET(0xA09D620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_MIXEDLIGHTINGSETUP_OFFSET UNITYSDK_OFFSET(0xA09D630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_MIXEDLIGHTINGSETUP_OFFSET UNITYSDK_OFFSET(0xA09D640)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_USEJOBSYSTEM_OFFSET UNITYSDK_OFFSET(0xA09D650)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_USEJOBSYSTEM_OFFSET UNITYSDK_OFFSET(0xA09D660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_RENDERWIDTH_OFFSET UNITYSDK_OFFSET(0xA09D670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_RENDERWIDTH_OFFSET UNITYSDK_OFFSET(0xA09D680)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_RENDERHEIGHT_OFFSET UNITYSDK_OFFSET(0xA09D690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_RENDERHEIGHT_OFFSET UNITYSDK_OFFSET(0xA09D6A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA09D6B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_GBUFFERATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA09D6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEFERREDINPUTATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA09D6D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEFERREDINPUTATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA09D6E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEFERREDINPUTISTRANSIENT_OFFSET UNITYSDK_OFFSET(0xA09D6F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEFERREDINPUTISTRANSIENT_OFFSET UNITYSDK_OFFSET(0xA09D700)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHATTACHMENT_OFFSET UNITYSDK_OFFSET(0xA09D710)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHATTACHMENT_OFFSET UNITYSDK_OFFSET(0xA09D730)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHCOPYTEXTURE_OFFSET UNITYSDK_OFFSET(0xA09D750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHCOPYTEXTURE_OFFSET UNITYSDK_OFFSET(0xA09D780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHINFOTEXTURE_OFFSET UNITYSDK_OFFSET(0xA09D7A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHINFOTEXTURE_OFFSET UNITYSDK_OFFSET(0xA09D7D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_TILEDEPTHINFOTEXTURE_OFFSET UNITYSDK_OFFSET(0xA09D800)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_TILEDEPTHINFOTEXTURE_OFFSET UNITYSDK_OFFSET(0xA09D830)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERATTACHMENTIDENTIFIERS_OFFSET UNITYSDK_OFFSET(0xA09D860)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_GBUFFERATTACHMENTIDENTIFIERS_OFFSET UNITYSDK_OFFSET(0xA09D870)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERFORMATS_OFFSET UNITYSDK_OFFSET(0xA09D890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_GBUFFERFORMATS_OFFSET UNITYSDK_OFFSET(0xA09D8A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHATTACHMENTIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA09D8C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHATTACHMENTIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA09D8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHCOPYTEXTUREIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA09D920)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHCOPYTEXTUREIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA09D950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHINFOTEXTUREIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA09D980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHINFOTEXTUREIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA09D9B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_TILEDEPTHINFOTEXTUREIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA09D9E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_TILEDEPTHINFOTEXTUREIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA09DA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA09DA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GETTILER_OFFSET UNITYSDK_OFFSET(0xA09EB00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0xA09EB40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RESOLVEMIXEDLIGHTINGMODE_OFFSET UNITYSDK_OFFSET(0xA0A0CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_DISABLEFRAMEBUFFERFETCHINPUT_OFFSET UNITYSDK_OFFSET(0xA0A1080)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CREATEGBUFFERATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA0A0EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_ISRUNTIMESUPPORTEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xA0A1090)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0A11D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0A1F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_OVERWRITESTENCIL_OFFSET UNITYSDK_OFFSET(0xA0A20E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_OVERWRITESTENCIL_OFFSET UNITYSDK_OFFSET(0xA0A22A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_HASTILELIGHTS_OFFSET UNITYSDK_OFFSET(0xA0A25E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_HASTILEDEPTHRANGEEXTRAPASS_OFFSET UNITYSDK_OFFSET(0xA0A25F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_EXECUTETILEDEPTHINFOPASS_OFFSET UNITYSDK_OFFSET(0xA0A2680)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_EXECUTEDOWNSAMPLEBITMASKPASS_OFFSET UNITYSDK_OFFSET(0xA0A3740)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CLEARSTENCILPARTIAL_OFFSET UNITYSDK_OFFSET(0xA0A3E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_EXECUTEDEFERREDPASS_OFFSET UNITYSDK_OFFSET(0xA0A41F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUPSHADERLIGHTCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA0A0BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUPMAINLIGHTCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA0A6F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUPMATRIXCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA0A4620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SORTLIGHTS_OFFSET UNITYSDK_OFFSET(0xA0A0C00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CHECKHASTILELIGHTS_OFFSET UNITYSDK_OFFSET(0xA0A1D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_PRECOMPUTELIGHTS_OFFSET UNITYSDK_OFFSET(0xA09FE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERTILELIGHTS_OFFSET UNITYSDK_OFFSET(0xA0A5300)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_HASSTENCILLIGHTSOFTYPE_OFFSET UNITYSDK_OFFSET(0xA0A4D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSTENCILLIGHTS_OFFSET UNITYSDK_OFFSET(0xA0A4EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSTENCILDIRECTIONALLIGHTS_OFFSET UNITYSDK_OFFSET(0xA0A7780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSTENCILPOINTLIGHTS_OFFSET UNITYSDK_OFFSET(0xA0A8060)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSTENCILSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0xA0A8AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSSAOBEFORESHADING_OFFSET UNITYSDK_OFFSET(0xA0A4D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERFOG_OFFSET UNITYSDK_OFFSET(0xA0A6CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_TRIMLIGHTS_OFFSET UNITYSDK_OFFSET(0xA0A7170)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_STOREPUNCTUALLIGHTDATA_OFFSET UNITYSDK_OFFSET(0xA0A7270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_STORETILEDATA_OFFSET UNITYSDK_OFFSET(0xA0A7230)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_ISTILELIGHT_OFFSET UNITYSDK_OFFSET(0xA0AA370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_INITTILEDEFERREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA09E380)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_INITSTENCILDEFERREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA09E620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CREATESPHEREMESH_OFFSET UNITYSDK_OFFSET(0xA0A9610)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CREATEHEMISPHEREMESH_OFFSET UNITYSDK_OFFSET(0xA0A9C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CREATEFULLSCREENMESH_OFFSET UNITYSDK_OFFSET(0xA0A40A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_ALIGN_OFFSET UNITYSDK_OFFSET(0xA0A7200)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_PACKTILEID_OFFSET UNITYSDK_OFFSET(0xA0A7220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_FLOATTOUINT_OFFSET UNITYSDK_OFFSET(0xA0AA2D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_HALF2TOUINT_OFFSET UNITYSDK_OFFSET(0xA0AA470)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0AA4B0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DeferredLights_TypeDefinitionIndex = 32852;

	class DeferredLights : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* k_GBufferNames; // 0x0
		::Il2CppArray<::System::Object*>* k_TileDeferredPassNames; // 0x8
		::Il2CppArray<::System::Object*>* k_StencilDeferredPassNames; // 0x10
		::System::UInt16 k_InvalidLightOffset; // 0x18
		::System::String* k_SetupLights; // 0x20
		::System::String* k_DeferredPass; // 0x28
		::System::String* k_TileDepthInfo; // 0x30
		::System::String* k_DeferredTiledPass; // 0x38
		::System::String* k_DeferredStencilPass; // 0x40
		::System::String* k_DeferredFogPass; // 0x48
		::System::String* k_ClearStencilPartial; // 0x50
		::System::String* k_SetupLightConstants; // 0x58
		::System::Single kStencilShapeGuard; // 0x60
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupLights; // 0x68
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDeferredPass; // 0x70
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingTileDepthInfo; // 0x78
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupLightConstants; // 0x80
		::System::Boolean _UseRenderPass_k__BackingField; // 0x10
		::System::Boolean _HasDepthPrepass_k__BackingField; // 0x11
		::System::Boolean _HasNormalPrepass_k__BackingField; // 0x12
		::System::Boolean _IsOverlay_k__BackingField; // 0x13
		::System::Boolean m_AccurateGbufferNormals; // 0x14
		::System::Boolean _TiledDeferredShading_k__BackingField; // 0x15
		::UnityEngine::Rendering::Universal::MixedLightingSetup* _MixedLightingSetup_k__BackingField; // 0x18
		::System::Boolean _UseJobSystem_k__BackingField; // 0x1C
		::System::Int32 _RenderWidth_k__BackingField; // 0x20
		::System::Int32 _RenderHeight_k__BackingField; // 0x24
		::Il2CppArray<::System::Object*>* _GbufferAttachments_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _DeferredInputAttachments_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _DeferredInputIsTransient_k__BackingField; // 0x38
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _DepthAttachment_k__BackingField; // 0x40
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _DepthCopyTexture_k__BackingField; // 0x70
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _DepthInfoTexture_k__BackingField; // 0xA0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _TileDepthInfoTexture_k__BackingField; // 0xD0
		::Il2CppArray<::System::Object*>* _GbufferAttachmentIdentifiers_k__BackingField; // 0x100
		::Il2CppArray<::System::Object*>* _GbufferFormats_k__BackingField; // 0x108
		::UnityEngine::Rendering::RenderTargetIdentifier* _DepthAttachmentIdentifier_k__BackingField; // 0x110
		::UnityEngine::Rendering::RenderTargetIdentifier* _DepthCopyTextureIdentifier_k__BackingField; // 0x138
		::UnityEngine::Rendering::RenderTargetIdentifier* _DepthInfoTextureIdentifier_k__BackingField; // 0x160
		::UnityEngine::Rendering::RenderTargetIdentifier* _TileDepthInfoTextureIdentifier_k__BackingField; // 0x188
		::System::Int32 m_CachedRenderWidth; // 0x1B0
		::System::Int32 m_CachedRenderHeight; // 0x1B4
		::UnityEngine::Matrix4x4* m_CachedProjectionMatrix; // 0x1B8
		::Il2CppArray<::System::Object*>* m_Tilers; // 0x1F8
		::Il2CppArray<::System::Object*>* m_TileDataCapacities; // 0x200
		::System::Boolean m_HasTileVisLights; // 0x208
		Il2CppObject* m_stencilVisLights; // 0x210
		Il2CppObject* m_stencilVisLightOffsets; // 0x220
		::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* m_AdditionalLightsShadowCasterPass; // 0x230
		::UnityEngine::Mesh* m_SphereMesh; // 0x238
		::UnityEngine::Mesh* m_HemisphereMesh; // 0x240
		::UnityEngine::Mesh* m_FullscreenMesh; // 0x248
		::System::Int32 m_MaxDepthRangePerBatch; // 0x250
		::System::Int32 m_MaxTilesPerBatch; // 0x254
		::System::Int32 m_MaxPunctualLightPerBatch; // 0x258
		::System::Int32 m_MaxRelLightIndicesPerBatch; // 0x25C
		::UnityEngine::Material* m_TileDepthInfoMaterial; // 0x260
		::UnityEngine::Material* m_TileDeferredMaterial; // 0x268
		::UnityEngine::Material* m_StencilDeferredMaterial; // 0x270
		::Il2CppArray<::System::Object*>* m_StencilDeferredPasses; // 0x278
		::Il2CppArray<::System::Object*>* m_TileDeferredPasses; // 0x280
		::Il2CppArray<::System::Object*>* m_ScreenToWorld; // 0x288
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredTiledPass; // 0x290
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredStencilPass; // 0x298
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredFogPass; // 0x2A0
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerClearStencilPartialPass; // 0x2A8
		::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager; // 0x2B0

		::System::Int32 get_GBufferAlbedoIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERALBEDOINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_GBufferSpecularMetallicIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERSPECULARMETALLICINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_GBufferNormalSmoothnessIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERNORMALSMOOTHNESSINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_GBufferLightingIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERLIGHTINGINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_GbufferDepthIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERDEPTHINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_GBufferShadowMask()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERSHADOWMASK_OFFSET))(nullptr);
		}

		::System::Int32 get_GBufferRenderingLayers()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERRENDERINGLAYERS_OFFSET))(nullptr);
		}

		::System::Int32 get_GBufferSliceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERSLICECOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetGBufferFormat(::System::Int32 arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GETGBUFFERFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseShadowMask()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_USESHADOWMASK_OFFSET))(nullptr);
		}

		::System::Boolean get_UseRenderingLayers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_USERENDERINGLAYERS_OFFSET))(nullptr);
		}

		::System::Boolean get_UseRenderPass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_USERENDERPASS_OFFSET))(nullptr);
		}

		::System::Void set_UseRenderPass(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_USERENDERPASS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasDepthPrepass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_HASDEPTHPREPASS_OFFSET))(nullptr);
		}

		::System::Void set_HasDepthPrepass(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_HASDEPTHPREPASS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasNormalPrepass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_HASNORMALPREPASS_OFFSET))(nullptr);
		}

		::System::Void set_HasNormalPrepass(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_HASNORMALPREPASS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOverlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_ISOVERLAY_OFFSET))(nullptr);
		}

		::System::Void set_IsOverlay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_ISOVERLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AccurateGbufferNormals()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_ACCURATEGBUFFERNORMALS_OFFSET))(nullptr);
		}

		::System::Void set_AccurateGbufferNormals(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_ACCURATEGBUFFERNORMALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TiledDeferredShading()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_TILEDDEFERREDSHADING_OFFSET))(nullptr);
		}

		::System::Void set_TiledDeferredShading(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_TILEDDEFERREDSHADING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::MixedLightingSetup* get_MixedLightingSetup()
		{
			return (return (::UnityEngine::Rendering::Universal::MixedLightingSetup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_MIXEDLIGHTINGSETUP_OFFSET))(nullptr);
		}

		::System::Void set_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::MixedLightingSetup*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_MIXEDLIGHTINGSETUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseJobSystem()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_USEJOBSYSTEM_OFFSET))(nullptr);
		}

		::System::Void set_UseJobSystem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_USEJOBSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RenderWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_RENDERWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_RenderWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_RENDERWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RenderHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_RENDERHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_RenderHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_RENDERHEIGHT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_GbufferAttachments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERATTACHMENTS_OFFSET))(nullptr);
		}

		::System::Void set_GbufferAttachments(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_GBUFFERATTACHMENTS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DeferredInputAttachments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEFERREDINPUTATTACHMENTS_OFFSET))(nullptr);
		}

		::System::Void set_DeferredInputAttachments(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEFERREDINPUTATTACHMENTS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DeferredInputIsTransient()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEFERREDINPUTISTRANSIENT_OFFSET))(nullptr);
		}

		::System::Void set_DeferredInputIsTransient(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEFERREDINPUTISTRANSIENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_DepthAttachment()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHATTACHMENT_OFFSET))(nullptr);
		}

		::System::Void set_DepthAttachment(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHATTACHMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_DepthCopyTexture()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHCOPYTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_DepthCopyTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHCOPYTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_DepthInfoTexture()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHINFOTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_DepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHINFOTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_TileDepthInfoTexture()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_TILEDEPTHINFOTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_TileDepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_TILEDEPTHINFOTEXTURE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_GbufferAttachmentIdentifiers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERATTACHMENTIDENTIFIERS_OFFSET))(nullptr);
		}

		::System::Void set_GbufferAttachmentIdentifiers(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_GBUFFERATTACHMENTIDENTIFIERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_GbufferFormats()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_GBUFFERFORMATS_OFFSET))(nullptr);
		}

		::System::Void set_GbufferFormats(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_GBUFFERFORMATS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_DepthAttachmentIdentifier()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHATTACHMENTIDENTIFIER_OFFSET))(nullptr);
		}

		::System::Void set_DepthAttachmentIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHATTACHMENTIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_DepthCopyTextureIdentifier()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHCOPYTEXTUREIDENTIFIER_OFFSET))(nullptr);
		}

		::System::Void set_DepthCopyTextureIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHCOPYTEXTUREIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_DepthInfoTextureIdentifier()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_DEPTHINFOTEXTUREIDENTIFIER_OFFSET))(nullptr);
		}

		::System::Void set_DepthInfoTextureIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_DEPTHINFOTEXTUREIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_TileDepthInfoTextureIdentifier()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GET_TILEDEPTHINFOTEXTUREIDENTIFIER_OFFSET))(nullptr);
		}

		::System::Void set_TileDepthInfoTextureIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SET_TILEDEPTHINFOTEXTUREIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(InitParams* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(InitParams*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::DeferredTiler&* GetTiler(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::DeferredTiler&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_GETTILER_OFFSET))(arg, nullptr);
		}

		::System::Void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUPLIGHTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResolveMixedLightingMode(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RESOLVEMIXEDLIGHTINGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void DisableFramebufferFetchInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_DISABLEFRAMEBUFFERFETCHINPUT_OFFSET))(nullptr);
		}

		::System::Void CreateGbufferAttachments()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CREATEGBUFFERATTACHMENTS_OFFSET))(nullptr);
		}

		::System::Boolean IsRuntimeSupportedThisFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_ISRUNTIMESUPPORTEDTHISFRAME_OFFSET))(nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUP_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::StencilState* OverwriteStencil(::UnityEngine::Rendering::StencilState* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::StencilState*(*)(::UnityEngine::Rendering::StencilState*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_OVERWRITESTENCIL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderStateBlock* OverwriteStencil(::UnityEngine::Rendering::RenderStateBlock* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::RenderStateBlock*(*)(::UnityEngine::Rendering::RenderStateBlock*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_OVERWRITESTENCIL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasTileLights()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_HASTILELIGHTS_OFFSET))(nullptr);
		}

		::System::Boolean HasTileDepthRangeExtraPass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_HASTILEDEPTHRANGEEXTRAPASS_OFFSET))(nullptr);
		}

		::System::Void ExecuteTileDepthInfoPass(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_EXECUTETILEDEPTHINFOPASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteDownsampleBitmaskPass(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_EXECUTEDOWNSAMPLEBITMASKPASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearStencilPartial(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CLEARSTENCILPARTIAL_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDeferredPass(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_EXECUTEDEFERREDPASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupShaderLightConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUPSHADERLIGHTCONSTANTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::LightData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::LightData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUPMAINLIGHTCONSTANTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupMatrixConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SETUPMATRIXCONSTANTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SortLights(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_SORTLIGHTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckHasTileLights(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CHECKHASTILELIGHTS_OFFSET))(arg, nullptr);
		}

		::System::Void PrecomputeLights(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, ::System::Boolean arg, ::UnityEngine::Matrix4x4* arg, ::System::Boolean arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::System::Boolean, ::UnityEngine::Matrix4x4*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_PRECOMPUTELIGHTS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RenderTileLights(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERTILELIGHTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasStencilLightsOfType(::UnityEngine::LightType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::LightType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_HASSTENCILLIGHTSOFTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RenderStencilLights(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSTENCILLIGHTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RenderStencilDirectionalLights(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSTENCILDIRECTIONALLIGHTS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RenderStencilPointLights(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSTENCILPOINTLIGHTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RenderStencilSpotLights(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSTENCILSPOTLIGHTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RenderSSAOBeforeShading(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERSSAOBEFORESHADING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RenderFog(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_RENDERFOG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 TrimLights(Il2CppObject&* arg, Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::Internal::BitArray&* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, Il2CppObject&*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::Universal::Internal::BitArray&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_TRIMLIGHTS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StorePunctualLightData(Il2CppObject&* arg, ::System::Int32 arg, Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_STOREPUNCTUALLIGHTDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StoreTileData(Il2CppObject&* arg, ::System::Int32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt16 arg, ::System::UInt16 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt16, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_STORETILEDATA_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsTileLight(::UnityEngine::Rendering::VisibleLight* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::VisibleLight*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_ISTILELIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void InitTileDeferredMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_INITTILEDEFERREDMATERIAL_OFFSET))(nullptr);
		}

		::System::Void InitStencilDeferredMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_INITSTENCILDEFERREDMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* CreateSphereMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CREATESPHEREMESH_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* CreateHemisphereMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CREATEHEMISPHEREMESH_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* CreateFullscreenMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_CREATEFULLSCREENMESH_OFFSET))(nullptr);
		}

		::System::Int32 Align(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_ALIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 PackTileID(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_PACKTILEID_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 FloatToUInt(::System::Single arg)
		{
			return (return (::System::UInt32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_FLOATTOUINT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 Half2ToUInt(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::UInt32(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_HALF2TOUINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDLIGHTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

