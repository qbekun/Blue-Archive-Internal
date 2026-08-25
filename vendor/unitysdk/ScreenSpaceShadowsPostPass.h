#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define SCREENSPACESHADOWSPOSTPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xA06EA80)
#define SCREENSPACESHADOWSPOSTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA06EAD0)
#define SCREENSPACESHADOWSPOSTPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA06ED50)
#define SCREENSPACESHADOWSPOSTPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA06D6D0)

	inline static constexpr unsigned int ScreenSpaceShadowsPostPass_TypeDefinitionIndex = 32739;

	class ScreenSpaceShadowsPostPass : public Il2CppObject
	{
	public:
		::System::String* m_ProfilerTag; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x8

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPOSTPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPOSTPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPOSTPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWSPOSTPASS_.CTOR_OFFSET))(nullptr);
		}

	};

