#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class CubemapArray; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ClearFlag; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine { class CubemapFace; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering { class RenderBufferLoadAction; }
namespace UnityEngine::Rendering { class RenderBufferStoreAction; }
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine::Rendering { class MSAASamples; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine { class TextureFormat; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Experimental::Rendering { class RendererList; }
namespace UnityEngine::Rendering::RendererUtils { class RendererList; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKCUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD5E20)
#define UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD6190)
#define UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x9FD6500)
#define UNITYENGINE_RENDERING_COREUTILS_GET_WHITECUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD6960)
#define UNITYENGINE_RENDERING_COREUTILS_GET_EMPTYUAV_OFFSET UNITYSDK_OFFSET(0x9FD6CD0)
#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKVOLUMETEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD6E40)
#define UNITYENGINE_RENDERING_COREUTILS_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7010)
#define UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET UNITYSDK_OFFSET(0x9FD7060)
#define UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET UNITYSDK_OFFSET(0x9FD70B0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD70C0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD71C0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7270)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7540)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7400)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7640)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7860)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7760)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7900)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD79F0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7B40)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7C80)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7D90)
#define UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORTANDCLEAR_OFFSET UNITYSDK_OFFSET(0x9FD7EA0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD7FF0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD1AB0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD8190)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD84F0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD82B0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD8620)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD8750)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x9FD8870)
#define UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0x9FD7F40)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET UNITYSDK_OFFSET(0x9FD89F0)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET UNITYSDK_OFFSET(0x9FD8CF0)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET UNITYSDK_OFFSET(0x9FD8DE0)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET UNITYSDK_OFFSET(0x9FD8AE0)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET UNITYSDK_OFFSET(0x9FD8ED0)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET UNITYSDK_OFFSET(0x9FD9470)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET UNITYSDK_OFFSET(0x9FD8FA0)
#define UNITYENGINE_RENDERING_COREUTILS_CLEARCUBEMAP_OFFSET UNITYSDK_OFFSET(0x9FD9540)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9FD9850)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9FD9910)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9FD9A20)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9FD9B70)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9FD9C90)
#define UNITYENGINE_RENDERING_COREUTILS_CONVERTSRGBTOACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x9FD9E30)
#define UNITYENGINE_RENDERING_COREUTILS_CONVERTLINEARTOACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x9FD9EB0)
#define UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x9FD9F30)
#define UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x9FD0330)
#define UNITYENGINE_RENDERING_COREUTILS_HASFLAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUTILS_SWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x9FDA040)
#define UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x9FDA080)
#define UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x9FDA0C0)
#define UNITYENGINE_RENDERING_COREUTILS_DESTROY_OFFSET UNITYSDK_OFFSET(0x9FD0B80)
#define UNITYENGINE_RENDERING_COREUTILS_GETALLASSEMBLYTYPES_OFFSET UNITYSDK_OFFSET(0x9FDA100)
#define UNITYENGINE_RENDERING_COREUTILS_GETALLTYPESDERIVEDFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUTILS_SAFERELEASE_OFFSET UNITYSDK_OFFSET(0x9FDA310)
#define UNITYENGINE_RENDERING_COREUTILS_CREATECUBEMESH_OFFSET UNITYSDK_OFFSET(0x9FDA320)
#define UNITYENGINE_RENDERING_COREUTILS_AREPOSTPROCESSESENABLED_OFFSET UNITYSDK_OFFSET(0x9FDA770)
#define UNITYENGINE_RENDERING_COREUTILS_AREANIMATEDMATERIALSENABLED_OFFSET UNITYSDK_OFFSET(0x9FDA780)
#define UNITYENGINE_RENDERING_COREUTILS_ISSCENELIGHTINGDISABLED_OFFSET UNITYSDK_OFFSET(0x9FDA790)
#define UNITYENGINE_RENDERING_COREUTILS_ISLIGHTOVERLAPDEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x9FDA7A0)
#define UNITYENGINE_RENDERING_COREUTILS_ISSCENEVIEWFOGENABLED_OFFSET UNITYSDK_OFFSET(0x9FDA7B0)
#define UNITYENGINE_RENDERING_COREUTILS_ISSCENEFILTERINGENABLED_OFFSET UNITYSDK_OFFSET(0x9FDA7C0)
#define UNITYENGINE_RENDERING_COREUTILS_ISSCENEVIEWPREFABSTAGECONTEXTHIDDEN_OFFSET UNITYSDK_OFFSET(0x9FDA7D0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWRENDERERLIST_OFFSET UNITYSDK_OFFSET(0x9FDA7E0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWRENDERERLIST_OFFSET UNITYSDK_OFFSET(0x9FDAA60)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREHASH_OFFSET UNITYSDK_OFFSET(0x9FDAB30)
#define UNITYENGINE_RENDERING_COREUTILS_PREVIOUSPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x9FDACE0)
#define UNITYENGINE_RENDERING_COREUTILS_GETLASTENUMVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUTILS_GETCOREPATH_OFFSET UNITYSDK_OFFSET(0x9FDAD10)
#define UNITYENGINE_RENDERING_COREUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FDAD40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUtils_TypeDefinitionIndex = 34060;

	class CoreUtils : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* lookAtList; // 0x0
		::Il2CppArray<::System::Object*>* upVectorList; // 0x8
		::System::String* obsoletePriorityMessage; // 0x0
		::System::Int32 editMenuPriority1; // 0x0
		::System::Int32 editMenuPriority2; // 0x0
		::System::Int32 editMenuPriority3; // 0x0
		::System::Int32 editMenuPriority4; // 0x0
		::System::Int32 assetCreateMenuPriority1; // 0x0
		::System::Int32 assetCreateMenuPriority2; // 0x0
		::System::Int32 assetCreateMenuPriority3; // 0x0
		::System::Int32 gameObjectMenuPriority; // 0x0
		::UnityEngine::Cubemap* m_BlackCubeTexture; // 0x10
		::UnityEngine::Cubemap* m_MagentaCubeTexture; // 0x18
		::UnityEngine::CubemapArray* m_MagentaCubeTextureArray; // 0x20
		::UnityEngine::Cubemap* m_WhiteCubeTexture; // 0x28
		::UnityEngine::RenderTexture* m_EmptyUAV; // 0x30
		::UnityEngine::Texture3D* m_BlackVolumeTexture; // 0x38
		Il2CppObject* m_AssemblyTypes; // 0x40

		::UnityEngine::Cubemap* get_blackCubeTexture()
		{
			return (return (::UnityEngine::Cubemap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_BLACKCUBETEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Cubemap* get_magentaCubeTexture()
		{
			return (return (::UnityEngine::Cubemap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::CubemapArray* get_magentaCubeTextureArray()
		{
			return (return (::UnityEngine::CubemapArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTUREARRAY_OFFSET))(nullptr);
		}

		::UnityEngine::Cubemap* get_whiteCubeTexture()
		{
			return (return (::UnityEngine::Cubemap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_WHITECUBETEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::RenderTexture* get_emptyUAV()
		{
			return (return (::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_EMPTYUAV_OFFSET))(nullptr);
		}

		::UnityEngine::Texture3D* get_blackVolumeTexture()
		{
			return (return (::UnityEngine::Texture3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_BLACKVOLUMETEXTURE_OFFSET))(nullptr);
		}

		::System::Void ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CLEARRENDERTARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FixupDepthSlice(::System::Int32 arg, ::UnityEngine::Rendering::RTHandle* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FixupDepthSlice(::System::Int32 arg, ::UnityEngine::CubemapFace* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::CubemapFace*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::ClearFlag* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::ClearFlag*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::ClearFlag* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::ClearFlag*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORTANDCLEAR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::RTHandle* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RTHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::ClearFlag* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetViewport(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetRenderTargetAutoName(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Rendering::MSAASamples* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET))(arg, arg, arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::String* GetRenderTargetAutoName(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Rendering::MSAASamples* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET))(arg, arg, arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::String* GetRenderTargetAutoName(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Rendering::TextureDimension*, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET))(arg, arg, arg, arg, arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::String* GetRenderTargetAutoName(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::UnityEngine::Rendering::TextureDimension* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Rendering::TextureDimension*, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET))(arg, arg, arg, str, arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::String* GetTextureAutoName(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::String* str, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::UnityEngine::Rendering::TextureDimension*, ::System::String*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET))(arg, arg, arg, arg, str, arg, arg, nullptr);
		}

		::System::String* GetTextureAutoName(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::String* str, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Rendering::TextureDimension*, ::System::String*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET))(arg, arg, arg, arg, str, arg, arg, nullptr);
		}

		::System::String* GetTextureAutoName(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::UnityEngine::Rendering::TextureDimension* arg, ::System::String* str, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Rendering::TextureDimension*, ::System::String*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET))(arg, arg, str, arg, str, arg, arg, nullptr);
		}

		::System::Void ClearCubemap(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Color* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Color*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CLEARCUBEMAP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Material* arg, ::UnityEngine::MaterialPropertyBlock* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Material* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::MaterialPropertyBlock* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Material* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::MaterialPropertyBlock* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Material* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::MaterialPropertyBlock* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Material* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::MaterialPropertyBlock* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* ConvertSRGBToActiveColorSpace(::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CONVERTSRGBTOACTIVECOLORSPACE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* ConvertLinearToActiveColorSpace(::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CONVERTLINEARTOACTIVECOLORSPACE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* CreateEngineMaterial(::System::String* str)
		{
			return (return (::UnityEngine::Material*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_OFFSET))(str, nullptr);
		}

		::UnityEngine::Material* CreateEngineMaterial(::UnityEngine::Shader* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasFlag(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_HASFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Swap(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SWAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetKeyword(::UnityEngine::Rendering::CommandBuffer* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetKeyword(::UnityEngine::Material* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetKeyword(::UnityEngine::ComputeShader* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Destroy(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DESTROY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllAssemblyTypes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETALLASSEMBLYTYPES_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllTypesDerivedFrom()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETALLTYPESDERIVEDFROM_OFFSET))(nullptr);
		}

		::System::Void SafeRelease(::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SAFERELEASE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Mesh* CreateCubeMesh(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Mesh*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATECUBEMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ArePostProcessesEnabled(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_AREPOSTPROCESSESENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean AreAnimatedMaterialsEnabled(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_AREANIMATEDMATERIALSENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSceneLightingDisabled(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_ISSCENELIGHTINGDISABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLightOverlapDebugEnabled(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_ISLIGHTOVERLAPDEBUGENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSceneViewFogEnabled(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_ISSCENEVIEWFOGENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSceneFilteringEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_ISSCENEFILTERINGENABLED_OFFSET))(nullptr);
		}

		::System::Boolean IsSceneViewPrefabStageContextHidden()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_ISSCENEVIEWPREFABSTAGECONTEXTHIDDEN_OFFSET))(nullptr);
		}

		::System::Void DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Experimental::Rendering::RendererList* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Experimental::Rendering::RendererList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWRENDERERLIST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RendererUtils::RendererList* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RendererUtils::RendererList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWRENDERERLIST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetTextureHash(::UnityEngine::Texture* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREHASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 PreviousPowerOfTwo(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_PREVIOUSPOWEROFTWO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetLastEnumValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETLASTENUMVALUE_OFFSET))(nullptr);
		}

		::System::String* GetCorePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETCOREPATH_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

