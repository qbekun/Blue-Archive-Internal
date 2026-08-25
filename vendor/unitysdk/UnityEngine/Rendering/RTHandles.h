#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RTHandleSystem; }
namespace UnityEngine::Rendering { class RTHandleProperties; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Rendering { class DepthBits; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine { class TextureWrapMode; }
namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine::Rendering { class MSAASamples; }
namespace UnityEngine { class RenderTextureMemoryless; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::Rendering { class ScaleFunc; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }

#define UNITYENGINE_RENDERING_RTHANDLES_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x9FC3FD0)
#define UNITYENGINE_RENDERING_RTHANDLES_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x9FC4050)
#define UNITYENGINE_RENDERING_RTHANDLES_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9FC40D0)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FB9BD0)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC4290)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC4A20)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC4F40)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC52C0)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC5460)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC5600)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC5750)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x9FC5900)
#define UNITYENGINE_RENDERING_RTHANDLES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9FC5960)
#define UNITYENGINE_RENDERING_RTHANDLES_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FB9680)
#define UNITYENGINE_RENDERING_RTHANDLES_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9FC5CE0)
#define UNITYENGINE_RENDERING_RTHANDLES_SETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x9FC5EE0)
#define UNITYENGINE_RENDERING_RTHANDLES_RESETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x9FC5F70)
#define UNITYENGINE_RENDERING_RTHANDLES_CALCULATERATIOAGAINSTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x9FC6010)
#define UNITYENGINE_RENDERING_RTHANDLES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FC6090)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandles_TypeDefinitionIndex = 34026;

	class RTHandles : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RTHandleSystem* s_DefaultInstance; // 0x0

		::System::Int32 get_maxWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_GET_MAXWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_maxHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_GET_MAXHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RTHandleProperties* get_rtHandleProperties()
		{
			return (return (::UnityEngine::Rendering::RTHandleProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_GET_RTHANDLEPROPERTIES_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::DepthBits* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::RenderTextureMemoryless* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DepthBits*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::TextureWrapMode*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::TextureWrapMode* arg, ::System::Int32 arg, ::UnityEngine::Rendering::DepthBits* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::RenderTextureMemoryless* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureWrapMode*, ::UnityEngine::TextureWrapMode*, ::UnityEngine::TextureWrapMode*, ::System::Int32, ::UnityEngine::Rendering::DepthBits*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2* arg, ::System::Int32 arg, ::UnityEngine::Rendering::DepthBits* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::RenderTextureMemoryless* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Vector2*, ::System::Int32, ::UnityEngine::Rendering::DepthBits*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::TextureWrapMode*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* arg, ::System::Int32 arg, ::UnityEngine::Rendering::DepthBits* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::TextureWrapMode* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Rendering::MSAASamples* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::RenderTextureMemoryless* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::ScaleFunc*, ::System::Int32, ::UnityEngine::Rendering::DepthBits*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::UnityEngine::TextureWrapMode*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Texture* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::RenderTexture* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RTHandle* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Release(::UnityEngine::Rendering::RTHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void SetHardwareDynamicResolutionState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetReferenceSize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_SETREFERENCESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetReferenceSize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_RESETREFERENCESIZE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* CalculateRatioAgainstMaxSize(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_CALCULATERATIOAGAINSTMAXSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

