#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GET_BACKBUFFER_OFFSET UNITYSDK_OFFSET(0xA0DAEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GET_FRONTBUFFER_OFFSET UNITYSDK_OFFSET(0xA0DAF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0DB000)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0xA0DB100)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0xA0DB180)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GETFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0xA0DB360)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_SWAP_OFFSET UNITYSDK_OFFSET(0xA0DB930)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA0DB230)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xA0DB980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_SETCAMERASETTINGS_OFFSET UNITYSDK_OFFSET(0xA0DBA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_SETCAMERASETTINGS_OFFSET UNITYSDK_OFFSET(0xA0DBB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GETBUFFERA_OFFSET UNITYSDK_OFFSET(0xA0DBC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_ENABLEMSAA_OFFSET UNITYSDK_OFFSET(0xA0DBC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0DBC30)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RenderTargetBufferSystem_TypeDefinitionIndex = 32891;

	class RenderTargetBufferSystem : public Il2CppObject
	{
	public:
		SwapBuffer* m_A; // 0x10
		SwapBuffer* m_B; // 0x48
		::System::Boolean m_AisBackBuffer; // 0x0
		::UnityEngine::RenderTextureDescriptor* m_Desc; // 0x4
		::UnityEngine::FilterMode* m_FilterMode; // 0x80
		::System::Boolean m_AllowMSAA; // 0x84
		::System::Boolean m_RTisAllocated; // 0x85

		SwapBuffer* get_backBuffer()
		{
			return (return (SwapBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GET_BACKBUFFER_OFFSET))(nullptr);
		}

		SwapBuffer* get_frontBuffer()
		{
			return (return (SwapBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GET_FRONTBUFFER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_.CTOR_OFFSET))(str, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* GetBackBuffer()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GETBACKBUFFER_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* GetBackBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GETBACKBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* GetFrontBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GETFRONTBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void Swap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_SWAP_OFFSET))(nullptr);
		}

		::System::Void Initialize(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void SetCameraSettings(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg, ::UnityEngine::FilterMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::UnityEngine::FilterMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_SETCAMERASETTINGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetCameraSettings(::UnityEngine::RenderTextureDescriptor* arg, ::UnityEngine::FilterMode* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::UnityEngine::FilterMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_SETCAMERASETTINGS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* GetBufferA()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_GETBUFFERA_OFFSET))(nullptr);
		}

		::System::Void EnableMSAA(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_ENABLEMSAA_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RENDERTARGETBUFFERSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

