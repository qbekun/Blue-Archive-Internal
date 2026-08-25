#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class CullingResults&; }
namespace UnityEngine::Rendering::Universal { class ShadowData&; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine::Rendering::Universal { class ShadowSliceData&; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine::Rendering { class ShadowSplitData&; }
namespace UnityEngine { class CubemapFace; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ScriptableRenderContext&; }
namespace UnityEngine::Rendering { class ShadowDrawingSettings&; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::Rendering { class VisibleLight&; }
namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA072FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_EXTRACTDIRECTIONALLIGHTMATRIX_OFFSET UNITYSDK_OFFSET(0xA073060)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_EXTRACTDIRECTIONALLIGHTMATRIX_OFFSET UNITYSDK_OFFSET(0xA0731A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_EXTRACTSPOTLIGHTMATRIX_OFFSET UNITYSDK_OFFSET(0xA073760)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_EXTRACTPOINTLIGHTMATRIX_OFFSET UNITYSDK_OFFSET(0xA0738A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_RENDERSHADOWSLICE_OFFSET UNITYSDK_OFFSET(0xA073A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_RENDERSHADOWSLICE_OFFSET UNITYSDK_OFFSET(0xA073CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETMAXTILERESOLUTIONINATLAS_OFFSET UNITYSDK_OFFSET(0xA073D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_APPLYSLICETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA073610)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETSHADOWBIAS_OFFSET UNITYSDK_OFFSET(0xA073DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETSCALEANDBIASFORLINEARDISTANCEFADE_OFFSET UNITYSDK_OFFSET(0xA0740E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_SETUPSHADOWCASTERCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA074150)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETTEMPORARYSHADOWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA074320)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETSHADOWTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA073410)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowUtils_TypeDefinitionIndex = 32753;

	class ShadowUtils : public Il2CppObject
	{
	public:
		::System::Boolean m_ForceShadowPointSampling; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean ExtractDirectionalLightMatrix(::UnityEngine::Rendering::CullingResults&* arg, ::UnityEngine::Rendering::Universal::ShadowData&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Rendering::Universal::ShadowSliceData&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CullingResults&*, ::UnityEngine::Rendering::Universal::ShadowData&*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Vector4&*, ::UnityEngine::Rendering::Universal::ShadowSliceData&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_EXTRACTDIRECTIONALLIGHTMATRIX_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ExtractDirectionalLightMatrix(::UnityEngine::Rendering::CullingResults&* arg, ::UnityEngine::Rendering::Universal::ShadowData&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Rendering::Universal::ShadowSliceData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CullingResults&*, ::UnityEngine::Rendering::Universal::ShadowData&*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Vector4&*, ::UnityEngine::Rendering::Universal::ShadowSliceData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_EXTRACTDIRECTIONALLIGHTMATRIX_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ExtractSpotLightMatrix(::UnityEngine::Rendering::CullingResults&* arg, ::UnityEngine::Rendering::Universal::ShadowData&* arg, ::System::Int32 arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rendering::ShadowSplitData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CullingResults&*, ::UnityEngine::Rendering::Universal::ShadowData&*, ::System::Int32, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rendering::ShadowSplitData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_EXTRACTSPOTLIGHTMATRIX_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ExtractPointLightMatrix(::UnityEngine::Rendering::CullingResults&* arg, ::UnityEngine::Rendering::Universal::ShadowData&* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Single arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rendering::ShadowSplitData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CullingResults&*, ::UnityEngine::Rendering::Universal::ShadowData&*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Single, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rendering::ShadowSplitData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_EXTRACTPOINTLIGHTMATRIX_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Rendering::Universal::ShadowSliceData&* arg, ::UnityEngine::Rendering::ShadowDrawingSettings&* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Rendering::Universal::ShadowSliceData&*, ::UnityEngine::Rendering::ShadowDrawingSettings&*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_RENDERSHADOWSLICE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Rendering::Universal::ShadowSliceData&* arg, ::UnityEngine::Rendering::ShadowDrawingSettings&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Rendering::Universal::ShadowSliceData&*, ::UnityEngine::Rendering::ShadowDrawingSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_RENDERSHADOWSLICE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetMaxTileResolutionInAtlas(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETMAXTILERESOLUTIONINATLAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplySliceTransform(::UnityEngine::Rendering::Universal::ShadowSliceData&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ShadowSliceData&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_APPLYSLICETRANSFORM_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector4* GetShadowBias(::UnityEngine::Rendering::VisibleLight&* arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::ShadowData&* arg, ::UnityEngine::Matrix4x4* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Rendering::VisibleLight&*, ::System::Int32, ::UnityEngine::Rendering::Universal::ShadowData&*, ::UnityEngine::Matrix4x4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETSHADOWBIAS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetScaleAndBiasForLinearDistanceFade(::System::Single arg, ::System::Single arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETSCALEANDBIASFORLINEARDISTANCEFADE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetupShadowCasterConstantBuffer(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::VisibleLight&* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::VisibleLight&*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_SETUPSHADOWCASTERCONSTANTBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporaryShadowTexture(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETTEMPORARYSHADOWTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetShadowTransform(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILS_GETSHADOWTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

	};
}

