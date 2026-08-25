#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define DRAWGRABPASSLIGHTMODEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FF3660)
#define DRAWGRABPASSLIGHTMODEPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0x9FF39E0)
#define DRAWGRABPASSLIGHTMODEPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF2E50)

	inline static constexpr unsigned int DrawGrabPassLightModePass_TypeDefinitionIndex = 32404;

	class DrawGrabPassLightModePass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0xD8
		::UnityEngine::Rendering::ShaderTagId* m_ShaderTagId; // 0xF0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_GrabTexture; // 0xF8
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x128

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + DRAWGRABPASSLIGHTMODEPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + DRAWGRABPASSLIGHTMODEPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + DRAWGRABPASSLIGHTMODEPASS_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};

