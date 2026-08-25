#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class Renderer2DData; }
namespace UnityEngine::Rendering::Universal { class IRenderPass2D; }
namespace UnityEngine::Rendering::Universal { class RenderingData; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class Light2D; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering::Universal { class ShadowCaster2D; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GET_MAXTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0xA026060)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_SET_MAXTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0xA0260B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_INITIALIZEBUDGET_OFFSET UNITYSDK_OFFSET(0xA026100)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_CREATEMATERIALS_OFFSET UNITYSDK_OFFSET(0xA026420)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETPROJECTEDSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA0267E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETSTENCILONLYSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA026900)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETSPRITESELFSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA026A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETSPRITEUNSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA026B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETGEOMETRYUNSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA026C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_CREATESHADOWRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA026D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_PRERENDERSHADOWS_OFFSET UNITYSDK_OFFSET(0xA0270A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_SETGLOBALSHADOWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA028400)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_DISABLEGLOBALSHADOWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA028590)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_CREATESHADOWRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA026E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_RELEASESHADOWRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA028640)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_SETSHADOWPROJECTIONGLOBALS_OFFSET UNITYSDK_OFFSET(0xA028710)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_RENDERSHADOWS_OFFSET UNITYSDK_OFFSET(0xA0274D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA028880)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowRendering_TypeDefinitionIndex = 32499;

	class ShadowRendering : public Il2CppObject
	{
	public:
		::System::Int32 k_LightPosID; // 0x0
		::System::Int32 k_SelfShadowingID; // 0x4
		::System::Int32 k_ShadowStencilGroupID; // 0x8
		::System::Int32 k_ShadowIntensityID; // 0xC
		::System::Int32 k_ShadowVolumeIntensityID; // 0x10
		::System::Int32 k_ShadowRadiusID; // 0x14
		::System::Int32 k_ShadowColorMaskID; // 0x18
		::System::Int32 k_ShadowModelMatrixID; // 0x1C
		::System::Int32 k_ShadowModelInvMatrixID; // 0x20
		::System::Int32 k_ShadowModelScaleID; // 0x24
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadows; // 0x28
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadowsA; // 0x30
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadowsR; // 0x38
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadowsG; // 0x40
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadowsB; // 0x48
		::Il2CppArray<::System::Object*>* m_RenderTargets; // 0x50
		::Il2CppArray<::System::Object*>* m_LightInputTextures; // 0x58
		::Il2CppArray<::System::Object*>* k_ColorLookup; // 0x60
		::Il2CppArray<::System::Object*>* m_ProfilingSamplerShadowColorsLookup; // 0x68
		::System::UInt32 _maxTextureCount_k__BackingField; // 0x70

		::System::UInt32 get_maxTextureCount()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GET_MAXTEXTURECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_maxTextureCount(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_SET_MAXTEXTURECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeBudget(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_INITIALIZEBUDGET_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateMaterials(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_CREATEMATERIALS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Material* GetProjectedShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::Renderer2DData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETPROJECTEDSHADOWMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Material* GetStencilOnlyShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::Renderer2DData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETSTENCILONLYSHADOWMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Material* GetSpriteSelfShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::Renderer2DData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETSPRITESELFSHADOWMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Material* GetSpriteUnshadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::Renderer2DData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETSPRITEUNSHADOWMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Material* GetGeometryUnshadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::Renderer2DData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_GETGEOMETRYUNSHADOWMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateShadowRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_CREATESHADOWRENDERTEXTURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean PrerenderShadows(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::Light2D* arg, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Rendering::Universal::Light2D*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_PRERENDERSHADOWS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalShadowTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::Light2D* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Light2D*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_SETGLOBALSHADOWTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DisableGlobalShadowTexture(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_DISABLEGLOBALSHADOWTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateShadowRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_CREATESHADOWRENDERTEXTURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReleaseShadowRenderTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_RELEASESHADOWRENDERTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetShadowProjectionGlobals(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::ShadowCaster2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ShadowCaster2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_SETSHADOWPROJECTIONGLOBALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RenderShadows(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::Light2D* arg, ::System::Single arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Rendering::Universal::Light2D*, ::System::Single, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_RENDERSHADOWS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWRENDERING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

