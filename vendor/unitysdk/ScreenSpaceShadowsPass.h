#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceShadowsSettings; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }

#define SCREENSPACESHADOWSPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA06DC10)
#define SCREENSPACESHADOWSPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA06DCC0)
#define SCREENSPACESHADOWSPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA06D5D0)
#define SCREENSPACESHADOWSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA06E050)
#define SCREENSPACESHADOWSPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA06E9B0)
#define SCREENSPACESHADOWSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA06DB00)

	inline static constexpr unsigned int ScreenSpaceShadowsPass_TypeDefinitionIndex = 32738;

	class ScreenSpaceShadowsPass : public Il2CppObject
	{
	public:
		::System::String* m_ProfilerTag; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x8
		::UnityEngine::Material* m_Material; // 0xD8
		::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* m_CurrentSettings; // 0xE0
		::UnityEngine::RenderTextureDescriptor* m_RenderTextureDescriptor; // 0xE8
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_RenderTarget; // 0x120
		::System::String* k_SSShadowsTextureName; // 0x0

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean Setup(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* arg, ::UnityEngine::Material* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPASS_SETUP_OFFSET))(arg, arg, nullptr);
		}

	};

