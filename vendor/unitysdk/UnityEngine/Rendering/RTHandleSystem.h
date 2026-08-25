#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RTHandleProperties; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector2Int&; }
namespace UnityEngine::Rendering { class DepthBits; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine { class TextureWrapMode; }
namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine::Rendering { class MSAASamples; }
namespace UnityEngine { class RenderTextureMemoryless; }
namespace UnityEngine::Rendering { class ScaleFunc; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }

#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9FC6290)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FC0BA0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FC0A80)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9FC59F0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FBFED0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_REMOVE_OFFSET UNITYSDK_OFFSET(0x9FC3920)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_RESETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x9FC02E0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x9FC0290)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x9FC6480)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_CALCULATERATIOAGAINSTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x9FC03B0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9FC5D60)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SWITCHRESIZEMODE_OFFSET UNITYSDK_OFFSET(0x9FBFD10)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DEMANDRESIZE_OFFSET UNITYSDK_OFFSET(0x9FC6990)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x9FC6BC0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x9FC6BD0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FC62B0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_RESIZE_OFFSET UNITYSDK_OFFSET(0x9FC66A0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC4170)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC4440)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC4BD0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC5130)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOCAUTOSIZEDRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC6BE0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC54F0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC5350)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC56E0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC5800)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC7190)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DUMPRTINFO_OFFSET UNITYSDK_OFFSET(0x9FC71F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandleSystem_TypeDefinitionIndex = 34030;

	class RTHandleSystem : public Il2CppObject
	{
	public:
		::System::Boolean m_HardwareDynamicResRequested; // 0x10
		Il2CppObject* m_AutoSizedRTs; // 0x18
		::Il2CppArray<::System::Object*>* m_AutoSizedRTsArray; // 0x20
		Il2CppObject* m_ResizeOnDemandRTs; // 0x28
		::UnityEngine::Rendering::RTHandleProperties* m_RTHandleProperties; // 0x30
		::System::Int32 m_MaxWidths; // 0x60
		::System::Int32 m_MaxHeights; // 0x64

		::UnityEngine::Rendering::RTHandleProperties* get_rtHandleProperties()
		{
			return (return (::UnityEngine::Rendering::RTHandleProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Release(::UnityEngine::Rendering::RTHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::UnityEngine::Rendering::RTHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetReferenceSize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_RESETREFERENCESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetReferenceSize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetReferenceSize(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* CalculateRatioAgainstMaxSize(::UnityEngine::Vector2Int&* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2Int&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_CALCULATERATIOAGAINSTMAXSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetHardwareDynamicResolutionState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SwitchResizeMode(::UnityEngine::Rendering::RTHandle* arg, ResizeMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RTHandle*, ResizeMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SWITCHRESIZEMODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DemandResize(::UnityEngine::Rendering::RTHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DEMANDRESIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXHEIGHT_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Resize(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_RESIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::DepthBits* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::RenderTextureMemoryless* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DepthBits*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::TextureWrapMode*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::TextureWrapMode* arg, ::System::Int32 arg, ::UnityEngine::Rendering::DepthBits* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::RenderTextureMemoryless* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureWrapMode*, ::UnityEngine::TextureWrapMode*, ::UnityEngine::TextureWrapMode*, ::System::Int32, ::UnityEngine::Rendering::DepthBits*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2* arg, ::System::Int32 arg, ::UnityEngine::Rendering::DepthBits* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::RenderTextureMemoryless* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Vector2*, ::System::Int32, ::UnityEngine::Rendering::DepthBits*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::TextureWrapMode*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* arg, ::System::Int32 arg, ::UnityEngine::Rendering::DepthBits* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::RenderTextureMemoryless* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::ScaleFunc*, ::System::Int32, ::UnityEngine::Rendering::DepthBits*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::TextureWrapMode*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* AllocAutoSizedRenderTexture(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::DepthBits* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::RenderTextureMemoryless* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DepthBits*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::TextureWrapMode*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOCAUTOSIZEDRENDERTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::RenderTexture* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Texture* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RTHandle* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(arg, nullptr);
		}

		::System::String* DumpRTInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DUMPRTINFO_OFFSET))(nullptr);
		}

	};
}

