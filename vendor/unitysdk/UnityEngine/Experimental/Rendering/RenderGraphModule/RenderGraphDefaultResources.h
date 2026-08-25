#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKTEXTUREARRAYXR_OFFSET UNITYSDK_OFFSET(0x9F9C260)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_CLEARTEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C270)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKTEXTURE3DXR_OFFSET UNITYSDK_OFFSET(0x9F9C280)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKTEXTUREARRAYXR_OFFSET UNITYSDK_OFFSET(0x9F9C290)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKUINTTEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C2A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9C2B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKTEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C400)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_CLEARTEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C410)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9F9C420)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKTEXTURE3DXR_OFFSET UNITYSDK_OFFSET(0x9F9C470)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_DEFAULTSHADOWTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9C480)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9C490)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_WHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9C4A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_WHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9C4B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_DEFAULTSHADOWTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9C4C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_MAGENTATEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C4D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_MAGENTATEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C4E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_INITIALIZEFORRENDERING_OFFSET UNITYSDK_OFFSET(0x9F9C4F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_WHITETEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C740)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKUINTTEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C750)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_WHITETEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C760)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKTEXTUREXR_OFFSET UNITYSDK_OFFSET(0x9F9C770)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9C780)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphDefaultResources_TypeDefinitionIndex = 33848;

	class RenderGraphDefaultResources : public Il2CppObject
	{
	public:
		::System::Boolean m_IsValid; // 0x10
		::UnityEngine::Rendering::RTHandle* m_BlackTexture2D; // 0x18
		::UnityEngine::Rendering::RTHandle* m_WhiteTexture2D; // 0x20
		::UnityEngine::Rendering::RTHandle* m_ShadowTexture2D; // 0x28
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _blackTexture_k__BackingField; // 0x30
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _whiteTexture_k__BackingField; // 0x40
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _clearTextureXR_k__BackingField; // 0x50
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _magentaTextureXR_k__BackingField; // 0x60
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _blackTextureXR_k__BackingField; // 0x70
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _blackTextureArrayXR_k__BackingField; // 0x80
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _blackUIntTextureXR_k__BackingField; // 0x90
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _blackTexture3DXR_k__BackingField; // 0xA0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _whiteTextureXR_k__BackingField; // 0xB0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _defaultShadowTexture_k__BackingField; // 0xC0

		::System::Void set_blackTextureArrayXR(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKTEXTUREARRAYXR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_clearTextureXR()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_CLEARTEXTUREXR_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_blackTexture3DXR()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKTEXTURE3DXR_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_blackTextureArrayXR()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKTEXTUREARRAYXR_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_blackUIntTextureXR()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKUINTTEXTUREXR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_blackTextureXR(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKTEXTUREXR_OFFSET))(arg, nullptr);
		}

		::System::Void set_clearTextureXR(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_CLEARTEXTUREXR_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void set_blackTexture3DXR(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKTEXTURE3DXR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_defaultShadowTexture()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_DEFAULTSHADOWTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_blackTexture()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_whiteTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_WHITETEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_whiteTexture()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_WHITETEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_defaultShadowTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_DEFAULTSHADOWTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_magentaTextureXR()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_MAGENTATEXTUREXR_OFFSET))(nullptr);
		}

		::System::Void set_magentaTextureXR(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_MAGENTATEXTUREXR_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeForRendering(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_INITIALIZEFORRENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void set_whiteTextureXR(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_WHITETEXTUREXR_OFFSET))(arg, nullptr);
		}

		::System::Void set_blackUIntTextureXR(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKUINTTEXTUREXR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_whiteTextureXR()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_WHITETEXTUREXR_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_blackTextureXR()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_GET_BLACKTEXTUREXR_OFFSET))(nullptr);
		}

		::System::Void set_blackTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEFAULTRESOURCES_SET_BLACKTEXTURE_OFFSET))(arg, nullptr);
		}

	};
}

