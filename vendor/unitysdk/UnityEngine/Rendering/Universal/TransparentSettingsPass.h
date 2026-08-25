#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TRANSPARENTSETTINGSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0670A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TRANSPARENTSETTINGSPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA067300)
#define UNITYENGINE_RENDERING_UNIVERSAL_TRANSPARENTSETTINGSPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0673A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TRANSPARENTSETTINGSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA067440)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TransparentSettingsPass_TypeDefinitionIndex = 32716;

	class TransparentSettingsPass : public Il2CppObject
	{
	public:
		::System::Boolean m_shouldReceiveShadows; // 0xD8
		::System::String* m_ProfilerTag; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x0

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TRANSPARENTSETTINGSPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TRANSPARENTSETTINGSPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TRANSPARENTSETTINGSPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Setup(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TRANSPARENTSETTINGSPASS_SETUP_OFFSET))(arg, nullptr);
		}

	};
}

