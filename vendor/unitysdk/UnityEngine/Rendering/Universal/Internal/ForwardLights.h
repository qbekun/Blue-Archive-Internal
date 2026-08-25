#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class MixedLightingSetup; }
namespace Unity::Mathematics { class int2; }
namespace Unity::Jobs { class JobHandle; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Rendering::Universal { class LightCookieManager; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class LightData&; }
namespace UnityEngine::Rendering { class CullingResults; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0B4E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0B4FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_PROCESSLIGHTS_OFFSET UNITYSDK_OFFSET(0xA0B5510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0B7A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA0B8290)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_INITIALIZELIGHTCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA0B82E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPSHADERLIGHTCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA0B8250)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPMAINLIGHTCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA0B8520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPADDITIONALLIGHTCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA0B8BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPPEROBJECTLIGHTINDICES_OFFSET UNITYSDK_OFFSET(0xA0B9200)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0B93F0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ForwardLights_TypeDefinitionIndex = 32863;

	class ForwardLights : public Il2CppObject
	{
	public:
		::UnityEngine::Vector4* MxCharacterLightColorOverride; // 0x0
		::System::Int32 m_AdditionalLightsBufferId; // 0x10
		::System::Int32 m_AdditionalLightsIndicesId; // 0x14
		::System::String* k_SetupLightConstants; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x10
		::UnityEngine::Rendering::Universal::MixedLightingSetup* m_MixedLightingSetup; // 0x18
		::Il2CppArray<::System::Object*>* m_AdditionalLightPositions; // 0x20
		::Il2CppArray<::System::Object*>* m_AdditionalLightColors; // 0x28
		::Il2CppArray<::System::Object*>* m_AdditionalLightAttenuations; // 0x30
		::Il2CppArray<::System::Object*>* m_AdditionalLightSpotDirections; // 0x38
		::Il2CppArray<::System::Object*>* m_AdditionalLightOcclusionProbeChannels; // 0x40
		::Il2CppArray<::System::Object*>* m_AdditionalLightsLayerMasks; // 0x48
		::System::Boolean m_UseStructuredBuffer; // 0x50
		::System::Boolean m_UseClusteredRendering; // 0x51
		::System::Int32 m_DirectionalLightCount; // 0x54
		::System::Int32 m_ActualTileWidth; // 0x58
		::Unity::Mathematics::int2* m_TileResolution; // 0x5C
		::System::Int32 m_RequestedTileWidth; // 0x64
		::System::Single m_ZBinFactor; // 0x68
		::System::Int32 m_ZBinOffset; // 0x6C
		::Unity::Jobs::JobHandle* m_CullingHandle; // 0x70
		Il2CppObject* m_ZBins; // 0x80
		Il2CppObject* m_TileLightMasks; // 0x90
		::UnityEngine::ComputeBuffer* m_ZBinBuffer; // 0xA0
		::UnityEngine::ComputeBuffer* m_TileBuffer; // 0xA8
		::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager; // 0xB0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(InitParams* arg)
		{
			((::System::Void(*)(InitParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessLights(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_PROCESSLIGHTS_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void InitializeLightConstants(Il2CppObject* arg, ::System::Int32 arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, uint32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_INITIALIZELIGHTCONSTANTS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetupShaderLightConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPSHADERLIGHTCONSTANTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::LightData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::LightData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPMAINLIGHTCONSTANTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupAdditionalLightConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPADDITIONALLIGHTCONSTANTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 SetupPerObjectLightIndices(::UnityEngine::Rendering::CullingResults* arg, ::UnityEngine::Rendering::Universal::LightData&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::CullingResults*, ::UnityEngine::Rendering::Universal::LightData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPPEROBJECTLIGHTINDICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

