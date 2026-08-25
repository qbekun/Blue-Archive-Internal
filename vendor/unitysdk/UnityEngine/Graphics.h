#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Rendering { class GraphicsTier; }
namespace UnityEngine::Rendering { class OpenGLESVersion; }
namespace UnityEngine { class RenderBuffer; }
namespace UnityEngine { class CubemapFace; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Internal_DrawTextureArguments&; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class ShadowCastingMode; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class LightProbeUsage; }
namespace UnityEngine { class LightProbeProxyVolume; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class RenderBuffer&; }
namespace UnityEngine { class Matrix4x4&; }

#define UNITYENGINE_GRAPHICS_INTERNAL_GETMAXDRAWMESHINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xA1F25C0)
#define UNITYENGINE_GRAPHICS_GET_ACTIVETIER_OFFSET UNITYSDK_OFFSET(0xA1F2600)
#define UNITYENGINE_GRAPHICS_SET_ACTIVETIER_OFFSET UNITYSDK_OFFSET(0xA1F2640)
#define UNITYENGINE_GRAPHICS_GETPRESERVEFRAMEBUFFERALPHA_OFFSET UNITYSDK_OFFSET(0xA1F2680)
#define UNITYENGINE_GRAPHICS_GET_PRESERVEFRAMEBUFFERALPHA_OFFSET UNITYSDK_OFFSET(0xA1F26C0)
#define UNITYENGINE_GRAPHICS_GETMINOPENGLESVERSION_OFFSET UNITYSDK_OFFSET(0xA1F2740)
#define UNITYENGINE_GRAPHICS_GET_MINOPENGLESVERSION_OFFSET UNITYSDK_OFFSET(0xA1F2780)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETNULLRT_OFFSET UNITYSDK_OFFSET(0xA1F2800)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_OFFSET UNITYSDK_OFFSET(0xA1F2840)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_OFFSET UNITYSDK_OFFSET(0xA1F2930)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_REGION_OFFSET UNITYSDK_OFFSET(0xA1F2980)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1F29D0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA1F2A10)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0xA1F2B00)
#define UNITYENGINE_GRAPHICS_INTERNAL_BLITMATERIAL5_OFFSET UNITYSDK_OFFSET(0xA1F2B50)
#define UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0xA1F2BA0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET UNITYSDK_OFFSET(0xA1F2BE0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET UNITYSDK_OFFSET(0xA1F2CF0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA1F2E20)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1F2E80)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1F2F20)
#define UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA1F2FC0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0xA1F3210)
#define UNITYENGINE_GRAPHICS_BLIT_OFFSET UNITYSDK_OFFSET(0xA1F3720)
#define UNITYENGINE_GRAPHICS_BLIT_OFFSET UNITYSDK_OFFSET(0xA1F37D0)
#define UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA1F38D0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0xA1F39C0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA1F3AA0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA1F3B50)
#define UNITYENGINE_GRAPHICS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1F3C10)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F28E0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F2AB0)

namespace UnityEngine
{
	inline static constexpr unsigned int Graphics_TypeDefinitionIndex = 30996;

	class Graphics : public Il2CppObject
	{
	public:
		::System::Int32 kMaxDrawMeshInstanceCount; // 0x0
		Il2CppObject* s_RenderInstancedDataLayouts; // 0x8

		::System::Int32 Internal_GetMaxDrawMeshInstanceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_GETMAXDRAWMESHINSTANCECOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::GraphicsTier* get_activeTier()
		{
			return (return (::UnityEngine::Rendering::GraphicsTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GET_ACTIVETIER_OFFSET))(nullptr);
		}

		::System::Void set_activeTier(::UnityEngine::Rendering::GraphicsTier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GraphicsTier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SET_ACTIVETIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetPreserveFramebufferAlpha()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETPRESERVEFRAMEBUFFERALPHA_OFFSET))(nullptr);
		}

		::System::Boolean get_preserveFramebufferAlpha()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GET_PRESERVEFRAMEBUFFERALPHA_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::OpenGLESVersion* GetMinOpenGLESVersion()
		{
			return (return (::UnityEngine::Rendering::OpenGLESVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETMINOPENGLESVERSION_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::OpenGLESVersion* get_minOpenGLESVersion()
		{
			return (return (::UnityEngine::Rendering::OpenGLESVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GET_MINOPENGLESVERSION_OFFSET))(nullptr);
		}

		::System::Void Internal_SetNullRT()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETNULLRT_OFFSET))(nullptr);
		}

		::System::Void Internal_SetRTSimple(::UnityEngine::RenderBuffer* arg, ::UnityEngine::RenderBuffer* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::RenderBuffer*, ::UnityEngine::RenderBuffer*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyTexture_Slice(::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyTexture_Region(::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_REGION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawTexture(::UnityEngine::Internal_DrawTextureArguments&* arg)
		{
			((::System::Void(*)(::UnityEngine::Internal_DrawTextureArguments&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_DrawMesh(::UnityEngine::Mesh* arg, ::System::Int32 arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Camera* arg, ::UnityEngine::MaterialPropertyBlock* arg, ::UnityEngine::Rendering::ShadowCastingMode* arg, ::System::Boolean arg, ::UnityEngine::Transform* arg, ::UnityEngine::Rendering::LightProbeUsage* arg, ::UnityEngine::LightProbeProxyVolume* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode*, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage*, ::UnityEngine::LightProbeProxyVolume*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawMeshInstanced(::UnityEngine::Mesh* arg, ::System::Int32 arg, ::UnityEngine::Material* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg, ::UnityEngine::Rendering::ShadowCastingMode* arg, ::System::Boolean arg, ::System::Int32 arg, ::UnityEngine::Camera* arg, ::UnityEngine::Rendering::LightProbeUsage* arg, ::UnityEngine::LightProbeProxyVolume* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode*, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage*, ::UnityEngine::LightProbeProxyVolume*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_BlitMaterial5(::UnityEngine::Texture* arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_BLITMATERIAL5_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderTargetImpl(::UnityEngine::RenderBuffer* arg, ::UnityEngine::RenderBuffer* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::RenderBuffer*, ::UnityEngine::RenderBuffer*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTargetImpl(::UnityEngine::RenderTexture* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::RenderTexture* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyTexture(::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyTexture(::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Camera* arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg, ::UnityEngine::Rendering::ShadowCastingMode* arg, ::System::Boolean arg, ::UnityEngine::Transform* arg, ::UnityEngine::Rendering::LightProbeUsage* arg, ::UnityEngine::LightProbeProxyVolume* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode*, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage*, ::UnityEngine::LightProbeProxyVolume*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawMeshInstanced(::UnityEngine::Mesh* arg, ::System::Int32 arg, ::UnityEngine::Material* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg, ::UnityEngine::Rendering::ShadowCastingMode* arg, ::System::Boolean arg, ::System::Int32 arg, ::UnityEngine::Camera* arg, ::UnityEngine::Rendering::LightProbeUsage* arg, ::UnityEngine::LightProbeProxyVolume* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode*, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage*, ::UnityEngine::LightProbeProxyVolume*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Texture* arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Texture* arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Camera* arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawMeshInstanced(::UnityEngine::Mesh* arg, ::System::Int32 arg, ::UnityEngine::Material* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg, ::UnityEngine::Rendering::ShadowCastingMode* arg, ::System::Boolean arg, ::System::Int32 arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode*, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::RenderTexture* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_SetRTSimple_Injected(::UnityEngine::RenderBuffer&* arg, ::UnityEngine::RenderBuffer&* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::RenderBuffer&*, ::UnityEngine::RenderBuffer&*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawMesh_Injected(::UnityEngine::Mesh* arg, ::System::Int32 arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Camera* arg, ::UnityEngine::MaterialPropertyBlock* arg, ::UnityEngine::Rendering::ShadowCastingMode* arg, ::System::Boolean arg, ::UnityEngine::Transform* arg, ::UnityEngine::Rendering::LightProbeUsage* arg, ::UnityEngine::LightProbeProxyVolume* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode*, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage*, ::UnityEngine::LightProbeProxyVolume*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

